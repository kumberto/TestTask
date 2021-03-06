// BaseData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Data.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"

int main()
{
	Data data;
	Type1 type1("Hello", "World", 2018);
	std::vector<Point> points = { Point(10.0, 11.0) };
	Type2 type2("Hello", "World", 2018, points);
	Type3 type3("Hello", "World", 19, 06, 2018, 9.9);

	data.insert(&type1);
	data.insert(&type2);
	data.insert(&type3);
	std::cout << *(dynamic_cast<Type1*>(data.getType(1))) << std::endl;
	std::cout << *(dynamic_cast<Type2*>(data.getType(2))) << std::endl;
	std::cout << *(dynamic_cast<Type3*>(data.getType(3))) << std::endl;

    return 0;
}

