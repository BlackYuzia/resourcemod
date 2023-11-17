// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: connectionless_netmessages.proto

#include "connectionless_netmessages.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
        template <typename>
PROTOBUF_CONSTEXPR C2S_CONNECT_Message::C2S_CONNECT_Message(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.splitplayers_)*/ {},
      /*decltype(_impl_.encrypted_password_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.auth_steam_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.challenge_context_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.host_version_)*/ 0u,
      /*decltype(_impl_.auth_protocol_)*/ 0u,
      /*decltype(_impl_.reservation_cookie_)*/ ::uint64_t{0u},
      /*decltype(_impl_.challenge_number_)*/ 0u,
      /*decltype(_impl_.low_violence_)*/ false,
      /*decltype(_impl_.use_snp_)*/ 0,
    } {}
struct C2S_CONNECT_MessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR C2S_CONNECT_MessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~C2S_CONNECT_MessageDefaultTypeInternal() {}
  union {
    C2S_CONNECT_Message _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 C2S_CONNECT_MessageDefaultTypeInternal _C2S_CONNECT_Message_default_instance_;
        template <typename>
PROTOBUF_CONSTEXPR C2S_CONNECTION_Message::C2S_CONNECTION_Message(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.addon_name_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.use_snp_)*/ false,
    } {}
