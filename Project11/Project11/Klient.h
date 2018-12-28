#pragma once
#include <string>
using namespace std;

class Klient
{
private:
	// ��� �������
	char klientname[20];
	// ������� �������
	char klientSecondname[20];
	// �� ������ ������ �� �������
	int tovarID;
	// �� �������
	int klientID;
public:
	// ���������� �� ����������
	Klient() { tovarID = 0; klientID = 0; };
	// ���������� � �����������
	Klient(int currentKlientID, int currentTovarId, char* currentName, char* currentSecondname);
	// ����������� �����������
	Klient(const Klient &tmp);
	// ����������
	~Klient() {}


	//������� ��������� � ��������� ����������  

	// �������
	char* getUsername() { return this->klientname; }
	char* getUserSecondName() { return this->klientSecondname; }
	int getKlientId() { return this->klientID; }
	int getTovarId() { return this->tovarID; }

	// �������
	void setKlientname(char* tmp) { strcpy_s(this->klientname, tmp); }
	void setTovarId(int tmp) { this->tovarID = tmp; }
	void setKlientID(int tmp) { this->klientID = tmp; }
	void setKlientSecName(char* tmp) { strcpy_s(this->klientSecondname, tmp); }

	//���������� ����� � ����������
	friend istream& operator >>(istream & is, Klient & tmp);
	//���������� ������ �� �����
	friend ostream& operator <<(ostream& out, const Klient & tmp);
};

