// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: demosvrclass.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "demosvrclass.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace DemosvrClasses {

namespace {

const ::google::protobuf::Descriptor* EchoRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* EchoResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_demosvrclass_2eproto() {
  protobuf_AddDesc_demosvrclass_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "demosvrclass.proto");
  GOOGLE_CHECK(file != NULL);
  EchoRequest_descriptor_ = file->message_type(0);
  static const int EchoRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, msg_),
  };
  EchoRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EchoRequest_descriptor_,
      EchoRequest::default_instance_,
      EchoRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, _has_bits_[0]),
      -1,
      -1,
      sizeof(EchoRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoRequest, _internal_metadata_),
      -1);
  EchoResponse_descriptor_ = file->message_type(1);
  static const int EchoResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoResponse, msg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoResponse, var_),
  };
  EchoResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EchoResponse_descriptor_,
      EchoResponse::default_instance_,
      EchoResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoResponse, _has_bits_[0]),
      -1,
      -1,
      sizeof(EchoResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoResponse, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_demosvrclass_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EchoRequest_descriptor_, &EchoRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EchoResponse_descriptor_, &EchoResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_demosvrclass_2eproto() {
  delete EchoRequest::default_instance_;
  delete EchoRequest_reflection_;
  delete EchoResponse::default_instance_;
  delete EchoResponse_reflection_;
}

void protobuf_AddDesc_demosvrclass_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022demosvrclass.proto\022\016DemosvrClasses\"\032\n\013"
    "EchoRequest\022\013\n\003msg\030\001 \002(\t\"(\n\014EchoResponse"
    "\022\013\n\003msg\030\001 \002(\t\022\013\n\003var\030\002 \002(\005", 106);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "demosvrclass.proto", &protobuf_RegisterTypes);
  EchoRequest::default_instance_ = new EchoRequest();
  EchoResponse::default_instance_ = new EchoResponse();
  EchoRequest::default_instance_->InitAsDefaultInstance();
  EchoResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_demosvrclass_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_demosvrclass_2eproto {
  StaticDescriptorInitializer_demosvrclass_2eproto() {
    protobuf_AddDesc_demosvrclass_2eproto();
  }
} static_descriptor_initializer_demosvrclass_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EchoRequest::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EchoRequest::EchoRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:DemosvrClasses.EchoRequest)
}

void EchoRequest::InitAsDefaultInstance() {
}

EchoRequest::EchoRequest(const EchoRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:DemosvrClasses.EchoRequest)
}

void EchoRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EchoRequest::~EchoRequest() {
  // @@protoc_insertion_point(destructor:DemosvrClasses.EchoRequest)
  SharedDtor();
}

void EchoRequest::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void EchoRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoRequest_descriptor_;
}

const EchoRequest& EchoRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_demosvrclass_2eproto();
  return *default_instance_;
}

EchoRequest* EchoRequest::default_instance_ = NULL;

EchoRequest* EchoRequest::New(::google::protobuf::Arena* arena) const {
  EchoRequest* n = new EchoRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EchoRequest::Clear() {
  if (has_msg()) {
    msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool EchoRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DemosvrClasses.EchoRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string msg = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "DemosvrClasses.EchoRequest.msg");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:DemosvrClasses.EchoRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DemosvrClasses.EchoRequest)
  return false;
#undef DO_
}

void EchoRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DemosvrClasses.EchoRequest)
  // required string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "DemosvrClasses.EchoRequest.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->msg(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:DemosvrClasses.EchoRequest)
}

::google::protobuf::uint8* EchoRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:DemosvrClasses.EchoRequest)
  // required string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "DemosvrClasses.EchoRequest.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msg(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DemosvrClasses.EchoRequest)
  return target;
}

