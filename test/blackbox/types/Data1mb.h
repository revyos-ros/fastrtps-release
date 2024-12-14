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
 * @file Data1mb.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_DATA1MB_H_
#define _FAST_DDS_GENERATED_DATA1MB_H_


#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Data1mb_SOURCE)
#define Data1mb_DllAPI __declspec( dllexport )
#else
#define Data1mb_DllAPI __declspec( dllimport )
#endif // Data1mb_SOURCE
#else
#define Data1mb_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Data1mb_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure Data1mb defined by the user in the IDL file.
 * @ingroup DATA1MB
 */
class Data1mb
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport Data1mb();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~Data1mb();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object Data1mb that will be copied.
     */
    eProsima_user_DllExport Data1mb(
            const Data1mb& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object Data1mb that will be copied.
     */
    eProsima_user_DllExport Data1mb(
            Data1mb&& x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object Data1mb that will be copied.
     */
    eProsima_user_DllExport Data1mb& operator =(
            const Data1mb& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object Data1mb that will be copied.
     */
    eProsima_user_DllExport Data1mb& operator =(
            Data1mb&& x);

    /*!
     * @brief Comparison operator.
     * @param x Data1mb object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const Data1mb& x) const;

    /*!
     * @brief Comparison operator.
     * @param x Data1mb object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const Data1mb& x) const;

    /*!
     * @brief This function copies the value in member data
     * @param _data New value to be copied in member data
     */
    eProsima_user_DllExport void data(
            const std::vector<uint8_t>& _data);

    /*!
     * @brief This function moves the value in member data
     * @param _data New value to be moved in member data
     */
    eProsima_user_DllExport void data(
            std::vector<uint8_t>&& _data);

    /*!
     * @brief This function returns a constant reference to member data
     * @return Constant reference to member data
     */
    eProsima_user_DllExport const std::vector<uint8_t>& data() const;

    /*!
     * @brief This function returns a reference to member data
     * @return Reference to member data
     */
    eProsima_user_DllExport std::vector<uint8_t>& data();

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(
            const Data1mb& data,
            size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(
            eprosima::fastcdr::Cdr& cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(
            eprosima::fastcdr::Cdr& cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
            size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(
            eprosima::fastcdr::Cdr& cdr) const;

private:

    std::vector<uint8_t> m_data;
};

#endif // _FAST_DDS_GENERATED_DATA1MB_H_