struct C2S_CONNECTION_MessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR C2S_CONNECTION_MessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~C2S_CONNECTION_MessageDefaultTypeInternal() {}
  union {
    C2S_CONNECTION_Message _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 C2S_CONNECTION_MessageDefaultTypeInternal _C2S_CONNECTION_Message_default_instance_;
static ::_pb::Metadata file_level_metadata_connectionless_5fnetmessages_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_connectionless_5fnetmessages_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_connectionless_5fnetmessages_2eproto = nullptr;
const ::uint32_t TableStruct_connectionless_5fnetmessages_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.host_version_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.auth_protocol_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.challenge_number_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.reservation_cookie_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.low_violence_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.encrypted_password_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.splitplayers_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.auth_steam_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.challenge_context_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECT_Message, _impl_.use_snp_),
    3,
    4,
    6,
    5,
    7,
    0,
    ~0u,
    1,
    2,
    8,
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECTION_Message, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECTION_Message, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECTION_Message, _impl_.addon_name_),
    PROTOBUF_FIELD_OFFSET(::C2S_CONNECTION_Message, _impl_.use_snp_),
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 18, -1, sizeof(::C2S_CONNECT_Message)},
        {28, 38, -1, sizeof(::C2S_CONNECTION_Message)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::_C2S_CONNECT_Message_default_instance_._instance,
    &::_C2S_CONNECTION_Message_default_instance_._instance,
};
const char descriptor_table_protodef_connectionless_5fnetmessages_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n connectionless_netmessages.proto\032\021netm"
    "essages.proto\"\235\002\n\023C2S_CONNECT_Message\022\024\n"
    "\014host_version\030\001 \001(\r\022\025\n\rauth_protocol\030\002 \001"
    "(\r\022\030\n\020challenge_number\030\003 \001(\r\022\032\n\022reservat"
    "ion_cookie\030\004 \001(\006\022\024\n\014low_violence\030\005 \001(\010\022\032"
    "\n\022encrypted_password\030\006 \001(\014\0221\n\014splitplaye"
    "rs\030\007 \003(\0132\033.CCLCMsg_SplitPlayerConnect\022\022\n"
    "\nauth_steam\030\010 \001(\014\022\031\n\021challenge_context\030\t"
    " \001(\t\022\017\n\007use_snp\030\n \001(\021\"=\n\026C2S_CONNECTION_"
    "Message\022\022\n\naddon_name\030\001 \001(\t\022\017\n\007use_snp\030\002"
    " \001(\010"
};
static const ::_pbi::DescriptorTable* const descriptor_table_connectionless_5fnetmessages_2eproto_deps[1] =
    {
        &::descriptor_table_netmessages_2eproto,
};
static ::absl::once_flag descriptor_table_connectionless_5fnetmessages_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_connectionless_5fnetmessages_2eproto = {
    false,
    false,
    404,
    descriptor_table_protodef_connectionless_5fnetmessages_2eproto,
    "connectionless_netmessages.proto",
    &descriptor_table_connectionless_5fnetmessages_2eproto_once,
    descriptor_table_connectionless_5fnetmessages_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_connectionless_5fnetmessages_2eproto::offsets,
    file_level_metadata_connectionless_5fnetmessages_2eproto,
    file_level_enum_descriptors_connectionless_5fnetmessages_2eproto,
    file_level_service_descriptors_connectionless_5fnetmessages_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_connectionless_5fnetmessages_2eproto_getter() {
  return &descriptor_table_connectionless_5fnetmessages_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_connectionless_5fnetmessages_2eproto(&descriptor_table_connectionless_5fnetmessages_2eproto);
// ===================================================================

class C2S_CONNECT_Message::_Internal {
 public:
  using HasBits = decltype(std::declval<C2S_CONNECT_Message>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_._has_bits_);
  static void set_has_host_version(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_auth_protocol(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_challenge_number(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_reservation_cookie(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_low_violence(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_encrypted_password(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_auth_steam(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_challenge_context(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_use_snp(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
};

void C2S_CONNECT_Message::clear_splitplayers() {
  _internal_mutable_splitplayers()->Clear();
}
C2S_CONNECT_Message::C2S_CONNECT_Message(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:C2S_CONNECT_Message)
}
C2S_CONNECT_Message::C2S_CONNECT_Message(const C2S_CONNECT_Message& from) : ::google::protobuf::Message() {
  C2S_CONNECT_Message* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.splitplayers_){from._impl_.splitplayers_},
      decltype(_impl_.encrypted_password_){},
      decltype(_impl_.auth_steam_){},
      decltype(_impl_.challenge_context_){},
      decltype(_impl_.host_version_){},
      decltype(_impl_.auth_protocol_){},
      decltype(_impl_.reservation_cookie_){},
      decltype(_impl_.challenge_number_){},
      decltype(_impl_.low_violence_){},
      decltype(_impl_.use_snp_){},
  };
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  _impl_.encrypted_password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.encrypted_password_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.encrypted_password_.Set(from._internal_encrypted_password(), _this->GetArenaForAllocation());
  }
  _impl_.auth_steam_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.auth_steam_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.auth_steam_.Set(from._internal_auth_steam(), _this->GetArenaForAllocation());
  }
  _impl_.challenge_context_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.challenge_context_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000004u) != 0) {
    _this->_impl_.challenge_context_.Set(from._internal_challenge_context(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.host_version_, &from._impl_.host_version_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.use_snp_) -
    reinterpret_cast<char*>(&_impl_.host_version_)) + sizeof(_impl_.use_snp_));

  // @@protoc_insertion_point(copy_constructor:C2S_CONNECT_Message)
}
inline void C2S_CONNECT_Message::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.splitplayers_){arena},
      decltype(_impl_.encrypted_password_){},
      decltype(_impl_.auth_steam_){},
      decltype(_impl_.challenge_context_){},
      decltype(_impl_.host_version_){0u},
      decltype(_impl_.auth_protocol_){0u},
      decltype(_impl_.reservation_cookie_){::uint64_t{0u}},
      decltype(_impl_.challenge_number_){0u},
      decltype(_impl_.low_violence_){false},
      decltype(_impl_.use_snp_){0},
  };
  _impl_.encrypted_password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.encrypted_password_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.auth_steam_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.auth_steam_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.challenge_context_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.challenge_context_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
C2S_CONNECT_Message::~C2S_CONNECT_Message() {
  // @@protoc_insertion_point(destructor:C2S_CONNECT_Message)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void C2S_CONNECT_Message::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.splitplayers_.~RepeatedPtrField();
  _impl_.encrypted_password_.Destroy();
  _impl_.auth_steam_.Destroy();
  _impl_.challenge_context_.Destroy();
}
void C2S_CONNECT_Message::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void C2S_CONNECT_Message::Clear() {
// @@protoc_insertion_point(message_clear_start:C2S_CONNECT_Message)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_splitplayers()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.encrypted_password_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.auth_steam_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.challenge_context_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000f8u) {
    ::memset(&_impl_.host_version_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.low_violence_) -
        reinterpret_cast<char*>(&_impl_.host_version_)) + sizeof(_impl_.low_violence_));
  }
  _impl_.use_snp_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* C2S_CONNECT_Message::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<4, 10, 1, 53, 2> C2S_CONNECT_Message::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_._has_bits_),
    0, // no _extensions_
    10, 120,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294966272,  // skipmap
    offsetof(decltype(_table_), field_entries),
    10,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_C2S_CONNECT_Message_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // optional uint32 host_version = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(C2S_CONNECT_Message, _impl_.host_version_), 3>(),
     {8, 3, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.host_version_)}},
    // optional uint32 auth_protocol = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(C2S_CONNECT_Message, _impl_.auth_protocol_), 4>(),
     {16, 4, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.auth_protocol_)}},
    // optional uint32 challenge_number = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(C2S_CONNECT_Message, _impl_.challenge_number_), 6>(),
     {24, 6, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.challenge_number_)}},
    // optional fixed64 reservation_cookie = 4;
    {::_pbi::TcParser::FastF64S1,
     {33, 5, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.reservation_cookie_)}},
    // optional bool low_violence = 5;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(C2S_CONNECT_Message, _impl_.low_violence_), 7>(),
     {40, 7, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.low_violence_)}},
    // optional bytes encrypted_password = 6;
    {::_pbi::TcParser::FastBS1,
     {50, 0, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.encrypted_password_)}},
    // repeated .CCLCMsg_SplitPlayerConnect splitplayers = 7;
    {::_pbi::TcParser::FastMtR1,
     {58, 63, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.splitplayers_)}},
    // optional bytes auth_steam = 8;
    {::_pbi::TcParser::FastBS1,
     {66, 1, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.auth_steam_)}},
    // optional string challenge_context = 9;
    {::_pbi::TcParser::FastSS1,
     {74, 2, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.challenge_context_)}},
    // optional sint32 use_snp = 10;
    {::_pbi::TcParser::FastZ32S1,
     {80, 8, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.use_snp_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // optional uint32 host_version = 1;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.host_version_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional uint32 auth_protocol = 2;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.auth_protocol_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional uint32 challenge_number = 3;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.challenge_number_), _Internal::kHasBitsOffset + 6, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional fixed64 reservation_cookie = 4;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.reservation_cookie_), _Internal::kHasBitsOffset + 5, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kFixed64)},
    // optional bool low_violence = 5;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.low_violence_), _Internal::kHasBitsOffset + 7, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBool)},
    // optional bytes encrypted_password = 6;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.encrypted_password_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // repeated .CCLCMsg_SplitPlayerConnect splitplayers = 7;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.splitplayers_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // optional bytes auth_steam = 8;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.auth_steam_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional string challenge_context = 9;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.challenge_context_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // optional sint32 use_snp = 10;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.use_snp_), _Internal::kHasBitsOffset + 8, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kSInt32)},
  }}, {{
    {::_pbi::TcParser::GetTable<::CCLCMsg_SplitPlayerConnect>()},
  }}, {{
    "\23\0\0\0\0\0\0\0\0\21\0\0\0\0\0\0"
    "C2S_CONNECT_Message"
    "challenge_context"
  }},
};

