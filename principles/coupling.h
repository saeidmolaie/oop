#pragma once

#include <string>

// the degree of dependency between different classes
// loosely couple : when components have minimal dependency on other components
// tightly couple : when components have high dependency on other components

// we can reach loosely coupling by defining an abstraction like an interface,
// and instead of initialing the component itself, we will pass it from outside.
// dependency injection.

// Bad Example

class bad_email_sender
{
	public:
		void send_email(const std::string& message)
		{
		}
};

class bad_order
{
	public:
		void place_order()
		{
			bad_email_sender bad_email_sender;
			bad_email_sender.send_email("placing an order..");
		}
};

// Good Example

class notification_service
{
	public:
		virtual ~notification_service() = default;

	public:
		virtual void send_notification(const std::string& message) const = 0;

};

class good_email_sender : public notification_service
{
	public:
		inline void send_notification(const std::string& message) const override
		{
		}
};

class good_order
{
	public:
		const notification_service& m_notification_service;

	public:
		explicit good_order(const notification_service& notification_service)
				: m_notification_service(notification_service)
		{
		}

	public:
		void place_order()
		{
			m_notification_service.send_notification("placing an order..");
		}
};