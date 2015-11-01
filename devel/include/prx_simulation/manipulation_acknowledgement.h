// Generated by gencpp from file prx_simulation/manipulation_acknowledgement.msg
// DO NOT EDIT!


#ifndef PRX_SIMULATION_MESSAGE_MANIPULATION_ACKNOWLEDGEMENT_H
#define PRX_SIMULATION_MESSAGE_MANIPULATION_ACKNOWLEDGEMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace prx_simulation
{
template <class ContainerAllocator>
struct manipulation_acknowledgement_
{
  typedef manipulation_acknowledgement_<ContainerAllocator> Type;

  manipulation_acknowledgement_()
    : time(0.0)
    , done(false)  {
    }
  manipulation_acknowledgement_(const ContainerAllocator& _alloc)
    : time(0.0)
    , done(false)  {
    }



   typedef double _time_type;
  _time_type time;

   typedef uint8_t _done_type;
  _done_type done;




  typedef boost::shared_ptr< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> const> ConstPtr;

}; // struct manipulation_acknowledgement_

typedef ::prx_simulation::manipulation_acknowledgement_<std::allocator<void> > manipulation_acknowledgement;

typedef boost::shared_ptr< ::prx_simulation::manipulation_acknowledgement > manipulation_acknowledgementPtr;
typedef boost::shared_ptr< ::prx_simulation::manipulation_acknowledgement const> manipulation_acknowledgementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace prx_simulation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'prx_simulation': ['/home/parallels/Desktop/ROS_workspace/src/prx_simulation/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "244152839b648407f2c4e9a846036ed5";
  }

  static const char* value(const ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x244152839b648407ULL;
  static const uint64_t static_value2 = 0xf2c4e9a846036ed5ULL;
};

template<class ContainerAllocator>
struct DataType< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prx_simulation/manipulation_acknowledgement";
  }

  static const char* value(const ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 time\n\
bool done\n\
\n\
";
  }

  static const char* value(const ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.done);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct manipulation_acknowledgement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prx_simulation::manipulation_acknowledgement_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "done: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.done);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRX_SIMULATION_MESSAGE_MANIPULATION_ACKNOWLEDGEMENT_H