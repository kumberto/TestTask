#include "stdafx.h"
#include "Type.h"

int Type::id = 0;

Type::Type(std::string str1, std::string str2, int number)
	: m_str1(str1)
	, m_str2(str2)
	, m_number(number)
{
	id += 1;
	typeId.m_objectId = id;
}

Type::~Type()
{
}

void Type::setStr1(std::string str)
{
	m_str1 = str;
}

void Type::setStr2(std::string str)
{
	m_str2 = str;
}

void Type::setNumber1(int n)
{
	m_number = n;
}