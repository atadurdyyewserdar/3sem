#pragma once
#include "Car.h"
#include <iostream>
using namespace std;

class CarMoto : public Car
{
protected:
	// �����
	char model[20];
	// �����
	char marka[20];
	// ����
	int price;
	// ��������
	int speed;
	// �� ������
	int ID;
	//������
	int index;
public:
	// ����������� �� ����������
	CarMoto() { price = 0; speed = 0; ID = 0; index = 1; };
	// ����������� �����������
	CarMoto(const CarMoto& obj);
	// ����������� � �����������
	CarMoto(int _ID, char* _model, char* _marka, int _price, int _speed, int _index, char* _type);

	//������� ��������� � ��������� ����������  
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

	//���������� ������ �� �����
	friend ostream& operator<<(ostream& out, const CarMoto& obj);
	// �������� ������������
	CarMoto& operator= (const CarMoto& other);
	// ����������
	~CarMoto() {}
};

