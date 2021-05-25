// Generated by gencpp from file ros_publisher_subcriber/Input.msg
// DO NOT EDIT!


#ifndef ROS_PUBLISHER_SUBCRIBER_MESSAGE_INPUT_H
#define ROS_PUBLISHER_SUBCRIBER_MESSAGE_INPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Twist.h>

namespace ros_publisher_subcriber
{
template <class ContainerAllocator>
struct Input_
{
  typedef Input_<ContainerAllocator> Type;

  Input_()
    : header()
    , distance(0)
    , vector()  {
    }
  Input_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , distance(0)
    , vector(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int64_t _distance_type;
  _distance_type distance;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _vector_type;
  _vector_type vector;





  typedef boost::shared_ptr< ::ros_publisher_subcriber::Input_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_publisher_subcriber::Input_<ContainerAllocator> const> ConstPtr;

}; // struct Input_

typedef ::ros_publisher_subcriber::Input_<std::allocator<void> > Input;

typedef boost::shared_ptr< ::ros_publisher_subcriber::Input > InputPtr;
typedef boost::shared_ptr< ::ros_publisher_subcriber::Input const> InputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_publisher_subcriber::Input_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_publisher_subcriber::Input_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_publisher_subcriber::Input_<ContainerAllocator1> & lhs, const ::ros_publisher_subcriber::Input_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.distance == rhs.distance &&
    lhs.vector == rhs.vector;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_publisher_subcriber::Input_<ContainerAllocator1> & lhs, const ::ros_publisher_subcriber::Input_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_publisher_subcriber

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_publisher_subcriber::Input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_publisher_subcriber::Input_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_publisher_subcriber::Input_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d0c4da82dfe1372ef115685d4f67ede";
  }

  static const char* value(const ::ros_publisher_subcriber::Input_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d0c4da82dfe1372ULL;
  static const uint64_t static_value2 = 0xef115685d4f67edeULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_publisher_subcriber/Input";
  }

  static const char* value(const ::ros_publisher_subcriber::Input_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int64 distance\n"
"geometry_msgs/Twist vector\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::ros_publisher_subcriber::Input_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.distance);
      stream.next(m.vector);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Input_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_publisher_subcriber::Input_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_publisher_subcriber::Input_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "distance: ";
    Printer<int64_t>::stream(s, indent + "  ", v.distance);
    s << indent << "vector: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.vector);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_PUBLISHER_SUBCRIBER_MESSAGE_INPUT_H