::uint8_t* C2S_CONNECT_Message::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:C2S_CONNECT_Message)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 host_version = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_host_version(), target);
  }

  // optional uint32 auth_protocol = 2;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_auth_protocol(), target);
  }

  // optional uint32 challenge_number = 3;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        3, this->_internal_challenge_number(), target);
  }

  // optional fixed64 reservation_cookie = 4;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed64ToArray(
        4, this->_internal_reservation_cookie(), target);
  }

  // optional bool low_violence = 5;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        5, this->_internal_low_violence(), target);
  }

  // optional bytes encrypted_password = 6;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_encrypted_password();
    target = stream->WriteBytesMaybeAliased(6, _s, target);
  }

  // repeated .CCLCMsg_SplitPlayerConnect splitplayers = 7;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_splitplayers_size()); i < n; i++) {
    const auto& repfield = this->_internal_splitplayers().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(7, repfield, repfield.GetCachedSize(), target, stream);
  }

  // optional bytes auth_steam = 8;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_auth_steam();
    target = stream->WriteBytesMaybeAliased(8, _s, target);
  }

  // optional string challenge_context = 9;
  if (cached_has_bits & 0x00000004u) {
    const std::string& _s = this->_internal_challenge_context();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "C2S_CONNECT_Message.challenge_context");
    target = stream->WriteStringMaybeAliased(9, _s, target);
  }

  // optional sint32 use_snp = 10;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteSInt32ToArray(
        10, this->_internal_use_snp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:C2S_CONNECT_Message)
  return target;
}

