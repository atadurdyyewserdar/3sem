#pragma once
#include "ArrayList.h"
#include <fstream>

#include "CarElectric.h"
#include "CarHeavy.h"
#include "CarLight.h"
#include "CarMoto.h"
#include "Klient.h"

template <class Type>
class File
{
public:
	// конструктор
	File() {};
	// деструктор
	~File() {};
	// функция для сохранение данных о заказе
	void FileSaveKlient(ArrayList<Type> &tmp, const char *file);
	// функция для загрузки данных с файла(заказы)
	void FileOpenKlient(ArrayList<Type> &tmp, const char *file);
	
	// функция для сохранение данных о товаре
	void FileOpenCarElectric(ArrayList<Type> &tmp, const char *file);
	// функция для сохранение данных о товаре
	void FileOpenCarLight(ArrayList<Type> &tmp, const char *file);
	// функция для сохранение данных о товаре
	void FileOpenCarMoto(ArrayList<Type> &tmp, const char *file);
	// функция для загрузки данных с файла(товар)
	void FileOpenCarHeavy(ArrayList<Type> &tmp, const char *file);

	void FileSaveCar(ArrayList<Type> &tmp, const char *file);
};

// функция для сохранение данных о заказе

template<class Type>
inline void File<Type>::FileSaveKlient(ArrayList<Type>& tmp, const char * file)
{
	ofstream on;
	on.open(file, ios::in | ios_base::trunc);
	if (!on.is_open())
	{
		cout << "Невозможно открыть файл!" << endl;
		return;
	}
	for (int i = 0; i < tmp.GetSize(); i++)
	{
		on << tmp[i] << endl;
	}
	on.close();
}

// функция для загрузки данных с файла(заказы)

template<class Type>
inline void File<Type>::FileOpenKlient(ArrayList<Type>& tmp, const char * file)
{
	ifstream in;
	in.open(file, ios::in);
	if (!in.is_open())
	{
		cout << "Невозможно открыть файл!" << endl;
		return;
	}
	while (!in.eof())
	{
		int _tmpTovarId;
		int _tmpKlientId;
		char _tmpName[20];
		char _tmpSecName[20];
		if (in >> _tmpKlientId >> _tmpTovarId >> _tmpName >> _tmpSecName)
		{
			Klient obj1(_tmpKlientId, _tmpTovarId, _tmpName, _tmpSecName);
			tmp.Add(obj1);
		}
	}
	in.close();
}
template<class Type>
inline void File<Type>::FileOpenCarElectric(ArrayList<Type>& tmp, const char * file)
{
	ifstream in;
	in.open(file, ios::in);
	if (!in.is_open())
	{
		cout << "Невозможно открыть файл!" << endl;
		return;
	}
	while (!in.eof())
	{
		int _ID, _speed, _price, _index;
		char _model[20], _marka[20], _type[20];
		if (in >> _ID >> _type >> _marka >> _model >> _speed >> _price >> _index)
		{
			CarElectric obj2(_ID, _marka, _model, _speed, _price, _index, _type);
			tmp.Add(obj2);
		}
	}
	in.close();
}
template<class Type>
inline void File<Type>::FileOpenCarLight(ArrayList<Type>& tmp, const char * file)
{
	ifstream in;
	in.open(file, ios::in);
	if (!in.is_open())
	{
		cout << "Невозможно открыть файл!" << endl;
		return;
	}
	while (!in.eof())
	{
		int _ID, _speed, _price, _index;
		char _model[20], _marka[20], _type[20];
		if (in >> _ID >> _type >> _marka >> _model >> _speed >> _price >> _index)
		{
			CarLight obj2(_ID, _marka, _model, _speed, _price, _index, _type);
			tmp.Add(obj2);
		}
	}
	in.close();
}
template<class Type>
inline void File<Type>::FileOpenCarMoto(ArrayList<Type>& tmp, const char * file)
{
	ifstream in;
	in.open(file, ios::in);
	if (!in.is_open())
	{
		cout << "Невозможно открыть файл!" << endl;
		return;
	}
	while (!in.eof())
	{
		int _ID, _speed, _price, _index;
		char _model[20], _marka[20], _type[20];
		if (in >> _ID >> _type >> _marka >> _model >> _speed >> _price >> _index)
		{
			CarMoto obj2(_ID, _marka, _model, _speed, _price, _index, _type);
			tmp.Add(obj2);
		}
	}
	in.close();
}
template<class Type>
inline void File<Type>::FileOpenCarHeavy(ArrayList<Type>& tmp, const char * file)
{
	ifstream in;
	in.open(file, ios::in);
	if (!in.is_open())
	{
		cout << "Невозможно открыть файл!" << endl;
		return;
	}
	while (!in.eof())
	{
		int _ID, _speed, _price, _index;
		char _model[20], _marka[20], _type[20];
		if (in >> _ID >> _type >> _marka >> _model >> _speed >> _price >> _index)
		{
			CarHeavy obj2(_ID, _marka, _model, _speed, _price, _index, _type);
			tmp.Add(obj2);
		}
	}
	in.close();
}
template<class Type>
inline void File<Type>::FileSaveCar(ArrayList<Type>& tmp, const char * file)
{
	ofstream on;
	on.open(file, ios::in | ios_base::trunc);
	if (!on.is_open())
	{
		cout << "Невозможно открыть файл!" << endl;
		return;
	}
	for (int i = 0; i < tmp.GetSize(); i++)
	{
		on << tmp[i] << endl;
	}
	on.close();
}
// функция для сохранение данных о товаре

