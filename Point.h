#pragma once
#include <iostream>

class Point
{
public:
	Point(double x, double y);
	~Point();
	double getX() const;
	double getY() const;
private:
	double m_X;
	double m_Y;
};

std::ostream& operator<<(std::ostream&, Point&);

