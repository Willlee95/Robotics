// Generated by gencpp from file prx_utilities/send_plants_srvRequest.msg
// DO NOT EDIT!


#ifndef PRX_UTILITIES_MESSAGE_SEND_PLANTS_SRVREQUEST_H
#define PRX_UTILITIES_MESSAGE_SEND_PLANTS_SRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace prx_utilities
{
template <class ContainerAllocator>
struct send_plants_srvRequest_
{
  typedef send_plants_srvRequest_<ContainerAllocator> Type;

  send_plants_srvRequest_()
    : paths()
    , system_path()
    , source_node_name()  {
    }
  send_plants_srvRequest_(const ContainerAllocator& _alloc)
    : paths(_alloc)
    , system_path(_alloc)
    , source_node_name(_alloc)  {
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _paths_type;
  _paths_type paths;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _system_path_type;
  _system_path_type system_path;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _source_node_name_type;
  _source_node_name_type source_node_name;




  typedef boost::shared_ptr< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct send_plants_srvRequest_

typedef ::prx_utilities::send_plants_srvRequest_<std::allocator<void> > send_plants_srvRequest;

typedef boost::shared_ptr< ::prx_utilities::send_plants_srvRequest > send_plants_srvRequestPtr;
typedef boost::shared_ptr< ::prx_utilities::send_plants_srvRequest const> send_plants_srvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace prx_utilities

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'prx_utilities': ['/home/parallels/Desktop/ROS_workspace/src/prx_utilities/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48b570b62ff85364915797407df6efaf";
  }

  static const char* value(const ::prx_utilities::send_plants_srvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48b570b62ff85364ULL;
  static const uint64_t static_value2 = 0x915797407df6efafULL;
};

template<class ContainerAllocator>
struct DataType< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prx_utilities/send_plants_srvRequest";
  }

  static const char* value(const ::prx_utilities::send_plants_srvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] paths\n\
string[] system_path\n\
string source_node_name\n\
";
  }

  static const char* value(const ::prx_utilities::send_plants_srvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.paths);
      stream.next(m.system_path);
      stream.next(m.source_node_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct send_plants_srvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prx_utilities::send_plants_srvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prx_utilities::send_plants_srvRequest_<ContainerAllocator>& v)
  {
    s << indent << "paths[]" << std::endl;
    for (size_t i = 0; i < v.paths.size(); ++i)
    {
      s << indent << "  paths[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.paths[i]);
    }
    s << indent << "system_path[]" << std::endl;
    for (size_t i = 0; i < v.system_path.size(); ++i)
    {
      s << indent << "  system_path[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.system_path[i]);
    }
    s << indent << "source_node_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.source_node_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRX_UTILITIES_MESSAGE_SEND_PLANTS_SRVREQUEST_H