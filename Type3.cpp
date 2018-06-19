#include "stdafx.h"
#include "Type3.h"


Type3::Type3(std::string str1, std::string str2, int number, int number2, int number3, double d)
	: Type(str1, str2, number)
	, m_number2(number2)
	, m_number3(number3)
	, m_double(d)
{
}

int Type3::getNumber2() const
{
	return m_number2;
}

int Type3::getNumber3() const
{
	return m_number3;
}

int Type3::getDouble() const
{
	return m_double;
}

void Type3::setNumber2(int n)
{
	m_number2 = n;
}

void Type3::setNumber3(int n)
{
	m_number3 = n;
}

void Type3::setDouble(double n)
{
	m_double = n;
}

std::ostream & operator<<(std::ostream& out, Type3& type)
{
	out << type.getStr1() << " " << type.getStr2() << " " << type.getNumber1() << " " << type.getNumber2() << " " << type.getNumber3() << " " << type.getDouble();
	return out;
}