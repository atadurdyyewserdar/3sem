#pragma once
#include <iostream>
using namespace std;
class Car
{
protected:
	char type[20];
public:
	Car();
	void setType(char* type) { strcpy_s(this->type, type); }
	char* getType() { return this->type; }
	~Car();
};
