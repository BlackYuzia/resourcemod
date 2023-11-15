// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_unified_base.steamworkssdk.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4024000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4024003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_steammessages_5funified_5fbase_2esteamworkssdk_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_steammessages_5funified_5fbase_2esteamworkssdk_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

enum EProtoExecutionSite : int {
  k_EProtoExecutionSiteUnknown = 0,
  k_EProtoExecutionSiteSteamClient = 3,
};

bool EProtoExecutionSite_IsValid(int value);
constexpr EProtoExecutionSite EProtoExecutionSite_MIN = static_cast<EProtoExecutionSite>(0);
constexpr EProtoExecutionSite EProtoExecutionSite_MAX = static_cast<EProtoExecutionSite>(3);
constexpr int EProtoExecutionSite_ARRAYSIZE = 3 + 1;
const ::google::protobuf::EnumDescriptor*
EProtoExecutionSite_descriptor();
template <typename T>
const std::string& EProtoExecutionSite_Name(T value) {
  static_assert(std::is_same<T, EProtoExecutionSite>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to EProtoExecutionSite_Name().");
  return EProtoExecutionSite_Name(static_cast<EProtoExecutionSite>(value));
}
template <>
inline const std::string& EProtoExecutionSite_Name(EProtoExecutionSite value) {
  return ::google::protobuf::internal::NameOfDenseEnum<EProtoExecutionSite_descriptor,
                                                 0, 3>(
      static_cast<int>(value));
}
inline bool EProtoExecutionSite_Parse(absl::string_view name, EProtoExecutionSite* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EProtoExecutionSite>(
      EProtoExecutionSite_descriptor(), name, value);
}

// ===================================================================



// ===================================================================



static const int kDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  description;
static const int kServiceDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  service_description;
static const int kServiceExecutionSiteFieldNumber = 50008;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::google::protobuf::internal::EnumTypeTraits< ::EProtoExecutionSite, ::EProtoExecutionSite_IsValid>, 14, false >
  service_execution_site;
static const int kMethodDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  method_description;
static const int kEnumDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_description;
static const int kEnumValueDescriptionFieldNumber = 50000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_value_description;

// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::EProtoExecutionSite> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::EProtoExecutionSite>() {
  return ::EProtoExecutionSite_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_2epb_2eh
