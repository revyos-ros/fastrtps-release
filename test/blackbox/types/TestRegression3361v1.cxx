// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file TestRegression3361.cpp
 * This source file contains the implementation of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "TestRegression3361.h"

#if FASTCDR_VERSION_MAJOR == 1

#include "TestRegression3361TypeObject.h"

#include <fastcdr/Cdr.h>


#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

namespace helper { namespace internal {

enum class Size {
    UInt8,
    UInt16,
    UInt32,
    UInt64,
};

constexpr Size get_size(int s) {
    return (s <= 8 ) ? Size::UInt8:
           (s <= 16) ? Size::UInt16:
           (s <= 32) ? Size::UInt32: Size::UInt64;
}

template<Size s>
struct FindTypeH;

template<>
struct FindTypeH<Size::UInt8> {
    using type = std::uint8_t;
};

template<>
struct FindTypeH<Size::UInt16> {
    using type = std::uint16_t;
};

template<>
struct FindTypeH<Size::UInt32> {
    using type = std::uint32_t;
};

template<>
struct FindTypeH<Size::UInt64> {
    using type = std::uint64_t;
};
}

template<int S>
struct FindType {
    using type = typename internal::FindTypeH<internal::get_size(S)>::type;
};
}

#define TestRegression3361_max_cdr_typesize 264ULL;





TestRegression3361::TestRegression3361()
{
    // TestModule::MACHINEID m_uuid


    // Just to register all known types
    registerTestRegression3361Types();
}

TestRegression3361::~TestRegression3361()
{
}

TestRegression3361::TestRegression3361(
        const TestRegression3361& x)
{
    m_uuid = x.m_uuid;

}

TestRegression3361::TestRegression3361(
        TestRegression3361&& x) noexcept
{
    m_uuid = std::move(x.m_uuid);

}

TestRegression3361& TestRegression3361::operator =(
        const TestRegression3361& x)
{
    m_uuid = x.m_uuid;

    return *this;
}

TestRegression3361& TestRegression3361::operator =(
        TestRegression3361&& x) noexcept
{
    m_uuid = std::move(x.m_uuid);

    return *this;
}

bool TestRegression3361::operator ==(
        const TestRegression3361& x) const
{
    return (m_uuid == x.m_uuid);
}

bool TestRegression3361::operator !=(
        const TestRegression3361& x) const
{
    return !(*this == x);
}

size_t TestRegression3361::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return TestRegression3361_max_cdr_typesize;
}

size_t TestRegression3361::getCdrSerializedSize(
        const TestRegression3361& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.uuid().size() + 1;


    return current_alignment - initial_alignment;
}


void TestRegression3361::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_uuid.c_str();

}

void TestRegression3361::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_uuid;


}


bool TestRegression3361::isKeyDefined()
{
    return false;
}

void TestRegression3361::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}

/*!
 * @brief This function copies the value in member uuid
 * @param _uuid New value to be copied in member uuid
 */
void TestRegression3361::uuid(
        const TestModule::MACHINEID& _uuid)
{
    m_uuid = _uuid;
}

/*!
 * @brief This function moves the value in member uuid
 * @param _uuid New value to be moved in member uuid
 */
void TestRegression3361::uuid(
        TestModule::MACHINEID&& _uuid)
{
    m_uuid = std::move(_uuid);
}

/*!
 * @brief This function returns a constant reference to member uuid
 * @return Constant reference to member uuid
 */
const TestModule::MACHINEID& TestRegression3361::uuid() const
{
    return m_uuid;
}

/*!
 * @brief This function returns a reference to member uuid
 * @return Reference to member uuid
 */
TestModule::MACHINEID& TestRegression3361::uuid()
{
    return m_uuid;
}




#endif // FASTCDR_VERSION_MAJOR == 1
