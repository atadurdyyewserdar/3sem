#include <iomanip>
#include "CarHeavy.h"

ostream & operator<<(ostream & out, const CarHeavy & obj)
{
	out << obj.ID << " " << obj.type << " " << obj.marka << " " << obj.model << " " << obj.speed << " " << obj.price << " " << obj.index;
	return out;
}

CarHeavy::CarHeavy(const CarHeavy & obj)
{
	this->ID = obj.ID;
	strcpy_s(this->marka, obj.marka);
	strcpy_s(this->model, obj.model);
	this->speed = obj.speed;
	this->price = obj.price;
	this->index = obj.index;
	strcpy_s(this->type, obj.type);
}

CarHeavy::CarHeavy(int _ID, char * _model, char * _marka, int _price, int _speed, int _index, char * _type)
{
	ID = _ID;
	strcpy_s(model, _model);
	strcpy_s(marka, _marka);
	speed = _speed;
	price = _price;
	index = _index;
	strcpy_s(type, _type);
}


CarHeavy & CarHeavy::operator=(const CarHeavy & other)
{
	this->ID = other.ID;
	strcpy_s(this->marka, other.marka);
	strcpy_s(this->model, other.model);
	this->speed = other.speed;
	this->price = other.price;
	this->index = other.index;
	strcpy_s(this->type, other.type);
	return *this;
}
