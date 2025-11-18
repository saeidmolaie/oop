#pragma once

// Abstraction means goal.
// all the code inside a function or class must be related to that specific goal
// if my goal is to create a class that handles emails,
// so it should not handle SMS.
// but if my abstraction was to handle notifications
// in that case it will be ok for a class named notification_service
// to handle email and sms at the same time.
// it is single responsible, because my goal of this class is notification
// and I didn't go outside of its abstraction.
// also, abstraction reduces complexity by hiding unnecessary details.
// my abstraction here is to send an email or read an email, I don't have to worry about
// connecting, disconnecting from the server, etc.

// Bad Example

class bad_email_service
{

	public:
		void connect();
		void authenticate();
		void send_email();
		void disconnect();
};

// email_service service;
// service.connect();
// service.authenticate();
// service.send_email();
// service.disconnect();

// Good Example

class good_email_service
{

	private:
		void connect();
		void authenticate();
		void disconnect();

	public:
		// this method handles all the internal steps
		void send_email();

};

// email_service service;
// service.send_email();