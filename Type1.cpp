#include "stdafx.h"
#include "Type1.h"

Type1::Type1(std::string str1, std::string str2, int number)
	: Type(str1, str2, number)
{
}

std::ostream & operator<<(std::ostream& out, Type1& type)
{
	out << type.getStr1() << " " << type.getStr2() << " " << type.getNumber1();
	return out;
}
