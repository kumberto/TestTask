#include "stdafx.h"
#include "Type2.h"


Type2::Type2(std::string str1, std::string str2, int number, std::vector<Point> points)
	:Type(str1, str2, number)
	, m_points(points)
{
}

std::vector<Point> Type2::getPoints() const
{
	return m_points;
}

void Type2::setPoint(std::vector<Point> points)
{
	m_points = points;
}

std::ostream & operator<<(std::ostream& out, Type2& type)
{
	out << type.getStr1() << " " << type.getStr2() << " " << type.getNumber1() << " ";
	std::vector<Point> points = type.getPoints();
	for (auto point : points)
	{
		out << point;
	}
	return out;
}