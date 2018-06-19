#pragma once

#include <string>
#include <vector>
#include "Point.h"

class Type
{
public:
	Type(std::string str1, std::string str2, int number);
	virtual ~Type();
	inline std::string getStr1() const;
	inline std::string getStr2() const;
	inline int getNumber1() const;
	virtual std::vector<Point> getPoints() const = 0;
	virtual int getNumber2() const = 0;
	virtual int getNumber3() const = 0;
	virtual int getDouble() const = 0;
	int objectId() const
		{
			return typeId.m_objectId;
		}

	void setStr1(std::string);
	void setStr2(std::string);
	void setNumber1(int);
	virtual void setPoint(std::vector<Point>) = 0;
	virtual void setNumber2(int) = 0;
	virtual void setNumber3(int) = 0;
	virtual void setDouble(double) = 0;

private:
	std::string m_str1;
	std::string m_str2;
	int m_number;

	static int id;
	struct TypeId
	{
		int m_objectId;
	} typeId;

};

std::string Type::getStr1() const
{
	return m_str1;
}

std::string Type::getStr2() const
{
	return m_str2;
}

int Type::getNumber1() const
{
	return m_number;
}

