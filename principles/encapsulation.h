#pragma once

#include <stdexcept>

// Encapsulation means keeping an object’s internal data hidden
// and exposing only controlled ways to access or modify it.

// Bad Example

class bad_bank_account
{

	public:
		float balance = 0;

};

// Good Example

class good_bank_account
{

	private:
		float balance = 0;

	public:
		inline const float& get_balance()
		{
			return balance;
		}

	public:
		inline void deposit(const float& deposit_amount)
		{
			if (deposit_amount <= 0)
				throw std::invalid_argument("deposit amount must be positive.");

			balance += deposit_amount;
		}

		inline void withdrawal(const float& withdrawal_amount)
		{
			if (withdrawal_amount <= 0)
				throw std::invalid_argument("withdrawal amount must be positive.");

			if (withdrawal_amount > balance)
				throw std::invalid_argument("not enough balance to withdraw.");

			balance -= withdrawal_amount;
		}
};