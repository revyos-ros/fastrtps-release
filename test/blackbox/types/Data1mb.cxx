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
 * @file Data1mb.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Data1mb.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

Data1mb::Data1mb()
{
    // m_data com.eprosima.idl.parser.typecode.SequenceTypeCode@53ca01a2


}

Data1mb::~Data1mb()
{
}

Data1mb::Data1mb(
        const Data1mb& x)
{
    m_data = x.m_data;
}

Data1mb::Data1mb(
        Data1mb&& x)
{
    m_data = std::move(x.m_data);
}

Data1mb& Data1mb::operator =(
        const Data1mb& x)
{

    m_data = x.m_data;

    return *this;
}

Data1mb& Data1mb::operator =(
        Data1mb&& x)
{

    m_data = std::move(x.m_data);

    return *this;
}

bool Data1mb::operator ==(
        const Data1mb& x) const
{

    return (m_data == x.m_data);
}

bool Data1mb::operator !=(
        const Data1mb& x) const
{
    return !(*this == x);
}

size_t Data1mb::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (1024000 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t Data1mb::getCdrSerializedSize(
        const Data1mb& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }



    return current_alignment - initial_alignment;
}

void Data1mb::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_data;
}

void Data1mb::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_data;}

/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void Data1mb::data(
        const std::vector<uint8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void Data1mb::data(
        std::vector<uint8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<uint8_t>& Data1mb::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<uint8_t>& Data1mb::data()
{
    return m_data;
}

size_t Data1mb::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool Data1mb::isKeyDefined()
{
    return false;
}

void Data1mb::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}
