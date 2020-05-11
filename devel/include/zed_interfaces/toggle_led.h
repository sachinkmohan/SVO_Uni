// Generated by gencpp from file zed_interfaces/toggle_led.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_TOGGLE_LED_H
#define ZED_INTERFACES_MESSAGE_TOGGLE_LED_H

#include <ros/service_traits.h>


#include <zed_interfaces/toggle_ledRequest.h>
#include <zed_interfaces/toggle_ledResponse.h>


namespace zed_interfaces
{

struct toggle_led
{

typedef toggle_ledRequest Request;
typedef toggle_ledResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct toggle_led
} // namespace zed_interfaces


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::zed_interfaces::toggle_led > {
  static const char* value()
  {
    return "866beb482157f32341c9f0eac54a1e38";
  }

  static const char* value(const ::zed_interfaces::toggle_led&) { return value(); }
};

template<>
struct DataType< ::zed_interfaces::toggle_led > {
  static const char* value()
  {
    return "zed_interfaces/toggle_led";
  }

  static const char* value(const ::zed_interfaces::toggle_led&) { return value(); }
};


// service_traits::MD5Sum< ::zed_interfaces::toggle_ledRequest> should match 
// service_traits::MD5Sum< ::zed_interfaces::toggle_led > 
template<>
struct MD5Sum< ::zed_interfaces::toggle_ledRequest>
{
  static const char* value()
  {
    return MD5Sum< ::zed_interfaces::toggle_led >::value();
  }
  static const char* value(const ::zed_interfaces::toggle_ledRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::zed_interfaces::toggle_ledRequest> should match 
// service_traits::DataType< ::zed_interfaces::toggle_led > 
template<>
struct DataType< ::zed_interfaces::toggle_ledRequest>
{
  static const char* value()
  {
    return DataType< ::zed_interfaces::toggle_led >::value();
  }
  static const char* value(const ::zed_interfaces::toggle_ledRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::zed_interfaces::toggle_ledResponse> should match 
// service_traits::MD5Sum< ::zed_interfaces::toggle_led > 
template<>
struct MD5Sum< ::zed_interfaces::toggle_ledResponse>
{
  static const char* value()
  {
    return MD5Sum< ::zed_interfaces::toggle_led >::value();
  }
  static const char* value(const ::zed_interfaces::toggle_ledResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::zed_interfaces::toggle_ledResponse> should match 
// service_traits::DataType< ::zed_interfaces::toggle_led > 
template<>
struct DataType< ::zed_interfaces::toggle_ledResponse>
{
  static const char* value()
  {
    return DataType< ::zed_interfaces::toggle_led >::value();
  }
  static const char* value(const ::zed_interfaces::toggle_ledResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_TOGGLE_LED_H