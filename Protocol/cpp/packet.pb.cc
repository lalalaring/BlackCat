// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace PB {

namespace {

const ::google::protobuf::Descriptor* Packet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Packet_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Packet_2eproto() {
  protobuf_AddDesc_Packet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Packet.proto");
  GOOGLE_CHECK(file != NULL);
  Packet_descriptor_ = file->message_type(0);
  static const int Packet_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, command_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, body_),
  };
  Packet_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Packet_descriptor_,
      Packet::default_instance_,
      Packet_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Packet, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Packet));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Packet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Packet_descriptor_, &Packet::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Packet_2eproto() {
  delete Packet::default_instance_;
  delete Packet_reflection_;
}

void protobuf_AddDesc_Packet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014Packet.proto\022\002PB\"8\n\006Packet\022\017\n\007version\030"
    "\001 \002(\r\022\017\n\007command\030\002 \002(\t\022\014\n\004body\030\003 \001(\t", 76);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Packet.proto", &protobuf_RegisterTypes);
  Packet::default_instance_ = new Packet();
  Packet::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Packet_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Packet_2eproto {
  StaticDescriptorInitializer_Packet_2eproto() {
    protobuf_AddDesc_Packet_2eproto();
  }
} static_descriptor_initializer_Packet_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Packet::kVersionFieldNumber;
const int Packet::kCommandFieldNumber;
const int Packet::kBodyFieldNumber;
#endif  // !_MSC_VER

Packet::Packet()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Packet::InitAsDefaultInstance() {
}

Packet::Packet(const Packet& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Packet::SharedCtor() {
  _cached_size_ = 0;
  version_ = 0u;
  command_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Packet::~Packet() {
  SharedDtor();
}

void Packet::SharedDtor() {
  if (command_ != &::google::protobuf::internal::kEmptyString) {
    delete command_;
  }
  if (body_ != &::google::protobuf::internal::kEmptyString) {
    delete body_;
  }
  if (this != default_instance_) {
  }
}

void Packet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Packet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Packet_descriptor_;
}

const Packet& Packet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Packet_2eproto();  return *default_instance_;
}

Packet* Packet::default_instance_ = NULL;

Packet* Packet::New() const {
  return new Packet;
}

void Packet::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    version_ = 0u;
    if (has_command()) {
      if (command_ != &::google::protobuf::internal::kEmptyString) {
        command_->clear();
      }
    }
    if (has_body()) {
      if (body_ != &::google::protobuf::internal::kEmptyString) {
        body_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 version = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
          set_has_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_command;
        break;
      }
      
      // required string command = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_command:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_command()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->command().data(), this->command().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_body;
        break;
      }
      
      // optional string body = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_body:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_body()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->body().data(), this->body().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 version = 1;
  if (has_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }
  
  // required string command = 2;
  if (has_command()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->command().data(), this->command().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->command(), output);
  }
  
  // optional string body = 3;
  if (has_body()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->body().data(), this->body().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->body(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Packet::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 version = 1;
  if (has_version()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->version(), target);
  }
  
  // required string command = 2;
  if (has_command()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->command().data(), this->command().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->command(), target);
  }
  
  // optional string body = 3;
  if (has_body()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->body().data(), this->body().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->body(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Packet::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }
    
    // required string command = 2;
    if (has_command()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->command());
    }
    
    // optional string body = 3;
    if (has_body()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->body());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Packet::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Packet* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Packet*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Packet::MergeFrom(const Packet& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_version()) {
      set_version(from.version());
    }
    if (from.has_command()) {
      set_command(from.command());
    }
    if (from.has_body()) {
      set_body(from.body());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Packet::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Packet::CopyFrom(const Packet& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Packet::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void Packet::Swap(Packet* other) {
  if (other != this) {
    std::swap(version_, other->version_);
    std::swap(command_, other->command_);
    std::swap(body_, other->body_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Packet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Packet_descriptor_;
  metadata.reflection = Packet_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PB

// @@protoc_insertion_point(global_scope)