int EchoRequest::ByteSize() const {
  int total_size = 0;

  // required string msg = 1;
  if (has_msg()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const EchoRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EchoRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoRequest::MergeFrom(const EchoRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msg()) {
      set_has_msg();
      msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void EchoRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoRequest::CopyFrom(const EchoRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void EchoRequest::Swap(EchoRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EchoRequest::InternalSwap(EchoRequest* other) {
  msg_.Swap(&other->msg_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EchoRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoRequest_descriptor_;
  metadata.reflection = EchoRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EchoRequest

// required string msg = 1;
bool EchoRequest::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void EchoRequest::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
void EchoRequest::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
void EchoRequest::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
 const ::std::string& EchoRequest::msg() const {
  // @@protoc_insertion_point(field_get:DemosvrClasses.EchoRequest.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EchoRequest::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DemosvrClasses.EchoRequest.msg)
}
 void EchoRequest::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DemosvrClasses.EchoRequest.msg)
}
 void EchoRequest::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DemosvrClasses.EchoRequest.msg)
}
 ::std::string* EchoRequest::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:DemosvrClasses.EchoRequest.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* EchoRequest::release_msg() {
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EchoRequest::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:DemosvrClasses.EchoRequest.msg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EchoResponse::kMsgFieldNumber;
const int EchoResponse::kVarFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EchoResponse::EchoResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:DemosvrClasses.EchoResponse)
}

void EchoResponse::InitAsDefaultInstance() {
}

EchoResponse::EchoResponse(const EchoResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:DemosvrClasses.EchoResponse)
}

void EchoResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  var_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EchoResponse::~EchoResponse() {
  // @@protoc_insertion_point(destructor:DemosvrClasses.EchoResponse)
  SharedDtor();
}

void EchoResponse::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void EchoResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoResponse_descriptor_;
}

const EchoResponse& EchoResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_demosvrclass_2eproto();
  return *default_instance_;
}

EchoResponse* EchoResponse::default_instance_ = NULL;

EchoResponse* EchoResponse::New(::google::protobuf::Arena* arena) const {
  EchoResponse* n = new EchoResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EchoResponse::Clear() {
  if (_has_bits_[0 / 32] & 3u) {
    if (has_msg()) {
      msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    var_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool EchoResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DemosvrClasses.EchoResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string msg = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "DemosvrClasses.EchoResponse.msg");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_var;
        break;
      }

      // required int32 var = 2;
      case 2: {
        if (tag == 16) {
         parse_var:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &var_)));
          set_has_var();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:DemosvrClasses.EchoResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DemosvrClasses.EchoResponse)
  return false;
#undef DO_
}

void EchoResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DemosvrClasses.EchoResponse)
  // required string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "DemosvrClasses.EchoResponse.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->msg(), output);
  }

  // required int32 var = 2;
  if (has_var()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->var(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:DemosvrClasses.EchoResponse)
}

::google::protobuf::uint8* EchoResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:DemosvrClasses.EchoResponse)
  // required string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "DemosvrClasses.EchoResponse.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msg(), target);
  }

  // required int32 var = 2;
  if (has_var()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->var(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DemosvrClasses.EchoResponse)
  return target;
}

int EchoResponse::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_msg()) {
    // required string msg = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  if (has_var()) {
    // required int32 var = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->var());
  }

  return total_size;
}
int EchoResponse::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string msg = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());

    // required int32 var = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->var());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoResponse::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const EchoResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EchoResponse>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoResponse::MergeFrom(const EchoResponse& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msg()) {
      set_has_msg();
      msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
    }
    if (from.has_var()) {
      set_var(from.var());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void EchoResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoResponse::CopyFrom(const EchoResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void EchoResponse::Swap(EchoResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EchoResponse::InternalSwap(EchoResponse* other) {
  msg_.Swap(&other->msg_);
  std::swap(var_, other->var_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EchoResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoResponse_descriptor_;
  metadata.reflection = EchoResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EchoResponse

// required string msg = 1;
bool EchoResponse::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void EchoResponse::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
void EchoResponse::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
void EchoResponse::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
 const ::std::string& EchoResponse::msg() const {
  // @@protoc_insertion_point(field_get:DemosvrClasses.EchoResponse.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EchoResponse::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DemosvrClasses.EchoResponse.msg)
}
 void EchoResponse::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DemosvrClasses.EchoResponse.msg)
}
 void EchoResponse::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DemosvrClasses.EchoResponse.msg)
}
 ::std::string* EchoResponse::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:DemosvrClasses.EchoResponse.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* EchoResponse::release_msg() {
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void EchoResponse::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:DemosvrClasses.EchoResponse.msg)
}

// required int32 var = 2;
bool EchoResponse::has_var() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void EchoResponse::set_has_var() {
  _has_bits_[0] |= 0x00000002u;
}
void EchoResponse::clear_has_var() {
  _has_bits_[0] &= ~0x00000002u;
}
void EchoResponse::clear_var() {
  var_ = 0;
  clear_has_var();
}
 ::google::protobuf::int32 EchoResponse::var() const {
  // @@protoc_insertion_point(field_get:DemosvrClasses.EchoResponse.var)
  return var_;
}
 void EchoResponse::set_var(::google::protobuf::int32 value) {
  set_has_var();
  var_ = value;
  // @@protoc_insertion_point(field_set:DemosvrClasses.EchoResponse.var)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace DemosvrClasses

// @@protoc_insertion_point(global_scope)
