// Generated by gencpp from file rosbot_ekf/Imu.msg
// DO NOT EDIT!


#ifndef ROSBOT_EKF_MESSAGE_IMU_H
#define ROSBOT_EKF_MESSAGE_IMU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>

namespace rosbot_ekf
{
template <class ContainerAllocator>
struct Imu_
{
  typedef Imu_<ContainerAllocator> Type;

  Imu_()
    : header()
    , orientation()
    , angular_velocity()
    , linear_acceleration()  {
      angular_velocity.assign(0.0);

      linear_acceleration.assign(0.0);
  }
  Imu_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , orientation(_alloc)
    , angular_velocity()
    , linear_acceleration()  {
  (void)_alloc;
      angular_velocity.assign(0.0);

      linear_acceleration.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef boost::array<float, 3>  _angular_velocity_type;
  _angular_velocity_type angular_velocity;

   typedef boost::array<float, 3>  _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;





  typedef boost::shared_ptr< ::rosbot_ekf::Imu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbot_ekf::Imu_<ContainerAllocator> const> ConstPtr;

}; // struct Imu_

typedef ::rosbot_ekf::Imu_<std::allocator<void> > Imu;

typedef boost::shared_ptr< ::rosbot_ekf::Imu > ImuPtr;
typedef boost::shared_ptr< ::rosbot_ekf::Imu const> ImuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbot_ekf::Imu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbot_ekf::Imu_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosbot_ekf::Imu_<ContainerAllocator1> & lhs, const ::rosbot_ekf::Imu_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.orientation == rhs.orientation &&
    lhs.angular_velocity == rhs.angular_velocity &&
    lhs.linear_acceleration == rhs.linear_acceleration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosbot_ekf::Imu_<ContainerAllocator1> & lhs, const ::rosbot_ekf::Imu_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosbot_ekf

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::rosbot_ekf::Imu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbot_ekf::Imu_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbot_ekf::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbot_ekf::Imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbot_ekf::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbot_ekf::Imu_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbot_ekf::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d83bdcabfe2927ed38c36f102a9f646";
  }

  static const char* value(const ::rosbot_ekf::Imu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d83bdcabfe2927eULL;
  static const uint64_t static_value2 = 0xd38c36f102a9f646ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbot_ekf::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbot_ekf/Imu";
  }

  static const char* value(const ::rosbot_ekf::Imu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbot_ekf::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"geometry_msgs/Quaternion orientation\n"
"\n"
"float32[3] angular_velocity         # [gx, gy, gz] in DPS (degrees per second)\n"
"\n"
"float32[3] linear_acceleration      # [ax, ay, az] in g's (gravitational acceleration)\n"
"\n"
"\n"
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
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::rosbot_ekf::Imu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbot_ekf::Imu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.orientation);
      stream.next(m.angular_velocity);
      stream.next(m.linear_acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Imu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbot_ekf::Imu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbot_ekf::Imu_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "angular_velocity[]" << std::endl;
    for (size_t i = 0; i < v.angular_velocity.size(); ++i)
    {
      s << indent << "  angular_velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angular_velocity[i]);
    }
    s << indent << "linear_acceleration[]" << std::endl;
    for (size_t i = 0; i < v.linear_acceleration.size(); ++i)
    {
      s << indent << "  linear_acceleration[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.linear_acceleration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBOT_EKF_MESSAGE_IMU_H
