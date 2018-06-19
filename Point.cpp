#include "stdafx.h"
#include "Point.h"


Point::Point(double x, double y)
	: m_X(x)
	, m_Y(y)
{
}


Point::~Point()
{
}

double Point::getX() const
{
	return m_X;
}

double Point::getY() const
{
	return m_Y;
}

std::ostream & operator<<(std::ostream& out, Point& point)
{
	out << "(" << point.getX() << ", " << point.getY() << ")";
	return out;
}
