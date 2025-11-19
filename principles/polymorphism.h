#pragma once

// polymorphism
// poly  : many
// morph : forms
// is the ability of an object to take many forms.
// so its behaviour can be changed related to what form it have.

// Example
// starting and stoping a vehicle behaviour depends on what form of vehicle we have.
// if it's a plane or bike or a car, it's behaviour changes.

class vehicle
{

	public:
		virtual void start();
		virtual void stop();

};

class car : public vehicle
{

	public:

		void start() override
		{
		}

		void stop() override
		{
		}
};

class plane : public vehicle
{

	public:

		void start() override
		{
		}

		void stop() override
		{
		}
};

class bike : public vehicle
{

	public:

		void start() override
		{
		}

		void stop() override
		{
		}
};