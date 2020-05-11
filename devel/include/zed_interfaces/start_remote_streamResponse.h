// Generated by gencpp from file zed_interfaces/start_remote_streamResponse.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_START_REMOTE_STREAMRESPONSE_H
#define ZED_INTERFACES_MESSAGE_START_REMOTE_STREAMRESPONSE_H


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
struct start_remote_streamResponse_
{
  typedef start_remote_streamResponse_<ContainerAllocator> Type;

  start_remote_streamResponse_()
    : result(false)
    , info()  {
    }
  start_remote_streamResponse_(const ContainerAllocator& _alloc)
    : result(false)
    , info(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  _info_type info;





  typedef boost::shared_ptr< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> const> ConstPtr;

}; // struct start_remote_streamResponse_

typedef ::zed_interfaces::start_remote_streamResponse_<std::allocator<void> > start_remote_streamResponse;

typedef boost::shared_ptr< ::zed_interfaces::start_remote_streamResponse > start_remote_streamResponsePtr;
typedef boost::shared_ptr< ::zed_interfaces::start_remote_streamResponse const> start_remote_streamResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'zed_interfaces': ['/home/nvidia/catkin_ws/src/zed-ros-wrapper/zed_interfaces/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "929b8c0d7b68510a3f501a60258c746e";
  }

  static const char* value(const ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x929b8c0d7b68510aULL;
  static const uint64_t static_value2 = 0x3f501a60258c746eULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/start_remote_streamResponse";
  }

  static const char* value(const ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool result\n"
"string info\n"
"\n"
;
  }

  static const char* value(const ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct start_remote_streamResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::start_remote_streamResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_START_REMOTE_STREAMRESPONSE_H