::size_t C2S_CONNECT_Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:C2S_CONNECT_Message)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .CCLCMsg_SplitPlayerConnect splitplayers = 7;
  total_size += 1UL * this->_internal_splitplayers_size();
  for (const auto& msg : this->_internal_splitplayers()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional bytes encrypted_password = 6;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_encrypted_password());
    }

    // optional bytes auth_steam = 8;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_auth_steam());
    }

    // optional string challenge_context = 9;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_challenge_context());
    }

    // optional uint32 host_version = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_host_version());
    }

    // optional uint32 auth_protocol = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_auth_protocol());
    }

    // optional fixed64 reservation_cookie = 4;
    if (cached_has_bits & 0x00000020u) {
      total_size += 9;
    }

    // optional uint32 challenge_number = 3;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_challenge_number());
    }

    // optional bool low_violence = 5;
    if (cached_has_bits & 0x00000080u) {
      total_size += 2;
    }

  }
  // optional sint32 use_snp = 10;
  if (cached_has_bits & 0x00000100u) {
    total_size += ::_pbi::WireFormatLite::SInt32SizePlusOne(
        this->_internal_use_snp());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData C2S_CONNECT_Message::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    C2S_CONNECT_Message::MergeImpl
};
const ::google::protobuf::Message::ClassData*C2S_CONNECT_Message::GetClassData() const { return &_class_data_; }


void C2S_CONNECT_Message::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<C2S_CONNECT_Message*>(&to_msg);
  auto& from = static_cast<const C2S_CONNECT_Message&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:C2S_CONNECT_Message)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_splitplayers()->MergeFrom(from._internal_splitplayers());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_encrypted_password(from._internal_encrypted_password());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_auth_steam(from._internal_auth_steam());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_challenge_context(from._internal_challenge_context());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.host_version_ = from._impl_.host_version_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.auth_protocol_ = from._impl_.auth_protocol_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.reservation_cookie_ = from._impl_.reservation_cookie_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.challenge_number_ = from._impl_.challenge_number_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.low_violence_ = from._impl_.low_violence_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _this->_internal_set_use_snp(from._internal_use_snp());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void C2S_CONNECT_Message::CopyFrom(const C2S_CONNECT_Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:C2S_CONNECT_Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool C2S_CONNECT_Message::IsInitialized() const {
  return true;
}

void C2S_CONNECT_Message::InternalSwap(C2S_CONNECT_Message* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.splitplayers_.InternalSwap(&other->_impl_.splitplayers_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.encrypted_password_, lhs_arena,
                                       &other->_impl_.encrypted_password_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.auth_steam_, lhs_arena,
                                       &other->_impl_.auth_steam_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.challenge_context_, lhs_arena,
                                       &other->_impl_.challenge_context_, rhs_arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.use_snp_)
      + sizeof(C2S_CONNECT_Message::_impl_.use_snp_)
      - PROTOBUF_FIELD_OFFSET(C2S_CONNECT_Message, _impl_.host_version_)>(
          reinterpret_cast<char*>(&_impl_.host_version_),
          reinterpret_cast<char*>(&other->_impl_.host_version_));
}

::google::protobuf::Metadata C2S_CONNECT_Message::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_connectionless_5fnetmessages_2eproto_getter, &descriptor_table_connectionless_5fnetmessages_2eproto_once,
      file_level_metadata_connectionless_5fnetmessages_2eproto[0]);
}
// ===================================================================

