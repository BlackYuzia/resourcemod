// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_helprequest.steamworkssdk.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_steammessages_5fhelprequest_2esteamworkssdk_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_steammessages_5fhelprequest_2esteamworkssdk_2eproto_2epb_2eh

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
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/service.h"
#include "google/protobuf/unknown_field_set.h"
#include "steammessages_unified_base.steamworkssdk.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_steammessages_5fhelprequest_2esteamworkssdk_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_steammessages_5fhelprequest_2esteamworkssdk_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_steammessages_5fhelprequest_2esteamworkssdk_2eproto;
class CHelpRequestLogs_UploadUserApplicationLog_Request;
struct CHelpRequestLogs_UploadUserApplicationLog_RequestDefaultTypeInternal;
extern CHelpRequestLogs_UploadUserApplicationLog_RequestDefaultTypeInternal _CHelpRequestLogs_UploadUserApplicationLog_Request_default_instance_;
class CHelpRequestLogs_UploadUserApplicationLog_Response;
struct CHelpRequestLogs_UploadUserApplicationLog_ResponseDefaultTypeInternal;
extern CHelpRequestLogs_UploadUserApplicationLog_ResponseDefaultTypeInternal _CHelpRequestLogs_UploadUserApplicationLog_Response_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class CHelpRequestLogs_UploadUserApplicationLog_Request final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CHelpRequestLogs_UploadUserApplicationLog_Request) */ {
 public:
  inline CHelpRequestLogs_UploadUserApplicationLog_Request() : CHelpRequestLogs_UploadUserApplicationLog_Request(nullptr) {}
  ~CHelpRequestLogs_UploadUserApplicationLog_Request() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CHelpRequestLogs_UploadUserApplicationLog_Request(::google::protobuf::internal::ConstantInitialized);

  CHelpRequestLogs_UploadUserApplicationLog_Request(const CHelpRequestLogs_UploadUserApplicationLog_Request& from);
  CHelpRequestLogs_UploadUserApplicationLog_Request(CHelpRequestLogs_UploadUserApplicationLog_Request&& from) noexcept
    : CHelpRequestLogs_UploadUserApplicationLog_Request() {
    *this = ::std::move(from);
  }

  inline CHelpRequestLogs_UploadUserApplicationLog_Request& operator=(const CHelpRequestLogs_UploadUserApplicationLog_Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline CHelpRequestLogs_UploadUserApplicationLog_Request& operator=(CHelpRequestLogs_UploadUserApplicationLog_Request&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CHelpRequestLogs_UploadUserApplicationLog_Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const CHelpRequestLogs_UploadUserApplicationLog_Request* internal_default_instance() {
    return reinterpret_cast<const CHelpRequestLogs_UploadUserApplicationLog_Request*>(
               &_CHelpRequestLogs_UploadUserApplicationLog_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CHelpRequestLogs_UploadUserApplicationLog_Request& a, CHelpRequestLogs_UploadUserApplicationLog_Request& b) {
    a.Swap(&b);
  }
  inline void Swap(CHelpRequestLogs_UploadUserApplicationLog_Request* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CHelpRequestLogs_UploadUserApplicationLog_Request* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CHelpRequestLogs_UploadUserApplicationLog_Request* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CHelpRequestLogs_UploadUserApplicationLog_Request>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CHelpRequestLogs_UploadUserApplicationLog_Request& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const CHelpRequestLogs_UploadUserApplicationLog_Request& from) {
    CHelpRequestLogs_UploadUserApplicationLog_Request::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CHelpRequestLogs_UploadUserApplicationLog_Request* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "CHelpRequestLogs_UploadUserApplicationLog_Request";
  }
  protected:
  explicit CHelpRequestLogs_UploadUserApplicationLog_Request(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogTypeFieldNumber = 2,
    kVersionStringFieldNumber = 3,
    kLogContentsFieldNumber = 4,
    kAppidFieldNumber = 1,
  };
  // optional string log_type = 2;
  bool has_log_type() const;
  void clear_log_type() ;
  const std::string& log_type() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_log_type(Arg_&& arg, Args_... args);
  std::string* mutable_log_type();
  PROTOBUF_NODISCARD std::string* release_log_type();
  void set_allocated_log_type(std::string* ptr);

  private:
  const std::string& _internal_log_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_log_type(
      const std::string& value);
  std::string* _internal_mutable_log_type();

  public:
  // optional string version_string = 3;
  bool has_version_string() const;
  void clear_version_string() ;
  const std::string& version_string() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_version_string(Arg_&& arg, Args_... args);
  std::string* mutable_version_string();
  PROTOBUF_NODISCARD std::string* release_version_string();
  void set_allocated_version_string(std::string* ptr);

  private:
  const std::string& _internal_version_string() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_version_string(
      const std::string& value);
  std::string* _internal_mutable_version_string();

  public:
  // optional string log_contents = 4;
  bool has_log_contents() const;
  void clear_log_contents() ;
  const std::string& log_contents() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_log_contents(Arg_&& arg, Args_... args);
  std::string* mutable_log_contents();
  PROTOBUF_NODISCARD std::string* release_log_contents();
  void set_allocated_log_contents(std::string* ptr);

  private:
  const std::string& _internal_log_contents() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_log_contents(
      const std::string& value);
  std::string* _internal_mutable_log_contents();

  public:
  // optional uint32 appid = 1;
  bool has_appid() const;
  void clear_appid() ;
  ::uint32_t appid() const;
  void set_appid(::uint32_t value);

  private:
  ::uint32_t _internal_appid() const;
  void _internal_set_appid(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:CHelpRequestLogs_UploadUserApplicationLog_Request)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<2, 4, 0, 92, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr log_type_;
    ::google::protobuf::internal::ArenaStringPtr version_string_;
    ::google::protobuf::internal::ArenaStringPtr log_contents_;
    ::uint32_t appid_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_steammessages_5fhelprequest_2esteamworkssdk_2eproto;
};// -------------------------------------------------------------------

class CHelpRequestLogs_UploadUserApplicationLog_Response final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CHelpRequestLogs_UploadUserApplicationLog_Response) */ {
 public:
  inline CHelpRequestLogs_UploadUserApplicationLog_Response() : CHelpRequestLogs_UploadUserApplicationLog_Response(nullptr) {}
  ~CHelpRequestLogs_UploadUserApplicationLog_Response() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR CHelpRequestLogs_UploadUserApplicationLog_Response(::google::protobuf::internal::ConstantInitialized);

  CHelpRequestLogs_UploadUserApplicationLog_Response(const CHelpRequestLogs_UploadUserApplicationLog_Response& from);
  CHelpRequestLogs_UploadUserApplicationLog_Response(CHelpRequestLogs_UploadUserApplicationLog_Response&& from) noexcept
    : CHelpRequestLogs_UploadUserApplicationLog_Response() {
    *this = ::std::move(from);
  }

  inline CHelpRequestLogs_UploadUserApplicationLog_Response& operator=(const CHelpRequestLogs_UploadUserApplicationLog_Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline CHelpRequestLogs_UploadUserApplicationLog_Response& operator=(CHelpRequestLogs_UploadUserApplicationLog_Response&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CHelpRequestLogs_UploadUserApplicationLog_Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const CHelpRequestLogs_UploadUserApplicationLog_Response* internal_default_instance() {
    return reinterpret_cast<const CHelpRequestLogs_UploadUserApplicationLog_Response*>(
               &_CHelpRequestLogs_UploadUserApplicationLog_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CHelpRequestLogs_UploadUserApplicationLog_Response& a, CHelpRequestLogs_UploadUserApplicationLog_Response& b) {
    a.Swap(&b);
  }
  inline void Swap(CHelpRequestLogs_UploadUserApplicationLog_Response* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CHelpRequestLogs_UploadUserApplicationLog_Response* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CHelpRequestLogs_UploadUserApplicationLog_Response* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CHelpRequestLogs_UploadUserApplicationLog_Response>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CHelpRequestLogs_UploadUserApplicationLog_Response& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const CHelpRequestLogs_UploadUserApplicationLog_Response& from) {
    CHelpRequestLogs_UploadUserApplicationLog_Response::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CHelpRequestLogs_UploadUserApplicationLog_Response* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "CHelpRequestLogs_UploadUserApplicationLog_Response";
  }
  protected:
  explicit CHelpRequestLogs_UploadUserApplicationLog_Response(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
  };
  // optional uint64 id = 1;
  bool has_id() const;
  void clear_id() ;
  ::uint64_t id() const;
  void set_id(::uint64_t value);

  private:
  ::uint64_t _internal_id() const;
  void _internal_set_id(::uint64_t value);

  public:
  // @@protoc_insertion_point(class_scope:CHelpRequestLogs_UploadUserApplicationLog_Response)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<0, 1, 0, 0, 2> _table_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint64_t id_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_steammessages_5fhelprequest_2esteamworkssdk_2eproto;
};

// ===================================================================


// -------------------------------------------------------------------

class HelpRequestLogs_Stub;
class HelpRequestLogs : public ::google::protobuf::Service {
 protected:
  HelpRequestLogs() = default;

 public:
  using Stub = HelpRequestLogs_Stub;

  HelpRequestLogs(const HelpRequestLogs&) = delete;
  HelpRequestLogs& operator=(const HelpRequestLogs&) = delete;
  virtual ~HelpRequestLogs() = default;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void UploadUserApplicationLog(::google::protobuf::RpcController* controller,
                        const ::CHelpRequestLogs_UploadUserApplicationLog_Request* request,
                        ::CHelpRequestLogs_UploadUserApplicationLog_Response* response,
                        ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------
  const ::google::protobuf::ServiceDescriptor* GetDescriptor() override;

  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done) override;

  const ::google::protobuf::Message& GetRequestPrototype(
      const ::google::protobuf::MethodDescriptor* method) const override;

  const ::google::protobuf::Message& GetResponsePrototype(
      const ::google::protobuf::MethodDescriptor* method) const override;
};

class HelpRequestLogs_Stub final : public HelpRequestLogs {
 public:
  HelpRequestLogs_Stub(::google::protobuf::RpcChannel* channel);
  HelpRequestLogs_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);

  HelpRequestLogs_Stub(const HelpRequestLogs_Stub&) = delete;
  HelpRequestLogs_Stub& operator=(const HelpRequestLogs_Stub&) = delete;

  ~HelpRequestLogs_Stub() override;

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements HelpRequestLogs ------------------------------------------
  void UploadUserApplicationLog(::google::protobuf::RpcController* controller,
                        const ::CHelpRequestLogs_UploadUserApplicationLog_Request* request,
                        ::CHelpRequestLogs_UploadUserApplicationLog_Response* response,
                        ::google::protobuf::Closure* done) override;

 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
};
// ===================================================================



// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CHelpRequestLogs_UploadUserApplicationLog_Request

// optional uint32 appid = 1;
inline bool CHelpRequestLogs_UploadUserApplicationLog_Request::has_appid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::clear_appid() {
  _impl_.appid_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint32_t CHelpRequestLogs_UploadUserApplicationLog_Request::appid() const {
  // @@protoc_insertion_point(field_get:CHelpRequestLogs_UploadUserApplicationLog_Request.appid)
  return _internal_appid();
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::set_appid(::uint32_t value) {
  _internal_set_appid(value);
  // @@protoc_insertion_point(field_set:CHelpRequestLogs_UploadUserApplicationLog_Request.appid)
}
inline ::uint32_t CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_appid() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.appid_;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_set_appid(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.appid_ = value;
}

// optional string log_type = 2;
inline bool CHelpRequestLogs_UploadUserApplicationLog_Request::has_log_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::clear_log_type() {
  _impl_.log_type_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CHelpRequestLogs_UploadUserApplicationLog_Request::log_type() const {
  // @@protoc_insertion_point(field_get:CHelpRequestLogs_UploadUserApplicationLog_Request.log_type)
  return _internal_log_type();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CHelpRequestLogs_UploadUserApplicationLog_Request::set_log_type(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.log_type_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:CHelpRequestLogs_UploadUserApplicationLog_Request.log_type)
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::mutable_log_type() {
  std::string* _s = _internal_mutable_log_type();
  // @@protoc_insertion_point(field_mutable:CHelpRequestLogs_UploadUserApplicationLog_Request.log_type)
  return _s;
}
inline const std::string& CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_log_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.log_type_.Get();
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_set_log_type(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.log_type_.Set(value, GetArenaForAllocation());
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_mutable_log_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.log_type_.Mutable( GetArenaForAllocation());
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::release_log_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:CHelpRequestLogs_UploadUserApplicationLog_Request.log_type)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.log_type_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.log_type_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::set_allocated_log_type(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.log_type_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.log_type_.IsDefault()) {
          _impl_.log_type_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:CHelpRequestLogs_UploadUserApplicationLog_Request.log_type)
}

// optional string version_string = 3;
inline bool CHelpRequestLogs_UploadUserApplicationLog_Request::has_version_string() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::clear_version_string() {
  _impl_.version_string_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& CHelpRequestLogs_UploadUserApplicationLog_Request::version_string() const {
  // @@protoc_insertion_point(field_get:CHelpRequestLogs_UploadUserApplicationLog_Request.version_string)
  return _internal_version_string();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CHelpRequestLogs_UploadUserApplicationLog_Request::set_version_string(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.version_string_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:CHelpRequestLogs_UploadUserApplicationLog_Request.version_string)
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::mutable_version_string() {
  std::string* _s = _internal_mutable_version_string();
  // @@protoc_insertion_point(field_mutable:CHelpRequestLogs_UploadUserApplicationLog_Request.version_string)
  return _s;
}
inline const std::string& CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_version_string() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.version_string_.Get();
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_set_version_string(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.version_string_.Set(value, GetArenaForAllocation());
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_mutable_version_string() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.version_string_.Mutable( GetArenaForAllocation());
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::release_version_string() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:CHelpRequestLogs_UploadUserApplicationLog_Request.version_string)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.version_string_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.version_string_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::set_allocated_version_string(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.version_string_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.version_string_.IsDefault()) {
          _impl_.version_string_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:CHelpRequestLogs_UploadUserApplicationLog_Request.version_string)
}

// optional string log_contents = 4;
inline bool CHelpRequestLogs_UploadUserApplicationLog_Request::has_log_contents() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::clear_log_contents() {
  _impl_.log_contents_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& CHelpRequestLogs_UploadUserApplicationLog_Request::log_contents() const {
  // @@protoc_insertion_point(field_get:CHelpRequestLogs_UploadUserApplicationLog_Request.log_contents)
  return _internal_log_contents();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CHelpRequestLogs_UploadUserApplicationLog_Request::set_log_contents(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.log_contents_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:CHelpRequestLogs_UploadUserApplicationLog_Request.log_contents)
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::mutable_log_contents() {
  std::string* _s = _internal_mutable_log_contents();
  // @@protoc_insertion_point(field_mutable:CHelpRequestLogs_UploadUserApplicationLog_Request.log_contents)
  return _s;
}
inline const std::string& CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_log_contents() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.log_contents_.Get();
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_set_log_contents(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.log_contents_.Set(value, GetArenaForAllocation());
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::_internal_mutable_log_contents() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.log_contents_.Mutable( GetArenaForAllocation());
}
inline std::string* CHelpRequestLogs_UploadUserApplicationLog_Request::release_log_contents() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:CHelpRequestLogs_UploadUserApplicationLog_Request.log_contents)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.log_contents_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.log_contents_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Request::set_allocated_log_contents(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.log_contents_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.log_contents_.IsDefault()) {
          _impl_.log_contents_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:CHelpRequestLogs_UploadUserApplicationLog_Request.log_contents)
}

// -------------------------------------------------------------------

// CHelpRequestLogs_UploadUserApplicationLog_Response

// optional uint64 id = 1;
inline bool CHelpRequestLogs_UploadUserApplicationLog_Response::has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Response::clear_id() {
  _impl_.id_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t CHelpRequestLogs_UploadUserApplicationLog_Response::id() const {
  // @@protoc_insertion_point(field_get:CHelpRequestLogs_UploadUserApplicationLog_Response.id)
  return _internal_id();
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Response::set_id(::uint64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:CHelpRequestLogs_UploadUserApplicationLog_Response.id)
}
inline ::uint64_t CHelpRequestLogs_UploadUserApplicationLog_Response::_internal_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.id_;
}
inline void CHelpRequestLogs_UploadUserApplicationLog_Response::_internal_set_id(::uint64_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.id_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_steammessages_5fhelprequest_2esteamworkssdk_2eproto_2epb_2eh
