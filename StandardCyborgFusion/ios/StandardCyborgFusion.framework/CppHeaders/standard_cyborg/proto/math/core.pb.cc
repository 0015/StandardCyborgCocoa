// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: standard_cyborg/proto/math/core.proto

#include "standard_cyborg/proto/math/core.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace standard_cyborg {
namespace proto {
namespace math {
class Vec2DefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Vec2> _instance;
} _Vec2_default_instance_;
class Vec3DefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Vec3> _instance;
} _Vec3_default_instance_;
class QuaternionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Quaternion> _instance;
} _Quaternion_default_instance_;
}  // namespace math
}  // namespace proto
}  // namespace standard_cyborg
static void InitDefaultsscc_info_Quaternion_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::standard_cyborg::proto::math::_Quaternion_default_instance_;
    new (ptr) ::standard_cyborg::proto::math::Quaternion();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::standard_cyborg::proto::math::Quaternion::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Quaternion_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Quaternion_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto}, {}};

static void InitDefaultsscc_info_Vec2_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::standard_cyborg::proto::math::_Vec2_default_instance_;
    new (ptr) ::standard_cyborg::proto::math::Vec2();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::standard_cyborg::proto::math::Vec2::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vec2_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Vec2_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto}, {}};

static void InitDefaultsscc_info_Vec3_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::standard_cyborg::proto::math::_Vec3_default_instance_;
    new (ptr) ::standard_cyborg::proto::math::Vec3();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::standard_cyborg::proto::math::Vec3::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vec3_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Vec3_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Vec2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Vec2, x_),
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Vec2, y_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Vec3, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Vec3, x_),
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Vec3, y_),
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Vec3, z_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Quaternion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Quaternion, x_),
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Quaternion, y_),
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Quaternion, z_),
  PROTOBUF_FIELD_OFFSET(::standard_cyborg::proto::math::Quaternion, w_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::standard_cyborg::proto::math::Vec2)},
  { 7, -1, sizeof(::standard_cyborg::proto::math::Vec3)},
  { 15, -1, sizeof(::standard_cyborg::proto::math::Quaternion)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::standard_cyborg::proto::math::_Vec2_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::standard_cyborg::proto::math::_Vec3_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::standard_cyborg::proto::math::_Quaternion_default_instance_),
};

const char descriptor_table_protodef_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%standard_cyborg/proto/math/core.proto\022"
  "\032standard_cyborg.proto.math\"\034\n\004Vec2\022\t\n\001x"
  "\030\001 \001(\002\022\t\n\001y\030\002 \001(\002\"\'\n\004Vec3\022\t\n\001x\030\001 \001(\002\022\t\n\001"
  "y\030\002 \001(\002\022\t\n\001z\030\003 \001(\002\"8\n\nQuaternion\022\t\n\001x\030\001 "
  "\001(\002\022\t\n\001y\030\002 \001(\002\022\t\n\001z\030\003 \001(\002\022\t\n\001w\030\004 \001(\002b\006pr"
  "oto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_sccs[3] = {
  &scc_info_Quaternion_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto.base,
  &scc_info_Vec2_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto.base,
  &scc_info_Vec3_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_once;
static bool descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto = {
  &descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_initialized, descriptor_table_protodef_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto, "standard_cyborg/proto/math/core.proto", 204,
  &descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_once, descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_sccs, descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto::offsets,
  file_level_metadata_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto, 3, file_level_enum_descriptors_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto, file_level_service_descriptors_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto), true);
namespace standard_cyborg {
namespace proto {
namespace math {

// ===================================================================

void Vec2::InitAsDefaultInstance() {
}
class Vec2::_Internal {
 public:
};

Vec2::Vec2()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:standard_cyborg.proto.math.Vec2)
}
Vec2::Vec2(const Vec2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:standard_cyborg.proto.math.Vec2)
}

void Vec2::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
}

Vec2::~Vec2() {
  // @@protoc_insertion_point(destructor:standard_cyborg.proto.math.Vec2)
  SharedDtor();
}

void Vec2::SharedDtor() {
}

void Vec2::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Vec2& Vec2::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Vec2_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto.base);
  return *internal_default_instance();
}


void Vec2::Clear() {
// @@protoc_insertion_point(message_clear_start:standard_cyborg.proto.math.Vec2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&x_)) + sizeof(y_));
  _internal_metadata_.Clear();
}

const char* Vec2::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Vec2::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:standard_cyborg.proto.math.Vec2)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:standard_cyborg.proto.math.Vec2)
  return target;
}

size_t Vec2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:standard_cyborg.proto.math.Vec2)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec2::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:standard_cyborg.proto.math.Vec2)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec2* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Vec2>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:standard_cyborg.proto.math.Vec2)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:standard_cyborg.proto.math.Vec2)
    MergeFrom(*source);
  }
}

void Vec2::MergeFrom(const Vec2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:standard_cyborg.proto.math.Vec2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
}

void Vec2::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:standard_cyborg.proto.math.Vec2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec2::CopyFrom(const Vec2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:standard_cyborg.proto.math.Vec2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec2::IsInitialized() const {
  return true;
}

void Vec2::InternalSwap(Vec2* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Vec2::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Vec3::InitAsDefaultInstance() {
}
class Vec3::_Internal {
 public:
};

Vec3::Vec3()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:standard_cyborg.proto.math.Vec3)
}
Vec3::Vec3(const Vec3& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:standard_cyborg.proto.math.Vec3)
}

void Vec3::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
}

Vec3::~Vec3() {
  // @@protoc_insertion_point(destructor:standard_cyborg.proto.math.Vec3)
  SharedDtor();
}

