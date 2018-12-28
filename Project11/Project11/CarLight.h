#pragma once
#include "Car.h"
#include <iostream>
using namespace std;

class CarLight : public Car
{
protected:
	// модел
	char model[20];
	// марка
	char marka[20];
	// цена
	int price;
	// скорость
	int speed;
	// ИД товара
	int ID;
	//индекс
	int index;
public:
	// конструктор по умольчании
	CarLight() { price = 0; speed = 0; ID = 0; index = 1; };
	// конструктор копирование
	CarLight(const CarLight& obj);
	// конструктор с параметрами
	CarLight(int _ID, char* _model, char* _marka, int _price, int _speed, int _index, char* _type);

	//Функции получения и установки параметров  
	void setModel(char* model) { strcpy_s(this->model, model); }
	void setMarka(char* marka) { strcpy_s(this->marka, marka); }
	void setPrice(int price) { this->price = price; }
	void setSpeed(int speed) { this->speed = speed; }
	void setID(int ID) { this->ID = ID; }
	void setIndex(int index) { this->index = index; }
	char* getModel() { return model; }
	char* getMarka() { return marka; }
	int getSpeed() { return speed; }
	int getPrice() { return price; }
	int getID() { return ID; }
	int getIndex() { return index; }

	//Перегрузка вывода на экран
	friend ostream& operator<<(ostream& out, const CarLight& obj);
	// оператор присваивание
	CarLight& operator= (const CarLight& other);
	// деструктор
	~CarLight() {}
};

