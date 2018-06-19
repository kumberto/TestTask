#pragma once
#include <map>
#include "Type.h"

class Data
{
public:
	Data();
	Data(Type*);

	~Data();

	Type* getType(int) const;
	void insert(Type*);

private:
	std::map<int, Type*> m_map;
};

