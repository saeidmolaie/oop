#pragma once

// involves creating a complex object by combining simple objects or components
// has-a relationship

// Example

class car_component
{
};

class engine : public car_component
{
	public:
		void start();
};

class wheel : public car_component
{
	public:
		void rotate();
};

class car
{
	public:
		engine m_engine;
		wheel m_wheel;

	public:
		void start()
		{
			m_engine.start();
			m_wheel.rotate();
		}
};