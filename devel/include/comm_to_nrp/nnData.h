// Generated by gencpp from file comm_to_nrp/nnData.msg
// DO NOT EDIT!


#ifndef COMM_TO_NRP_MESSAGE_NNDATA_H
#define COMM_TO_NRP_MESSAGE_NNDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace comm_to_nrp
{
template <class ContainerAllocator>
struct nnData_
{
  typedef nnData_<ContainerAllocator> Type;

  nnData_()
    : activateHumerus1(0.0)
    , activateHumerus2(0.0)
    , activateRadius1(0.0)
    , activateRadius2(0.0)
    , activateFoot1(0.0)
    , activateFoot2(0.0)  {
    }
  nnData_(const ContainerAllocator& _alloc)
    : activateHumerus1(0.0)
    , activateHumerus2(0.0)
    , activateRadius1(0.0)
    , activateRadius2(0.0)
    , activateFoot1(0.0)
    , activateFoot2(0.0)  {
  (void)_alloc;
    }



   typedef double _activateHumerus1_type;
  _activateHumerus1_type activateHumerus1;

   typedef double _activateHumerus2_type;
  _activateHumerus2_type activateHumerus2;

   typedef double _activateRadius1_type;
  _activateRadius1_type activateRadius1;

   typedef double _activateRadius2_type;
  _activateRadius2_type activateRadius2;

   typedef double _activateFoot1_type;
  _activateFoot1_type activateFoot1;

   typedef double _activateFoot2_type;
  _activateFoot2_type activateFoot2;





  typedef boost::shared_ptr< ::comm_to_nrp::nnData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_to_nrp::nnData_<ContainerAllocator> const> ConstPtr;

}; // struct nnData_

typedef ::comm_to_nrp::nnData_<std::allocator<void> > nnData;

typedef boost::shared_ptr< ::comm_to_nrp::nnData > nnDataPtr;
typedef boost::shared_ptr< ::comm_to_nrp::nnData const> nnDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_to_nrp::nnData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_to_nrp::nnData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_to_nrp::nnData_<ContainerAllocator1> & lhs, const ::comm_to_nrp::nnData_<ContainerAllocator2> & rhs)
{
  return lhs.activateHumerus1 == rhs.activateHumerus1 &&
    lhs.activateHumerus2 == rhs.activateHumerus2 &&
    lhs.activateRadius1 == rhs.activateRadius1 &&
    lhs.activateRadius2 == rhs.activateRadius2 &&
    lhs.activateFoot1 == rhs.activateFoot1 &&
    lhs.activateFoot2 == rhs.activateFoot2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_to_nrp::nnData_<ContainerAllocator1> & lhs, const ::comm_to_nrp::nnData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_to_nrp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::comm_to_nrp::nnData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_to_nrp::nnData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_to_nrp::nnData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_to_nrp::nnData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_to_nrp::nnData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_to_nrp::nnData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_to_nrp::nnData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79ab03d61f0d9bfe944988203a0aaa74";
  }

  static const char* value(const ::comm_to_nrp::nnData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79ab03d61f0d9bfeULL;
  static const uint64_t static_value2 = 0x944988203a0aaa74ULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_to_nrp::nnData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_to_nrp/nnData";
  }

  static const char* value(const ::comm_to_nrp::nnData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_to_nrp::nnData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 activateHumerus1\n"
"float64 activateHumerus2\n"
"float64 activateRadius1\n"
"float64 activateRadius2\n"
"float64 activateFoot1\n"
"float64 activateFoot2\n"
;
  }

  static const char* value(const ::comm_to_nrp::nnData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_to_nrp::nnData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.activateHumerus1);
      stream.next(m.activateHumerus2);
      stream.next(m.activateRadius1);
      stream.next(m.activateRadius2);
      stream.next(m.activateFoot1);
      stream.next(m.activateFoot2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct nnData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_to_nrp::nnData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_to_nrp::nnData_<ContainerAllocator>& v)
  {
    s << indent << "activateHumerus1: ";
    Printer<double>::stream(s, indent + "  ", v.activateHumerus1);
    s << indent << "activateHumerus2: ";
    Printer<double>::stream(s, indent + "  ", v.activateHumerus2);
    s << indent << "activateRadius1: ";
    Printer<double>::stream(s, indent + "  ", v.activateRadius1);
    s << indent << "activateRadius2: ";
    Printer<double>::stream(s, indent + "  ", v.activateRadius2);
    s << indent << "activateFoot1: ";
    Printer<double>::stream(s, indent + "  ", v.activateFoot1);
    s << indent << "activateFoot2: ";
    Printer<double>::stream(s, indent + "  ", v.activateFoot2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_TO_NRP_MESSAGE_NNDATA_H