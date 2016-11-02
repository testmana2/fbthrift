/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp/Thrift.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/protocol/TProtocol.h>
#include <thrift/lib/cpp/transport/TTransport.h>

namespace apache { namespace thrift { namespace reflection {
class Schema;
}}}


namespace MODULE0 {

enum Enum {
  ONE = 1,
  TWO = 2,
  THREE = 3
};

extern const std::map<int, const char*> _Enum_VALUES_TO_NAMES;

extern const std::map<const char*, int, apache::thrift::ltstr> _Enum_NAMES_TO_VALUES;

} // namespace
namespace apache { namespace thrift {
template<>
struct TEnumTraits< ::MODULE0::Enum> : public TEnumTraitsBase< ::MODULE0::Enum>
{
inline static constexpr  ::MODULE0::Enum min() {
return  ::MODULE0::Enum::ONE;
}
inline static constexpr  ::MODULE0::Enum max() {
return  ::MODULE0::Enum::THREE;
}
};
}} // apache:thrift

namespace MODULE0 {
class Struct;

void swap(Struct &a, Struct &b);

class Struct : public apache::thrift::TStructType<Struct> {
 public:

  static const uint64_t _reflection_id = 11424233335995828524U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  Struct() : first(0) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Struct(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Struct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    first = arg.move();
    __isset.first = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Struct(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Struct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    second = arg.move();
    __isset.second = true;
  }

  Struct(const Struct&) = default;
  Struct& operator=(const Struct& src)= default;
  Struct(Struct&&) = default;
  Struct& operator=(Struct&&) = default;

  void __clear();

  virtual ~Struct() throw() {}

  int32_t first;
  std::string second;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      first = false;
      second = false;
    }
    bool first;
    bool second;
  } __isset;

  bool operator == (const Struct &) const;
  bool operator != (const Struct& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Struct & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class Struct;
void merge(const Struct& from, Struct& to);
void merge(Struct&& from, Struct& to);
} // namespace

