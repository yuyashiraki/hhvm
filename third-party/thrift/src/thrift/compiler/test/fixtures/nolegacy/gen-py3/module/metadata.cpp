/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-py3/module/metadata.h"

namespace test {
namespace fixtures {
namespace nolegacy {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<TestEnum>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<TestError>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TestMixin>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TestStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TestUnion>::gen(metadata);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::fixtures::nolegacy::MyService>>::gen(response);
  return metadata;
}
} // namespace test
} // namespace fixtures
} // namespace nolegacy