void Vec3::SharedDtor() {
}

void Vec3::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Vec3& Vec3::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Vec3_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto.base);
  return *internal_default_instance();
}


void Vec3::Clear() {
// @@protoc_insertion_point(message_clear_start:standard_cyborg.proto.math.Vec3)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
  _internal_metadata_.Clear();
}

const char* Vec3::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Vec3::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:standard_cyborg.proto.math.Vec3)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  // float z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:standard_cyborg.proto.math.Vec3)
  return target;
}

size_t Vec3::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:standard_cyborg.proto.math.Vec3)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 4;
  }

  // float z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vec3::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:standard_cyborg.proto.math.Vec3)
  GOOGLE_DCHECK_NE(&from, this);
  const Vec3* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Vec3>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:standard_cyborg.proto.math.Vec3)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:standard_cyborg.proto.math.Vec3)
    MergeFrom(*source);
  }
}

void Vec3::MergeFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:standard_cyborg.proto.math.Vec3)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
  if (!(from.z() <= 0 && from.z() >= 0)) {
    _internal_set_z(from._internal_z());
  }
}

void Vec3::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:standard_cyborg.proto.math.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vec3::CopyFrom(const Vec3& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:standard_cyborg.proto.math.Vec3)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vec3::IsInitialized() const {
  return true;
}

void Vec3::InternalSwap(Vec3* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Vec3::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Quaternion::InitAsDefaultInstance() {
}
class Quaternion::_Internal {
 public:
};

Quaternion::Quaternion()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:standard_cyborg.proto.math.Quaternion)
}
Quaternion::Quaternion(const Quaternion& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&w_) -
    reinterpret_cast<char*>(&x_)) + sizeof(w_));
  // @@protoc_insertion_point(copy_constructor:standard_cyborg.proto.math.Quaternion)
}

void Quaternion::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&w_) -
      reinterpret_cast<char*>(&x_)) + sizeof(w_));
}

Quaternion::~Quaternion() {
  // @@protoc_insertion_point(destructor:standard_cyborg.proto.math.Quaternion)
  SharedDtor();
}

void Quaternion::SharedDtor() {
}

void Quaternion::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Quaternion& Quaternion::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Quaternion_standard_5fcyborg_2fproto_2fmath_2fcore_2eproto.base);
  return *internal_default_instance();
}


void Quaternion::Clear() {
// @@protoc_insertion_point(message_clear_start:standard_cyborg.proto.math.Quaternion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&w_) -
      reinterpret_cast<char*>(&x_)) + sizeof(w_));
  _internal_metadata_.Clear();
}

const char* Quaternion::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // float w = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          w_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Quaternion::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:standard_cyborg.proto.math.Quaternion)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  // float z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_z(), target);
  }

  // float w = 4;
  if (!(this->w() <= 0 && this->w() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_w(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:standard_cyborg.proto.math.Quaternion)
  return target;
}

size_t Quaternion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:standard_cyborg.proto.math.Quaternion)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  if (!(this->x() <= 0 && this->x() >= 0)) {
    total_size += 1 + 4;
  }

  // float y = 2;
  if (!(this->y() <= 0 && this->y() >= 0)) {
    total_size += 1 + 4;
  }

  // float z = 3;
  if (!(this->z() <= 0 && this->z() >= 0)) {
    total_size += 1 + 4;
  }

  // float w = 4;
  if (!(this->w() <= 0 && this->w() >= 0)) {
    total_size += 1 + 4;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Quaternion::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:standard_cyborg.proto.math.Quaternion)
  GOOGLE_DCHECK_NE(&from, this);
  const Quaternion* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Quaternion>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:standard_cyborg.proto.math.Quaternion)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:standard_cyborg.proto.math.Quaternion)
    MergeFrom(*source);
  }
}

void Quaternion::MergeFrom(const Quaternion& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:standard_cyborg.proto.math.Quaternion)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.x() <= 0 && from.x() >= 0)) {
    _internal_set_x(from._internal_x());
  }
  if (!(from.y() <= 0 && from.y() >= 0)) {
    _internal_set_y(from._internal_y());
  }
  if (!(from.z() <= 0 && from.z() >= 0)) {
    _internal_set_z(from._internal_z());
  }
  if (!(from.w() <= 0 && from.w() >= 0)) {
    _internal_set_w(from._internal_w());
  }
}

void Quaternion::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:standard_cyborg.proto.math.Quaternion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Quaternion::CopyFrom(const Quaternion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:standard_cyborg.proto.math.Quaternion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Quaternion::IsInitialized() const {
  return true;
}

void Quaternion::InternalSwap(Quaternion* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
  swap(w_, other->w_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Quaternion::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace math
}  // namespace proto
}  // namespace standard_cyborg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::standard_cyborg::proto::math::Vec2* Arena::CreateMaybeMessage< ::standard_cyborg::proto::math::Vec2 >(Arena* arena) {
  return Arena::CreateInternal< ::standard_cyborg::proto::math::Vec2 >(arena);
}
template<> PROTOBUF_NOINLINE ::standard_cyborg::proto::math::Vec3* Arena::CreateMaybeMessage< ::standard_cyborg::proto::math::Vec3 >(Arena* arena) {
  return Arena::CreateInternal< ::standard_cyborg::proto::math::Vec3 >(arena);
}
template<> PROTOBUF_NOINLINE ::standard_cyborg::proto::math::Quaternion* Arena::CreateMaybeMessage< ::standard_cyborg::proto::math::Quaternion >(Arena* arena) {
  return Arena::CreateInternal< ::standard_cyborg::proto::math::Quaternion >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>