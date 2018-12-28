#pragma once
#include <string>
using namespace std;

class Klient
{
private:
	// имя клиента
	char klientname[20];
	// фамилия клиента
	char klientSecondname[20];
	// ИД товара которы он покупал
	int tovarID;
	// ИД клиента
	int klientID;
public:
	// коструктор по умольчании
	Klient() { tovarID = 0; klientID = 0; };
	// коструктор с параметрами
	Klient(int currentKlientID, int currentTovarId, char* currentName, char* currentSecondname);
	// конструктор копирование
	Klient(const Klient &tmp);
	// деструктор
	~Klient() {}


	//Функции получения и установки параметров  

	// геттеры
	char* getUsername() { return this->klientname; }
	char* getUserSecondName() { return this->klientSecondname; }
	int getKlientId() { return this->klientID; }
	int getTovarId() { return this->tovarID; }

	// сеттеры
	void setKlientname(char* tmp) { strcpy_s(this->klientname, tmp); }
	void setTovarId(int tmp) { this->tovarID = tmp; }
	void setKlientID(int tmp) { this->klientID = tmp; }
	void setKlientSecName(char* tmp) { strcpy_s(this->klientSecondname, tmp); }

	//Перегрузка ввода с клавиатуры
	friend istream& operator >>(istream & is, Klient & tmp);
	//Перегрузка вывода на экран
	friend ostream& operator <<(ostream& out, const Klient & tmp);
};

