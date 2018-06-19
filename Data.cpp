#include "stdafx.h"
#include "Data.h"


Data::Data()
{
}

Data::Data(Type* type)
{
	m_map[type->objectId()] = type;
}


Data::~Data()
{
}

Type * Data::getType(int id) const
{
	return m_map.find(id)->second;
}

void Data::insert(Type *object)
{
	int id = object->objectId();
	m_map[id] = object;
}
