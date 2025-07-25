/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
// This file is generated from clusters-Enums.h.zapt

#pragma once

#include <clusters/shared/Enums.h>
#include <cstdint>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		namespace TimeFormatLocalization
		{

			// Enum for CalendarTypeEnum
			enum class CalendarTypeEnum : uint8_t {
				kBuddhist = 0x00,
				kChinese = 0x01,
				kCoptic = 0x02,
				kEthiopian = 0x03,
				kGregorian = 0x04,
				kHebrew = 0x05,
				kIndian = 0x06,
				kIslamic = 0x07,
				kJapanese = 0x08,
				kKorean = 0x09,
				kPersian = 0x0A,
				kTaiwanese = 0x0B,
				kUseActiveLocale = 0xFF,
				// All received enum values that are not listed above will be mapped
				// to kUnknownEnumValue. This is a helper enum value that should only
				// be used by code to process how it handles receiving and unknown
				// enum value. This specific should never be transmitted.
				kUnknownEnumValue = 12,
			};

			// Enum for HourFormatEnum
			enum class HourFormatEnum : uint8_t {
				k12hr = 0x00,
				k24hr = 0x01,
				kUseActiveLocale = 0xFF,
				// All received enum values that are not listed above will be mapped
				// to kUnknownEnumValue. This is a helper enum value that should only
				// be used by code to process how it handles receiving and unknown
				// enum value. This specific should never be transmitted.
				kUnknownEnumValue = 2,
			};

			// Bitmap for Feature
			enum class Feature : uint32_t {
				kCalendarFormat = 0x1,
			};
		} // namespace TimeFormatLocalization
	} // namespace Clusters
} // namespace app
} // namespace chip
