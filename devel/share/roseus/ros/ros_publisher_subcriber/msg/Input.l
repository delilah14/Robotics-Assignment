;; Auto-generated. Do not edit!


(when (boundp 'ros_publisher_subcriber::Input)
  (if (not (find-package "ROS_PUBLISHER_SUBCRIBER"))
    (make-package "ROS_PUBLISHER_SUBCRIBER"))
  (shadow 'Input (find-package "ROS_PUBLISHER_SUBCRIBER")))
(unless (find-package "ROS_PUBLISHER_SUBCRIBER::INPUT")
  (make-package "ROS_PUBLISHER_SUBCRIBER::INPUT"))

(in-package "ROS")
;;//! \htmlinclude Input.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ros_publisher_subcriber::Input
  :super ros::object
  :slots (_header _distance _vector ))

(defmethod ros_publisher_subcriber::Input
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:distance __distance) 0)
    ((:vector __vector) (instance geometry_msgs::Twist :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _distance (round __distance))
   (setq _vector __vector)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:vector
   (&rest __vector)
   (if (keywordp (car __vector))
       (send* _vector __vector)
     (progn
       (if __vector (setq _vector (car __vector)))
       _vector)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int64 _distance
    8
    ;; geometry_msgs/Twist _vector
    (send _vector :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int64 _distance
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _distance (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _distance) (= (length (_distance . bv)) 2)) ;; bignum
              (write-long (ash (elt (_distance . bv) 0) 0) s)
              (write-long (ash (elt (_distance . bv) 1) -1) s))
             ((and (class _distance) (= (length (_distance . bv)) 1)) ;; big1
              (write-long (elt (_distance . bv) 0) s)
              (write-long (if (>= _distance 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _distance s)(write-long (if (>= _distance 0) 0 #xffffffff) s)))
     ;; geometry_msgs/Twist _vector
       (send _vector :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int64 _distance
#+(or :alpha :irix6 :x86_64)
      (setf _distance (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _distance (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; geometry_msgs/Twist _vector
     (send _vector :deserialize buf ptr-) (incf ptr- (send _vector :serialization-length))
   ;;
   self)
  )

(setf (get ros_publisher_subcriber::Input :md5sum-) "7d0c4da82dfe1372ef115685d4f67ede")
(setf (get ros_publisher_subcriber::Input :datatype-) "ros_publisher_subcriber/Input")
(setf (get ros_publisher_subcriber::Input :definition-)
      "Header header
int64 distance
geometry_msgs/Twist vector
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :ros_publisher_subcriber/Input "7d0c4da82dfe1372ef115685d4f67ede")