class C2S_CONNECTION_Message::_Internal {
 public:
  using HasBits = decltype(std::declval<C2S_CONNECTION_Message>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(C2S_CONNECTION_Message, _impl_._has_bits_);
  static void set_has_addon_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_use_snp(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

C2S_CONNECTION_Message::C2S_CONNECTION_Message(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:C2S_CONNECTION_Message)
}
C2S_CONNECTION_Message::C2S_CONNECTION_Message(const C2S_CONNECTION_Message& from) : ::google::protobuf::Message() {
  C2S_CONNECTION_Message* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.addon_name_){},
      decltype(_impl_.use_snp_){},
  };
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  _impl_.addon_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.addon_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.addon_name_.Set(from._internal_addon_name(), _this->GetArenaForAllocation());
  }
  _this->_impl_.use_snp_ = from._impl_.use_snp_;

  // @@protoc_insertion_point(copy_constructor:C2S_CONNECTION_Message)
}
inline void C2S_CONNECTION_Message::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.addon_name_){},
      decltype(_impl_.use_snp_){false},
  };
  _impl_.addon_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.addon_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
C2S_CONNECTION_Message::~C2S_CONNECTION_Message() {
  // @@protoc_insertion_point(destructor:C2S_CONNECTION_Message)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void C2S_CONNECTION_Message::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.addon_name_.Destroy();
}
void C2S_CONNECTION_Message::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void C2S_CONNECTION_Message::Clear() {
// @@protoc_insertion_point(message_clear_start:C2S_CONNECTION_Message)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.addon_name_.ClearNonDefaultToEmpty();
  }
  _impl_.use_snp_ = false;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* C2S_CONNECTION_Message::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 41, 2> C2S_CONNECTION_Message::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(C2S_CONNECTION_Message, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_C2S_CONNECTION_Message_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // optional bool use_snp = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(C2S_CONNECTION_Message, _impl_.use_snp_), 1>(),
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECTION_Message, _impl_.use_snp_)}},
    // optional string addon_name = 1;
    {::_pbi::TcParser::FastSS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(C2S_CONNECTION_Message, _impl_.addon_name_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional string addon_name = 1;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECTION_Message, _impl_.addon_name_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // optional bool use_snp = 2;
    {PROTOBUF_FIELD_OFFSET(C2S_CONNECTION_Message, _impl_.use_snp_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBool)},
  }},
  // no aux_entries
  {{
    "\26\12\0\0\0\0\0\0"
    "C2S_CONNECTION_Message"
    "addon_name"
  }},
};

::uint8_t* C2S_CONNECTION_Message::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:C2S_CONNECTION_Message)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string addon_name = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_addon_name();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "C2S_CONNECTION_Message.addon_name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // optional bool use_snp = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        2, this->_internal_use_snp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:C2S_CONNECTION_Message)
  return target;
}

::size_t C2S_CONNECTION_Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:C2S_CONNECTION_Message)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string addon_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_addon_name());
    }

    // optional bool use_snp = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData C2S_CONNECTION_Message::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    C2S_CONNECTION_Message::MergeImpl
};
const ::google::protobuf::Message::ClassData*C2S_CONNECTION_Message::GetClassData() const { return &_class_data_; }


void C2S_CONNECTION_Message::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<C2S_CONNECTION_Message*>(&to_msg);
  auto& from = static_cast<const C2S_CONNECTION_Message&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:C2S_CONNECTION_Message)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_addon_name(from._internal_addon_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.use_snp_ = from._impl_.use_snp_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void C2S_CONNECTION_Message::CopyFrom(const C2S_CONNECTION_Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:C2S_CONNECTION_Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool C2S_CONNECTION_Message::IsInitialized() const {
  return true;
}

void C2S_CONNECTION_Message::InternalSwap(C2S_CONNECTION_Message* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.addon_name_, lhs_arena,
                                       &other->_impl_.addon_name_, rhs_arena);
        swap(_impl_.use_snp_, other->_impl_.use_snp_);
}

::google::protobuf::Metadata C2S_CONNECTION_Message::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_connectionless_5fnetmessages_2eproto_getter, &descriptor_table_connectionless_5fnetmessages_2eproto_once,
      file_level_metadata_connectionless_5fnetmessages_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"