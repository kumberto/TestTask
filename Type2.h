#pragma once

#include <string>
#include <iostream>
#include "Type.h"

class Type2 : public Type
{
public:
	Type2(std::string, std::string, int , std::vector<Point>);
	virtual std::vector<Point> getPoints() const override;
	virtual void setPoint(std::vector<Point>) override;

private:
	std::vector<Point> m_points;

private:
	Type2(const Type2&) = delete;
	Type2& operator=(const Type2&) = delete;

	virtual int getNumber2() const override { return 0; }
	virtual int getNumber3() const override { return 0; }
	virtual int getDouble() const override { return 0; }

	virtual void setNumber2(int) {}
	virtual void setNumber3(int) {}
	virtual void setDouble(double) {}
};


std::ostream& operator<<(std::ostream&, Type2&);
