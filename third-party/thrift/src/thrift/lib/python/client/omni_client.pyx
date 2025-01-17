# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cdef extern from "thrift/lib/cpp2/util/MethodMetadata.h" namespace "::apache::thrift":
    cpdef enum class FunctionQualifier:
        Unspecified = 0
        OneWay = 1
        Idempotent = 2
        ReadOnly = 3

    cpdef enum class InteractionMethodPosition:
        None = 0
        Factory = 1
        Member = 2
