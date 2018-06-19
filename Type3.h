#pragma once

#include <iostream>
#include "Type.h"
class Type3 : public Type
{
public:
	Type3(std::string, std::string, int, int, int, double);

	virtual int getNumber2() const override;
	virtual int getNumber3() const override;
	virtual int getDouble() const override;

	virtual void setNumber2(int) override;
	virtual void setNumber3(int) override;
	virtual void setDouble(double) override;

private:
	int m_number2;
	int m_number3;
	double m_double;

private:
	Type3(const Type3&) = delete;
	Type3& operator=(const Type3&) = delete;

	virtual std::vector<Point> getPoints() const override { return std::vector<Point>(); }
	virtual void setPoint(std::vector<Point>) {}
};

std::ostream & operator<<(std::ostream&, Type3&);