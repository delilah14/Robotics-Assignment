#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>
#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "arm_lib/release_catch_cmd.h"

#include <sstream>

namespace gazebo
{
	class GripController : public ModelPlugin
	{

	public:
		void responseReleaseCatchInput(const arm_lib::release_catch_cmd& msg)
		{		
			std::string input_cmd = msg.release_catch_cmd;		
			
			std::string palm_rightfinger = this->model->GetJoint("palm_rightfinger_joint")->GetScopedName();
			std::string palm_leftfinger = this->model->GetJoint("palm_leftfinger_joint")->GetScopedName();
			//rostopic pub  /release_catch_pub arm_lib/release_catch_cmd catch
			//rostopic pub  /release_catch_pub arm_lib/release_catch_cmd release
            if(input_cmd == "catch"){
			    this->jointController->SetPositionTarget(palm_rightfinger, -0.3);
				this->jointController->SetPositionTarget(palm_rightfinger, 0.3);
			}			
			else if(input_cmd == "release"){
			    this->jointController->SetPositionTarget(palm_rightfinger, -0.8);
				this->jointController->SetPositionTarget(palm_leftfinger, 0.8);
			}
		}

		void Load(physics::ModelPtr _parent, sdf::ElementPtr /*_sdf*/)
		{
            this->model = _parent;
			this->jointController = this->model->GetJointController();

			this->updateConnection = event::Events::ConnectWorldUpdateBegin(
				std::bind(&GripController::OnUpdate, this));

			int argc = 0;
			char **argv = NULL;
			ros::init(argc, argv, "ros_control");			
			sub = n.subscribe("/release_catch_pub", 1000, &GripController::responseReleaseCatchInput, this);
			ros::spinOnce();

		}

		void OnUpdate()
		{
			ros::spinOnce();
		}

	private:
		physics::ModelPtr model;

		physics::JointControllerPtr jointController;

		event::ConnectionPtr updateConnection;

		ros::NodeHandle n;

		ros::Subscriber sub;
	};

	GZ_REGISTER_MODEL_PLUGIN(GripController)
}