#pragma once

// a mechanism where a new class (child or subclass)
// acquires the properties and methods of an existing class (parent or superclass).
// also can add new feature or override existing ones from the parent class.
// the relationship between child and parent : 'is-a'

// Bad Example

class bad_position2d
{
	private:
		float m_x, m_y;

	public:
		bad_position2d(float x, float y)
		{
			m_x = x;
			m_y = y;
		}
};

class bad_position3d
{
	private:
		float m_x, m_y, m_z;

	public:
		bad_position3d(float x, float y, float z)
		{
			m_x = x;
			m_y = y;
			m_z = z;
		}
};

// Good example

class good_position2d
{
	private:
		float m_x, m_y;

	public:
		good_position2d(float x, float y)
		{
			m_x = x;
			m_y = y;
		}
};

class good_bad_position3d : public good_position2d
{
	private:
		float m_z;

	public:
		good_bad_position3d(float x, float y, float z) : good_position2d(x, y)
		{
			m_z = z;
		}
};