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
// This file is generated from clusters-Enums-Check.h.zapt

#pragma once

#include <clusters/ThermostatUserInterfaceConfiguration/Enums.h>

namespace chip
{
namespace app
{
	namespace Clusters
	{
		static auto __attribute__((unused))
		EnsureKnownEnumValue(ThermostatUserInterfaceConfiguration::KeypadLockoutEnum val)
		{
			using EnumType = ThermostatUserInterfaceConfiguration::KeypadLockoutEnum;
			switch (val) {
			case EnumType::kNoLockout:
			case EnumType::kLockout1:
			case EnumType::kLockout2:
			case EnumType::kLockout3:
			case EnumType::kLockout4:
			case EnumType::kLockout5:
				return val;
			default:
				return EnumType::kUnknownEnumValue;
			}
		}
		static auto __attribute__((unused))
		EnsureKnownEnumValue(ThermostatUserInterfaceConfiguration::ScheduleProgrammingVisibilityEnum val)
		{
			using EnumType = ThermostatUserInterfaceConfiguration::ScheduleProgrammingVisibilityEnum;
			switch (val) {
			case EnumType::kScheduleProgrammingPermitted:
			case EnumType::kScheduleProgrammingDenied:
				return val;
			default:
				return EnumType::kUnknownEnumValue;
			}
		}
		static auto __attribute__((unused))
		EnsureKnownEnumValue(ThermostatUserInterfaceConfiguration::TemperatureDisplayModeEnum val)
		{
			using EnumType = ThermostatUserInterfaceConfiguration::TemperatureDisplayModeEnum;
			switch (val) {
			case EnumType::kCelsius:
			case EnumType::kFahrenheit:
				return val;
			default:
				return EnumType::kUnknownEnumValue;
			}
		}
	} // namespace Clusters
} // namespace app
} // namespace chip
