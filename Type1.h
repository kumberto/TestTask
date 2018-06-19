#pragma once
#include <string>
#include "Type.h"
class Type1 : public Type
{
public:
	Type1(std::string str1, std::string str2, int number);

private:
	Type1(const Type1&) = delete;
	Type1& operator=(const Type1&) = delete;
	virtual std::vector<Point> getPoints() const override { return std::vector<Point>();}
	virtual int getNumber2() const override { return 0; }
	virtual int getNumber3() const override { return 0; }
	virtual int getDouble() const override { return 0; }

	virtual void setPoint(std::vector<Point>) {}
	virtual void setNumber2(int) {}
	virtual void setNumber3(int) {}
	virtual void setDouble(double) {}
};

std::ostream& operator<<(std::ostream&, Type1&);
