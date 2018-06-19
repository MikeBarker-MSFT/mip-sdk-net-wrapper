#pragma once

#include "mip/rms/user_policy.h"

namespace CLI
{
	public enum class UserPolicyType
	{
		TemplateBased = (int)mip::UserPolicyType::TemplateBased,
		Custom = (int)mip::UserPolicyType::Custom,
	};
}