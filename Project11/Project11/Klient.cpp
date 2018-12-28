#include "Klient.h"

Klient::Klient(int currentKlientID, int currentTovarID, char * currentName, char* currentSecondname)
{
	strcpy_s(klientname, currentName);
	strcpy_s(klientSecondname, currentSecondname);
	klientID = currentKlientID;
	tovarID = currentTovarID;
}

Klient::Klient(const Klient & tmp)
{
	strcpy_s(this->klientname, tmp.klientname);
	strcpy_s(this->klientSecondname, tmp.klientSecondname);
	this->tovarID = tmp.tovarID;
	this->klientID = tmp.klientID;
}

istream& operator>>(istream & is, Klient & tmp)
{
	char _tmp[20];
	char _tmp2[20];
	is >> _tmp;
	strcpy_s(tmp.klientname, _tmp);
	is >> _tmp2;
	strcpy_s(tmp.klientSecondname, _tmp2);
	return is;
}

ostream& operator<<(ostream & out, const Klient & tmp)
{
	system("cls");
	out << tmp.klientID << " " << tmp.tovarID << " " << tmp.klientname << " " << tmp.klientSecondname;
	return out;
}
