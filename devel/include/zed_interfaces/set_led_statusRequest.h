// Generated by gencpp from file zed_interfaces/set_led_statusRequest.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_SET_LED_STATUSREQUEST_H
#define ZED_INTERFACES_MESSAGE_SET_LED_STATUSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zed_interfaces
{
template <class ContainerAllocator>
struct set_led_statusRequest_
{
  typedef set_led_statusRequest_<ContainerAllocator> Type;

  set_led_statusRequest_()
    : led_enabled(false)  {
    }
  set_led_statusRequest_(const ContainerAllocator& _alloc)
    : led_enabled(false)  {
  (void)_alloc;
    }



   typedef uint8_t _led_enabled_type;
  _led_enabled_type led_enabled;





  typedef boost::shared_ptr< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_led_statusRequest_

typedef ::zed_interfaces::set_led_statusRequest_<std::allocator<void> > set_led_statusRequest;

typedef boost::shared_ptr< ::zed_interfaces::set_led_statusRequest > set_led_statusRequestPtr;
typedef boost::shared_ptr< ::zed_interfaces::set_led_statusRequest const> set_led_statusRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'zed_interfaces': ['/home/nvidia/catkin_ws/src/zed-ros-wrapper/zed_interfaces/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2e0f7cf20d5f300d5382e9eab56e737";
  }

  static const char* value(const ::zed_interfaces::set_led_statusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2e0f7cf20d5f300ULL;
  static const uint64_t static_value2 = 0xd5382e9eab56e737ULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/set_led_statusRequest";
  }

  static const char* value(const ::zed_interfaces::set_led_statusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool led_enabled\n"
;
  }

  static const char* value(const ::zed_interfaces::set_led_statusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.led_enabled);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_led_statusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::set_led_statusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::set_led_statusRequest_<ContainerAllocator>& v)
  {
    s << indent << "led_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.led_enabled);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_SET_LED_STATUSREQUEST_H
