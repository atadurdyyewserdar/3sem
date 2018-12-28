#include "Menu.h"
#include <iomanip>
#include <iostream>
using namespace std;

void Menu::ShowCarElectric()
{
	int size1 = CarElectricList.GetSize();
	for (int i = 0; i < 3; i++) cout << endl;
	cout << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	cout << setw(5) << "|" << setw(5) << "" << "ID" << setw(5) << "|" << setw(11) << "Тип" << setw(6) << "|" << setw(8) << "" << "Марка" << setw(8) << "|" << setw(8) << "" << "Модел";
	cout << setw(8) << "|" << setw(3) << "" << "Скорость" << setw(3) << "|";
	cout << setw(6) << "" << "Цена" << setw(6) << "|" << setw(4) << "" << "index" << setw(4) << "|" << endl << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << setw(5) << "|" << setw(7) << CarElectricList[i].getID() << setw(5) << "|";
		cout << setw(14) << CarElectricList[i].getType() << setw(3) << "|";
		cout << setw(17) << CarElectricList[i].getMarka() << setw(4) << "|";
		cout << setw(16) << CarElectricList[i].getModel() << setw(5) << "|";
		cout << setw(12) << CarElectricList[i].getSpeed() << setw(2) << "|";
		cout << setw(14) << CarElectricList[i].getPrice() << setw(2) << "|";
		cout << setw(10) << CarElectricList[i].getIndex() << setw(3) << "|" << endl;
	}
	cout << setw(5);
	for (int i = 0; i < 115; i++)
		cout << "-";
}

void Menu::ShowCarLight()
{
	int size1 = CarLightList.GetSize();
	for (int i = 0; i < 3; i++) cout << endl;
	cout << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	cout << setw(5) << "|" << setw(5) << "" << "ID" << setw(5) << "|" << setw(11) << "Тип" << setw(6) << "|" << setw(8) << "" << "Марка" << setw(8) << "|" << setw(8) << "" << "Модел";
	cout << setw(8) << "|" << setw(3) << "" << "Скорость" << setw(3) << "|";
	cout << setw(6) << "" << "Цена" << setw(6) << "|" << setw(4) << "" << "index" << setw(4) << "|" << endl << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << setw(5) << "|" << setw(7) << CarLightList[i].getID() << setw(5) << "|";
		cout << setw(14) << CarLightList[i].getType() << setw(3) << "|";
		cout << setw(17) << CarLightList[i].getMarka() << setw(4) << "|";
		cout << setw(16) << CarLightList[i].getModel() << setw(5) << "|";
		cout << setw(12) << CarLightList[i].getSpeed() << setw(2) << "|";
		cout << setw(14) << CarLightList[i].getPrice() << setw(2) << "|";
		cout << setw(10) << CarLightList[i].getIndex() << setw(3) << "|" << endl;
	}
	cout << setw(5);
	for (int i = 0; i < 115; i++)
		cout << "-";
}

void Menu::ShowCarHeavy()
{
	int size1 = CarHeavyList.GetSize();
	for (int i = 0; i < 3; i++) cout << endl;
	cout << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	cout << setw(5) << "|" << setw(5) << "" << "ID" << setw(5) << "|" << setw(11) << "Тип" << setw(6) << "|" << setw(8) << "" << "Марка" << setw(8) << "|" << setw(8) << "" << "Модел";
	cout << setw(8) << "|" << setw(3) << "" << "Скорость" << setw(3) << "|";
	cout << setw(6) << "" << "Цена" << setw(6) << "|" << setw(4) << "" << "index" << setw(4) << "|" << endl << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << setw(5) << "|" << setw(7) << CarHeavyList[i].getID() << setw(5) << "|";
		cout << setw(14) << CarHeavyList[i].getType() << setw(3) << "|";
		cout << setw(17) << CarHeavyList[i].getMarka() << setw(4) << "|";
		cout << setw(16) << CarHeavyList[i].getModel() << setw(5) << "|";
		cout << setw(12) << CarHeavyList[i].getSpeed() << setw(2) << "|";
		cout << setw(14) << CarHeavyList[i].getPrice() << setw(2) << "|";
		cout << setw(10) << CarHeavyList[i].getIndex() << setw(3) << "|" << endl;
	}
	cout << setw(5);
	for (int i = 0; i < 115; i++)
		cout << "-";

}

void Menu::ShowCarMoto()
{
	int size1 = CarMotoList.GetSize();
	for (int i = 0; i < 3; i++) cout << endl;
	cout << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	cout << setw(5) << "|" << setw(5) << "" << "ID" << setw(5) << "|" << setw(11) << "Тип" << setw(6) << "|" << setw(8) << "" << "Марка" << setw(8) << "|" << setw(8) << "" << "Модел";
	cout << setw(8) << "|" << setw(3) << "" << "Скорость" << setw(3) << "|";
	cout << setw(6) << "" << "Цена" << setw(6) << "|" << setw(4) << "" << "index" << setw(4) << "|" << endl << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << setw(5) << "|" << setw(7) << CarMotoList[i].getID() << setw(5) << "|";
		cout << setw(14) << CarMotoList[i].getType() << setw(3) << "|";
		cout << setw(17) << CarMotoList[i].getMarka() << setw(4) << "|";
		cout << setw(16) << CarMotoList[i].getModel() << setw(5) << "|";
		cout << setw(12) << CarMotoList[i].getSpeed() << setw(2) << "|";
		cout << setw(14) << CarMotoList[i].getPrice() << setw(2) << "|";
		cout << setw(10) << CarMotoList[i].getIndex() << setw(3) << "|" << endl;
	}
	cout << setw(5);
	for (int i = 0; i < 115; i++)
		cout << "-";
}

void  Menu::ShowMenu()
{
	ReadKlientsFromFile();
	ReadTovarFromFile();
	for (int i = 0; i < CarElectricList.GetSize(); i++)
		CarElectricList[i].setIndex(i + 1);
	for (int i = 0; i < CarMotoList.GetSize(); i++)
		CarMotoList[i].setIndex(i + 1);
	for (int i = 0; i < CarHeavyList.GetSize(); i++)
		CarHeavyList[i].setIndex(i + 1);
	for (int i = 0; i < CarLightList.GetSize(); i++)
		CarLightList[i].setIndex(i + 1);
	int choice;
	do {
		setlocale(LC_ALL, "RUS");
		do {
			system("cls");
			for (int i = 0; i < 2; i++)
				cout << endl;
			cout << setw(5) << "1" << " - Администратор" << endl;
			cout << setw(5) << "2" << " - Вход как гост" << endl;
			cout << setw(5) << "3" << " - Выход" << endl << endl;
			cout << setw(4) << "" << "Ваш выбор: ";
		} while (CheckInt(choice) != 0);
		switch (choice)
		{
		case 1: {
			char _log[20];
			char _pass[20];
			int count = 0;
			do {
				system("cls");
				for (int i = 0; i < 2; i++)
					cout << endl;
				cout << setw(4) << "" << "Вводите логин:";
				cin >> _log;
				cout << setw(4) << "" << "Вводите парол:";
				cin >> _pass;
				if (admin.adminSafety(_log, _pass) != 0)
					count++;
				else break;
			} while (count != 3);
			if (count == 3) break;
			else {
				ShowAdminMenu();
				SaveKlientsToFile();
				SaveTovarToFile();
			}
		}break;
		case 2: {
			int y = -1;
			char _klientName[20];
			char _klientSecName[20];

			system("cls");
			cout << "\n\n\n";
			do {
				cout << setw(5) << "" << "Вводите имя     : ";
				cin >> _klientName;
			} while (CheckChar(_klientName) != 0);
			do {
				cout << setw(5) << "" << "Вводите фамилию : ";
				cin >> _klientSecName;
			} while (CheckChar(_klientSecName) != 0);
			klient1.setKlientSecName(_klientSecName);
			klient1.setKlientname(_klientName);
			ShowKlientMenu();
		}break;
		}
	} while (choice != 3);
}

void  Menu::ShowKlientMenu()
{
	int ch2;
	do {
		do {
			system("cls");
			cout << endl << setw(4) << " " << "========== Меню Покупателья ==========" << endl << endl;
			cout << setw(5) << "1" << " - Список автомобилей" << endl;
			cout << setw(5) << "2" << " - Сортировка" << endl;
			cout << setw(5) << "3" << " - Поиск автомобилей" << endl;
			cout << setw(5) << "4" << " - Заказать автомобил" << endl;
			cout << endl << setw(5) << "0" << " - Выход" << endl << endl;
			cout << setw(5) << "" << "Ваш выбор : ";
		} while (CheckInt(ch2) != 0);
		switch (ch2)
		{
		case 1: {
			ShowTovar();
			system("pause > NUL");
		}break;
		case 2: {
			SortMenu();
		}break;
		case 3: {
			SearchMenu();
		}break;
		case 4: {
			BuyTovar();
		}break;
		case 0: {break; }
		}
	} while (ch2 != 0);
}

void  Menu::ShowAdminMenu()
{
	int ch3;
	do {
		do {
			system("cls");
			cout << endl << setw(4) << " " << "=========== РАБОТА С ТОВАРАМИ ===========" << endl << endl;
			cout << setw(5) << "1" << " - Список товаров" << endl;
			cout << setw(5) << "2" << " - Добавить новый товар" << endl;
			cout << setw(5) << "3" << " - Редактировать товар" << endl;
			cout << setw(5) << "4" << " - Удаление товаров" << endl;
			cout << setw(5) << "5" << " - Сортировать товары" << endl;
			cout << setw(5) << "6" << " - Посчитать стоимост всех товаров" << endl;
			cout << setw(5) << "7" << " - Поиск товаров" << endl;

			cout << endl << setw(4) << " " << "=========== РАБОТА С ЗАКАЗАМИ ===========" << endl << endl;
			cout << setw(5) << "8" << " - Список заказов" << endl;
			cout << setw(5) << "9" << " - Удаление заказов" << endl;
			cout << setw(5) << "10" << " - Стоимость всех заказов" << endl;
			cout << endl << setw(5) << "0" << " - Выход" << endl << endl << setw(4) << "" << "Ваш выбор:";
		} while (CheckInt(ch3) != 0);

		switch (ch3)
		{
		case 1: {
			system("cls");
			ShowTovar();
		}break;
		case 2: {
			AddTovar();
		}break;
		case 3: {
			EditMenu();
		}break;
		case 4: {
			DeleteTovarMenu();
		}break;
		case 5: {
			SortMenu();
		}break;
		case 6: {
			system("cls");
			cout << setw(5) << " " << "Стоимость всех товаров составляеть : " << Sum();
			system("pause > NUL");
		}break;
		case 7: {
			SearchMenu();
		}break;
		case 8: {
			ShowKlients();
			system("pause > NUL");

		}break;
		case 9: {
			DeleteKlientMenu();
		}break;
		case 10: {
			cout << "\n\n\n";
			cout << setw(5) << "" << "Стоимость всех заказов составляеть :" << SumOfZakaz() << endl;
			system("pause > NUL");
		}break;
		case 0: {break;
		}
		}
	} while (ch3 != 0);
}

void  Menu::ShowKlients()
{
	system("cls");
	cout << "\n\n\n";
	cout << setw(5);
	for (int i = 0; i < 58; i++)
		cout << "-";
	cout << endl << setw(5) << "|" << setw(11) << "ID товара" << setw(2) << "|" << setw(12) << "Номер заказа" << setw(2) << "|";
	cout << setw(9) << "имя" << setw(6) << "|" << setw(11) << "фамилия" << setw(4) << "|" << endl << setw(5);
	for (int i = 0; i < 58; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < KlientList.GetSize(); i++)
	{
		cout << setw(5) << "|" << setw(8) << KlientList[i].getTovarId() << setw(5) << "|" << setw(9) << KlientList[i].getKlientId() << setw(5) << "|";
		cout << setw(11) << KlientList[i].getUsername() << setw(4) << "|" << setw(11) << KlientList[i].getUserSecondName();
		cout << setw(4) << "|" << endl;
	}
}

void  Menu::ShowTovar()
{
	int ch90;
	cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl << endl;
	cout << setw(5) << "1" << " - Электро Иашины" << endl;
	cout << setw(5) << "2" << " - Лекговые Машины" << endl;
	cout << setw(5) << "3" << " - Грузовые Машины" << endl;
	cout << setw(5) << "4" << " - Мотоциклы " << endl;
	cout << setw(5) << "0" << " - Выход" << endl << endl;
	cout << setw(4) << " - Ваш выбор:";

	cin >> ch90;
	if (ch90 == 0) return;
	switch(ch90) {
	case 1: {
		ShowCarElectric();
		system("pause > NUL");
	}break;
	case 2: {
		ShowCarLight();
		system("pause > NUL");
	}break;
	case 3: {
		ShowCarHeavy();
		system("pause > NUL");
	}break;
	case 4: {
		ShowCarMoto();
		system("pause > NUL");
	}break;
	}

}

void  Menu::AddTovar()
{

	int _ID, _speed, _price, _index;
	char _model[20], _marka[20];
	
	system("cls");
	int ch90;
	cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl;
	cout << "\n";
	cout << setw(5) << "1" << " - Электро Иашины" << endl;
	cout << setw(5) << "2" << " - Лекговые Машины" << endl;
	cout << setw(5) << "3" << " - Грузовые Машины" << endl;
	cout << setw(5) << "4" << " - Мотоциклы " << endl;
	cout << setw(5) << "0" << " - Выход " << endl;
	cout << setw(4) << "" << " - Ваш выбор:";
	cin >> ch90;
	if (ch90 == 0) return;
	if (ch90 == 1) _index = CarElectricList.GetSize() + 1;
	else if(ch90 == 2) _index = CarLightList.GetSize() + 1;
	else if (ch90 == 3) _index = CarHeavyList.GetSize() + 1;
	else if (ch90 == 4) _index = CarMotoList.GetSize() + 1;

	cout <<"\n\n"<< "Вводите ID :" << endl;
	do {
		while (CheckInt(_ID) != 0) { cout << endl; };
	} while (IfDoubleID(_ID) != 0);
	cout << "Вводите Марка:" << endl;
	cin >> _marka;
	cout << "Вводите модел:"<<endl;
	cin >> _model;
	cout << "Вводите скорость:" << endl;
	while (CheckInt(_speed) != 0) { cout << endl; };
	cout << "Вводите цену:";
	while (CheckInt(_price) != 0) { cout << endl; };
	
	if (ch90 == 1) {
		CarElectric newTovar;
		newTovar.setID(_ID);
		char _type[20];
		strcpy_s(_type, "Электро");
		newTovar.setType(_type);
		newTovar.setMarka(_marka);
		newTovar.setModel(_model);
		newTovar.setPrice(_price);
		newTovar.setSpeed(_speed);
		newTovar.setIndex(_index);
		CarElectricList.Add(newTovar);
	}	
	else if (ch90 == 2) {
		CarLight newTovar;
		newTovar.setID(_ID);
		char _type[20];
		strcpy_s(_type, "Лекговой");
		newTovar.setType(_type);
		newTovar.setMarka(_marka);
		newTovar.setModel(_model);
		newTovar.setPrice(_price);
		newTovar.setSpeed(_speed);
		newTovar.setIndex(_index);
		CarLightList.Add(newTovar);
	}
	else if (ch90 == 3) {
		CarHeavy newTovar;
		newTovar.setID(_ID);
		char _type[20];
		strcpy_s(_type, "Грузовой");
		newTovar.setType(_type);
		newTovar.setMarka(_marka);
		newTovar.setModel(_model);
		newTovar.setPrice(_price);
		newTovar.setSpeed(_speed);
		newTovar.setIndex(_index);
		CarHeavyList.Add(newTovar);
	}
	else if (ch90 == 4) {
		CarMoto newTovar;
		newTovar.setID(_ID);
		char _type[20];
		strcpy_s(_type, "Мотоцикл");
		newTovar.setType(_type);
		newTovar.setMarka(_marka);
		newTovar.setModel(_model);
		newTovar.setPrice(_price);
		newTovar.setSpeed(_speed);
		newTovar.setIndex(_index);
		CarMotoList.Add(newTovar);
	}
	cout << setw(5) << "" << "Товар успешно добавлен!";
	system("pause > NUL");
}

void  Menu::BuyTovar()
{
	int tmp_id;
	int decide;
	int exitornot = -1;
	int count1 = 0;
	int size;

	system("cls");
	int ch90;
	cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl;
	cout << setw(5) << "1" << " - Электро Иашины" << endl;
	cout << setw(5) << "2" << " - Лекговые Машины" << endl;
	cout << setw(5) << "3" << " - Грузовые Машины" << endl;
	cout << setw(5) << "4" << " - Мотоциклы " << endl;
	cout << setw(5) << "5" << " - Ваш выбор:";
	cin >> ch90;

	if (ch90 == 1) size = CarElectricList.GetSize();
	else if (ch90 == 2) size = CarLightList.GetSize();
	else if (ch90 == 3) size = CarHeavyList.GetSize();
	else if (ch90 == 4) size = CarMotoList.GetSize();
	do {
		system("cls");
		ShowTovar();
		cout << setw(5);
		for (int i = 0; i < 66; i++)
			cout << "-";

		cout << endl;
		cout << setw(4) << "" << "Вводите ID товара:";
		while (CheckInt(tmp_id) != 0) { cout << setw(4) << "" << "Вводите ID товара:"; };
		for (int i = 0; i < size; i++)
		{
			if (ch90 == 1) {

				if (CarElectricList.Get(i).getID() == tmp_id)
				{
					cout << setw(4) << "" << "Вы точно хотите купить товар?  (0 - нет / 1 - да) : ";
					while ((CheckInt(decide) != 0)) { cout << endl; };
					if (decide == 1)
						cout << setw(4) << "" << "Товар куплен!";
					else break;
					system("pause > NUL");
					count1 = -1;
					exitornot = 1;
					break;
				}
			}

			if (ch90 == 2) {

				if (CarLightList.Get(i).getID() == tmp_id)
				{
					cout << setw(4) << "" << "Вы точно хотите купить товар?  (0 - нет / 1 - да) : ";
					while ((CheckInt(decide) != 0)) { cout << endl; };
					if (decide == 1)
						cout << setw(4) << "" << "Товар куплен!";
					else break;
					system("pause > NUL");
					count1 = -1;
					exitornot = 1;
					break;
				}
			}

			if (ch90 == 3) {

				if (CarHeavyList.Get(i).getID() == tmp_id)
				{
					cout << setw(4) << "" << "Вы точно хотите купить товар?  (0 - нет / 1 - да) : ";
					while ((CheckInt(decide) != 0)) { cout << endl; };
					if (decide == 1)
						cout << setw(4) << "" << "Товар куплен!";
					else break;
					system("pause > NUL");
					count1 = -1;
					exitornot = 1;
					break;
				}
			}
			if (ch90 == 4) {

				if (CarMotoList.Get(i).getID() == tmp_id)
				{
					cout << setw(4) << "" << "Вы точно хотите купить товар?  (0 - нет / 1 - да) : ";
					while ((CheckInt(decide) != 0)) { cout << endl; };
					if (decide == 1)
						cout << setw(4) << "" << "Товар куплен!";
					else break;
					system("pause > NUL");
					count1 = -1;
					exitornot = 1;
					break;
				}
			}




		
		}

		if (count1 == -1)
		{
			cout << setw(4) << "" << "Товар куплен!";
			NumOfBuyers = KlientList.GetSize() + 1;
			klient1.setKlientID(NumOfBuyers);
			klient1.setTovarId(tmp_id);
			KlientList.Add(klient1);
			SaveKlientsToFile();
		}
		
		if (count1 == 0)
		{
			cout << setw(4) << "" << "Товар не найден. Вводите правильный ID" << endl;
			system("pause > NUL");
		}
	} while (exitornot != 1);
}

void  Menu::ReadKlientsFromFile()
{
	obj.FileOpenKlient(KlientList, "klient.txt");
}

void  Menu::ReadTovarFromFile()
{
	CarElectricListFromFile.FileOpenCarElectric(CarElectricList,"CarElectric.txt");
	CarMotoListFromFile.FileOpenCarMoto(CarMotoList,"CarMoto.txt");
	CarHeavyFromFile.FileOpenCarHeavy(CarHeavyList, "CarHeave.txt");
	CarLightListFromFile.FileOpenCarLight(CarLightList, "CarList.txt");
}

void  Menu::SaveKlientsToFile()
{
	obj.FileSaveKlient(KlientList, "Klient.txt");
}

void  Menu::SaveTovarToFile()
{
	CarElectricListFromFile.FileSaveCar(CarElectricList, "CarElectric.txt");
	CarMotoListFromFile.FileSaveCar(CarMotoList, "CarMoto.txt");
	CarHeavyFromFile.FileSaveCar(CarHeavyList, "CarHeave.txt");
	CarLightListFromFile.FileSaveCar(CarLightList, "CarList.txt");
}

void  Menu::DeleteTovarMenu()
{
	int _tmpID, cont2 = 1, cont;
	int sizeyt;
	int bT = 0;
	int ff;
	

		system("cls");
	cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl;
	cout << setw(5) << "1" <<  " - Электро Иашины" << endl;
	cout << setw(5) << "2" << " - Лекговые Машины" << endl;
	cout << setw(5) << "3" << " - Грузовые Машины" << endl;
	cout << setw(5) << "4" << " - Мотоциклы " << endl;
	cout << setw(5) <<  " - Ваш выбор: ";
	cin >> ff;

	if (ff == 1)
	{
	
		sizeyt = CarElectricList.GetSize(); if (sizeyt == 0) { system("cls"); cout << setw(5) << "" << "Список пуст!"; system("pause > NUL"); return; }
	}
	else if (ff == 2) {
		
		sizeyt = CarHeavyList.GetSize(); if (sizeyt == 0) { system("cls"); cout << setw(5) << "" << "Список пуст!"; system("pause > NUL"); return; } 
	}
	else if (ff == 3) {
	
		sizeyt = CarHeavyList.GetSize(); if (sizeyt == 0) { system("cls"); cout << setw(5) << "" << "Список пуст!"; system("pause > NUL"); return; }	
	}
	else if (ff == 4) {
	
		sizeyt = CarMotoList.GetSize(); if (sizeyt == 0) { system("cls"); cout << setw(5) << "" << "Список пуст!"; system("pause > NUL"); return; }
	}

	
	do {
		bT = 0;
		do {
			system("cls");
			if(ff == 1) ShowCarElectric();
			if (ff == 2) ShowCarLight();
			if (ff == 3) ShowCarHeavy();
			if (ff == 4) ShowCarMoto();
			cout << "\n\n\n";
			cout << setw(5) << "" << "Вводите индекс: ";
		} while (CheckInt(_tmpID) != 0);

		if (_tmpID < 1 || _tmpID > sizeyt)
		{
			cout << endl;
			cout << setw(5) << "" << "Не найден";
			system("pause > NUL");
			return;

		}


	if (ff == 1) { CarElectricList.Delete(_tmpID);
	cont2 = 1;
	for (int i = 0; i < CarElectricList.GetSize(); i++)
	{
		CarElectricList[i].setIndex(cont2);
		cont2++;
	} bT = 1;
	}
	if (ff == 2) {
		cont2 = 1; 
		CarLightList.Delete(_tmpID); 
	for (int i = 0; i < CarLightList.GetSize(); i++)
	{
		CarLightList[i].setIndex(cont2);
		cont2++;
	}	bT = 1;
	}
	if (ff == 3) { cont2 = 1; CarHeavyList.Delete(_tmpID);
	for (int i = 0; i < CarHeavyList.GetSize(); i++)
	{
		CarHeavyList[i].setIndex(cont2);
		cont2++;
	}	bT = 1;
	}
	if (ff == 4) {
	
		cont2 = 1; 
		CarMotoList.Delete(_tmpID);
		for (int i = 0; i < CarMotoList.GetSize(); i++) 
		{
		CarMotoList[i].setIndex(cont2);
		cont2++;
		}
		bT = 1;
	}
		
		if (bT == 1)
		{
			cout << endl;
			cout << setw(5) << "" << "Товар удалён";
		}
		do {
			cout << endl;
			cout << setw(5) << "" << "Продольжит удаление? (0 - нет / 1 - да)";
			cout << setw(5) << "" << "Выбор:";
		} while (CheckInt(cont) != 0);
	} while (cont != 0);
}

void  Menu::DeleteKlientMenu()
{
	int _tmpID, sizeT = KlientList.GetSize();
	int cont, cont2 = 1;
	int sizeyt = KlientList.GetSize();
	int bT = 0;
	do {
		do {
			do {
				system("cls");
				ShowKlients();
				cout << setw(5);
				for (int i = 0; i < 58; i++) cout << "-"; cout << endl;
				cout << "\n\n\n";
				cout << setw(5) << "" << "Вводите номер заказа: ";
			} while (CheckInt(_tmpID) != 0);

			if (KlientList.IsEmpty()) {
				cout << "Список пусть";
				system("pause > NUL");
				return;
			}
			if (_tmpID < 1 || _tmpID > KlientList.GetSize())
			{
				cout << endl;
				cout << setw(5) << "" << "Не найден";
				system("pause > NUL");
			}

		} while ((_tmpID < 1 || _tmpID > KlientList.GetSize()));

		if (KlientList.IsEmpty()) {
			cout << "Список пусть";
		}
		cont2 = 1;
		KlientList.Delete(_tmpID);
		bT = 1;
		for (int i = 0; i < KlientList.GetSize(); i++)
		{
			KlientList[i].setKlientID(cont2);
			cont2++;
		}
		if (bT == 1)
		{
			cout << endl;
			cout << setw(5) << "" << "Заказ удалён";
		}
		do {
			cout << endl;
			cout << setw(5) << "" << "Продольжит удаление? (0 - нет / 1 - да)";
			cout << setw(5) << "" << "Выбор:";
		} while (CheckInt(cont) != 0);
	} while (cont != 0);
}

void  Menu::EditMenu()
{
	int _ID, count9 = 0;
	system("cls");
	int ch90;
	cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl;
	cout << setw(5) << "1" << " - Электро Иашины" << endl;
	cout << setw(5) << "2" << " - Лекговые Машины" << endl;
	cout << setw(5) << "3" << " - Грузовые Машины" << endl;
	cout << setw(5) << "4" << " - Мотоциклы " << endl;
	cout << setw(5) << "5" << " - Ваш выбор:";
	cin >> ch90;
	cout << "Вводите ID товара который хотите удалить: ";
	while (CheckInt(_ID) != 0);
	if (ch90 == 1) {

		for (int i = 0; i < CarElectricList.GetSize(); i++)
		{
			if (CarElectricList[i].getID() == _ID)
			{
				int ch67;
				cout << "Товар найден" << endl;
				cout << "Вы хотите изменит наименование марки (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					char _tmpMarka[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpMarka;
					} while (CheckChar(_tmpMarka) != 0);

					CarElectricList[i].setMarka(_tmpMarka);
				}
				cout << "Вы хотите изменит наименование модели (0 - нет / 1 - да) :";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					cout << "вводите новое наименование :";
					char _tmpModel[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpModel;
					} while (CheckChar(_tmpModel) != 0);
					CarElectricList[i].setModel(_tmpModel);
				}
				cout << "Вы хотите изменит значения скорости (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpSpeed;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpSpeed) != 0) { cout << endl; };
					CarElectricList[i].setPrice(_tmpSpeed);
				}
				cout << "Вы хотите изменит значения цены (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpPrice;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpPrice) != 0) { cout << endl; };
					CarElectricList[i].setPrice(_tmpPrice);
				}
				count9 = -1;
				break;
			}
		}
		if (count9 == 0)
			cout << "Товар не найден";
		else cout << "Успешно";
		system("pause > NUL");
	}
	if (ch90 == 2) {

		for (int i = 0; i < CarLightList.GetSize(); i++)
		{
			if (CarLightList[i].getID() == _ID)
			{
				int ch67;
				cout << "Товар найден" << endl;
				cout << "Вы хотите изменит наименование марки (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					char _tmpMarka[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpMarka;
					} while (CheckChar(_tmpMarka) != 0);

					CarLightList[i].setMarka(_tmpMarka);
				}
				cout << "Вы хотите изменит наименование модели (0 - нет / 1 - да) :";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					cout << "вводите новое наименование :";
					char _tmpModel[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpModel;
					} while (CheckChar(_tmpModel) != 0);
					CarLightList[i].setModel(_tmpModel);
				}
				cout << "Вы хотите изменит значения скорости (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpSpeed;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpSpeed) != 0) { cout << endl; };
					CarLightList[i].setPrice(_tmpSpeed);
				}
				cout << "Вы хотите изменит значения цены (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpPrice;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpPrice) != 0) { cout << endl; };
					CarLightList[i].setPrice(_tmpPrice);
				}
				count9 = -1;
				break;
			}
		}
		if (count9 == 0)
			cout << "Товар не найден";
		else cout << "Успешно";
		system("pause > NUL");

	}
	if (ch90 == 3) {
		for (int i = 0; i < CarHeavyList.GetSize(); i++)
		{
			if (CarLightList[i].getID() == _ID)
			{
				int ch67;
				cout << "Товар найден" << endl;
				cout << "Вы хотите изменит наименование марки (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					char _tmpMarka[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpMarka;
					} while (CheckChar(_tmpMarka) != 0);

					CarHeavyList[i].setMarka(_tmpMarka);
				}
				cout << "Вы хотите изменит наименование модели (0 - нет / 1 - да) :";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					cout << "вводите новое наименование :";
					char _tmpModel[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpModel;
					} while (CheckChar(_tmpModel) != 0);
					CarHeavyList[i].setModel(_tmpModel);
				}
				cout << "Вы хотите изменит значения скорости (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpSpeed;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpSpeed) != 0) { cout << endl; };
					CarHeavyList[i].setPrice(_tmpSpeed);
				}
				cout << "Вы хотите изменит значения цены (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpPrice;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpPrice) != 0) { cout << endl; };
					CarHeavyList[i].setPrice(_tmpPrice);
				}
				count9 = -1;
				break;
			}
		}
		if (count9 == 0)
			cout << "Товар не найден";
		else cout << "Успешно";
		system("pause > NUL");
	}
	if (ch90 == 4) {
		for (int i = 0; i < CarMotoList.GetSize(); i++)
		{
			if (CarMotoList[i].getID() == _ID)
			{
				int ch67;
				cout << "Товар найден" << endl;
				cout << "Вы хотите изменит наименование марки (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					char _tmpMarka[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpMarka;
					} while (CheckChar(_tmpMarka) != 0);

					CarMotoList[i].setMarka(_tmpMarka);
				}
				cout << "Вы хотите изменит наименование модели (0 - нет / 1 - да) :";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					cout << "вводите новое наименование :";
					char _tmpModel[20];
					do {
						cout << "вводите новое наименование :";
						cin >> _tmpModel;
					} while (CheckChar(_tmpModel) != 0);
					CarMotoList[i].setModel(_tmpModel);
				}
				cout << "Вы хотите изменит значения скорости (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpSpeed;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpSpeed) != 0) { cout << endl; };
					CarMotoList[i].setPrice(_tmpSpeed);
				}
				cout << "Вы хотите изменит значения цены (0 - нет / 1 - да) : ";
				while (CheckInt(ch67) != 0) { cout << endl; };
				if (ch67 == 1)
				{
					int _tmpPrice;
					cout << "вводите новое значение :";
					while (CheckInt(_tmpPrice) != 0) { cout << endl; };
					CarMotoList[i].setPrice(_tmpPrice);
				}
				count9 = -1;
				break;
			}
		}
		if (count9 == 0)
			cout << "Товар не найден";
		else cout << "Успешно";
		system("pause > NUL");
	}
}

void  Menu::SortMenu()
{
	int ch68; int ch90;
	do {
		do {
			system("cls");
			cout << "\n\n\n";
			cout << setw(5) << "1" << " - Соритровать по ID" << endl;
			cout << setw(5) << "2" << " - Соритровать по марки (А - Z)" << endl;
			cout << setw(5) << "3" << " - Соритровать по модели (А - Z)" << endl;
			cout << setw(5) << "4" << " - Соритровать по скорости автомобилей" << endl;
			cout << setw(5) << "5" << " - Соритровать по цену автомобилей" << endl;
			cout << setw(5) << "0" << " - Выход" << endl << endl;
			cout << setw(4) << "" << "Выбор:";
		} while (CheckInt(ch68) != 0);

		system("cls");
		cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl;
		cout << setw(5) << "1" << " - Электро Иашины" << endl;
		cout << setw(5) << "2" << " - Лекговые Машины" << endl;
		cout << setw(5) << "3" << " - Грузовые Машины" << endl;
		cout << setw(5) << "4" << " - Мотоциклы " << endl;
		cout << setw(5) << "0" << " - Выход" << endl;
		cout << setw(4) << " - Ваш выбор:";

		cin >> ch90;

		switch (ch68)
		{
		case 1: {
			
			SortID(ch90);

			cout << endl << setw(5) << "" << "Успешно сортирован";
		}break;
		case 2: {
			SortMarka(ch90);
			cout << endl << setw(5) << "" << "Успешно сортирован";
		}break;
		case 3: {
			SortModel(ch90);
			cout << endl << setw(5) << "" << "Успешно сортирован";
		}break;
		case 4: {
			SortSpeed(ch90);
			cout << endl << setw(5) << "" << "Успешно сортирован";
		}break;
		case 5: {
			SortPrice(ch90);
			cout << endl << setw(5) << "" << "Успешно сортирован";
		}break;
		case 0: {
			break;
		}
		}
		if (ch68 == 1 || ch68 == 2 || ch68 == 3 || ch68 == 4 || ch68 == 5)
		{
			system("cls");
			if (ch90 == 1) ShowCarElectric();
			if (ch90 == 2) ShowCarLight();
			if (ch90 == 3) ShowCarHeavy();
			if (ch90 == 4) ShowCarMoto();
			system("pause > NUL");
		}
	} while (ch68 != 0);
}

void  Menu::SortID(int n)
{
	
	if (n == 1) {

		for (int i = 0; i < CarElectricList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarElectricList.GetSize() - i - 1; j++)
			{
				if (CarElectricList[j].getID() > CarElectricList[j + 1].getID())
				{
					CarElectric temp;
					temp = CarElectricList[j];
					CarElectricList[j] = CarElectricList[j + 1];
					CarElectricList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarElectricList.GetSize(); i++)
			CarElectricList[i].setIndex(i + 1);
	}

	if (n == 2) {

		for (int i = 0; i < CarLightList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarLightList.GetSize() - i - 1; j++)
			{
				if (CarLightList[j].getID() > CarLightList[j + 1].getID())
				{
					CarLight temp;
					temp = CarLightList[j];
					CarLightList[j] = CarLightList[j + 1];
					CarLightList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarLightList.GetSize(); i++)
			CarLightList[i].setIndex(i + 1);
	}
		
	if (n == 3) {
		for (int i = 0; i < CarHeavyList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarHeavyList.GetSize() - i - 1; j++)
			{
				if (CarHeavyList[j].getID() > CarHeavyList[j + 1].getID())
				{
					CarHeavy temp;
					temp = CarHeavyList[j];
					CarHeavyList[j] = CarHeavyList[j + 1];
					CarHeavyList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarHeavyList.GetSize(); i++)
			CarHeavyList[i].setIndex(i + 1);
	}
	if (n == 4)
	{
		for (int i = 0; i < CarMotoList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarMotoList.GetSize() - i - 1; j++)
			{
				if (CarMotoList[j].getID() > CarMotoList[j + 1].getID())
				{
					CarMoto temp;
					temp = CarMotoList[j];
					CarMotoList[j] = CarMotoList[j + 1];
					CarMotoList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarMotoList.GetSize(); i++)
			CarMotoList[i].setIndex(i + 1);
	}

}

void  Menu::SortModel(int n)
{

	if (n == 1) {
		for (int i = 0; i < CarElectricList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarElectricList.GetSize(); j++)
				if (strcmp(CarElectricList[i].getModel(), CarElectricList[j].getModel()) > 0)
					swap(CarElectricList[i], CarElectricList[j]);
		}

		for (int i = 0; i < CarElectricList.GetSize(); i++)
			CarElectricList[i].setIndex(i + 1);

	}
	if (n == 2) {
		for (int i = 0; i < CarLightList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarLightList.GetSize(); j++)
				if (strcmp(CarLightList[i].getModel(), CarLightList[j].getModel()) > 0)
					swap(CarLightList[i], CarLightList[j]);
		}

		for (int i = 0; i < CarLightList.GetSize(); i++)
			CarLightList[i].setIndex(i + 1);
	}
	if (n == 3) {
		for (int i = 0; i < CarHeavyList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarHeavyList.GetSize(); j++)
				if (strcmp(CarHeavyList[i].getModel(), CarHeavyList[j].getModel()) > 0)
					swap(CarHeavyList[i], CarHeavyList[j]);
		}

		for (int i = 0; i < CarHeavyList.GetSize(); i++)
			CarHeavyList[i].setIndex(i + 1);

	}
	if (n == 4) {
		for (int i = 0; i < CarMotoList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarMotoList.GetSize(); j++)
				if (strcmp(CarMotoList[i].getModel(), CarMotoList[j].getModel()) > 0)
					swap(CarMotoList[i], CarMotoList[j]);
		}

		for (int i = 0; i < CarMotoList.GetSize(); i++)
			CarMotoList[i].setIndex(i + 1);
	}
	
}

void  Menu::SortMarka(int n)
{

	if (n == 1) {
		for (int i = 0; i < CarElectricList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarElectricList.GetSize(); j++)
				if (strcmp(CarElectricList[i].getMarka(), CarElectricList[j].getMarka()) > 0)
					swap(CarElectricList[i], CarElectricList[j]);
		}

		for (int i = 0; i < CarElectricList.GetSize(); i++)
			CarElectricList[i].setIndex(i + 1);

	}
	if (n == 2) {
		for (int i = 0; i < CarLightList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarLightList.GetSize(); j++)
				if (strcmp(CarLightList[i].getMarka(), CarLightList[j].getMarka()) > 0)
					swap(CarLightList[i], CarLightList[j]);
		}

		for (int i = 0; i < CarLightList.GetSize(); i++)
			CarLightList[i].setIndex(i + 1);
	}
	if (n == 3) {
		for (int i = 0; i < CarHeavyList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarHeavyList.GetSize(); j++)
				if (strcmp(CarHeavyList[i].getMarka(), CarHeavyList[j].getMarka()) > 0)
					swap(CarHeavyList[i], CarHeavyList[j]);
		}

		for (int i = 0; i < CarHeavyList.GetSize(); i++)
			CarHeavyList[i].setIndex(i + 1);

	}
	if (n == 4) {
		for (int i = 0; i < CarMotoList.GetSize() - 1; i++)
		{
			for (int j = i; j < CarMotoList.GetSize(); j++)
				if (strcmp(CarMotoList[i].getMarka(), CarMotoList[j].getMarka()) > 0)
					swap(CarMotoList[i], CarMotoList[j]);
		}

		for (int i = 0; i < CarMotoList.GetSize(); i++)
			CarMotoList[i].setIndex(i + 1);
	}

}

void  Menu::SortSpeed(int n)
{

	if (n == 1) {

		for (int i = 0; i < CarElectricList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarElectricList.GetSize() - i - 1; j++)
			{
				if (CarElectricList[j].getSpeed() > CarElectricList[j + 1].getSpeed())
				{
					CarElectric temp;
					temp = CarElectricList[j];
					CarElectricList[j] = CarElectricList[j + 1];
					CarElectricList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarElectricList.GetSize(); i++)
			CarElectricList[i].setIndex(i + 1);
	}

	if (n == 2) {

		for (int i = 0; i < CarLightList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarLightList.GetSize() - i - 1; j++)
			{
				if (CarLightList[j].getSpeed() > CarLightList[j + 1].getSpeed())
				{
					CarLight temp;
					temp = CarLightList[j];
					CarLightList[j] = CarLightList[j + 1];
					CarLightList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarLightList.GetSize(); i++)
			CarLightList[i].setIndex(i + 1);
	}

	if (n == 3) {
		for (int i = 0; i < CarHeavyList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarHeavyList.GetSize() - i - 1; j++)
			{
				if (CarHeavyList[j].getSpeed() > CarHeavyList[j + 1].getSpeed())
				{
					CarHeavy temp;
					temp = CarHeavyList[j];
					CarHeavyList[j] = CarHeavyList[j + 1];
					CarHeavyList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarHeavyList.GetSize(); i++)
			CarHeavyList[i].setIndex(i + 1);
	}
	if (n == 4)
	{
		for (int i = 0; i < CarMotoList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarMotoList.GetSize() - i - 1; j++)
			{
				if (CarMotoList[j].getSpeed() > CarMotoList[j + 1].getSpeed())
				{
					CarMoto temp;
					temp = CarMotoList[j];
					CarMotoList[j] = CarMotoList[j + 1];
					CarMotoList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarMotoList.GetSize(); i++)
			CarMotoList[i].setIndex(i + 1);
	}

}

void  Menu::SortPrice(int n)
{
	if (n == 1) {

		for (int i = 0; i < CarElectricList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarElectricList.GetSize() - i - 1; j++)
			{
				if (CarElectricList[j].getPrice() > CarElectricList[j + 1].getPrice())
				{
					CarElectric temp;
					temp = CarElectricList[j];
					CarElectricList[j] = CarElectricList[j + 1];
					CarElectricList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarElectricList.GetSize(); i++)
			CarElectricList[i].setIndex(i + 1);
	}

	if (n == 2) {

		for (int i = 0; i < CarLightList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarLightList.GetSize() - i - 1; j++)
			{
				if (CarLightList[j].getPrice() > CarLightList[j + 1].getPrice())
				{
					CarLight temp;
					temp = CarLightList[j];
					CarLightList[j] = CarLightList[j + 1];
					CarLightList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarLightList.GetSize(); i++)
			CarLightList[i].setIndex(i + 1);
	}

	if (n == 3) {
		for (int i = 0; i < CarHeavyList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarHeavyList.GetSize() - i - 1; j++)
			{
				if (CarHeavyList[j].getPrice() > CarHeavyList[j + 1].getPrice())
				{
					CarHeavy temp;
					temp = CarHeavyList[j];
					CarHeavyList[j] = CarHeavyList[j + 1];
					CarHeavyList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarHeavyList.GetSize(); i++)
			CarHeavyList[i].setIndex(i + 1);
	}
	if (n == 4)
	{
		for (int i = 0; i < CarMotoList.GetSize() - 1; i++)
		{
			for (int j = 0; j < CarMotoList.GetSize() - i - 1; j++)
			{
				if (CarMotoList[j].getPrice() > CarMotoList[j + 1].getPrice())
				{
					CarMoto temp;
					temp = CarMotoList[j];
					CarMotoList[j] = CarMotoList[j + 1];
					CarMotoList[j + 1] = temp;
				}
			}
		}

		for (int i = 0; i < CarMotoList.GetSize(); i++)
			CarMotoList[i].setIndex(i + 1);
	}

}

void  Menu::SearchMenu()
{
	
	int ch69;
	do {
		do {
			system("cls");
			cout << "\n\n\n";
			cout << setw(5) << "1" << " - Поиск по ID" << endl;
			cout << setw(5) << "2" << " - Поиск по скорости (от - до)" << endl;
			cout << setw(5) << "3" << " - Поиск по по цене (от - до)" << endl;
			cout << setw(5) << "0" << " - Выход" << "\n\n";
			cout << setw(4) << "" << "Ваш выбор:";
		} while (CheckInt(ch69) != 0);

		if (ch69 == 0) break;

		system("cls");
		int ch90;
		cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl << endl;
		cout << setw(5) << "1" << " - Электро Иашины" << endl;
		cout << setw(5) << "2" << " - Лекговые Машины" << endl;
		cout << setw(5) << "3" << " - Грузовые Машины" << endl;
		cout << setw(5) << "4" << " - Мотоциклы " << endl;
		cout << endl;
		do {
			cout << setw(5) << "" << " - Ваш Выбор:";
		} while (CheckInt(ch90) != 0 && ch90 > 4);

		switch (ch69)
		{
		case 1: {
			SearchID(ch90);
		}break;
		case 2: {
			SearchSpeed(ch90);
		}break;
		case 3: {
			SearchPrice(ch90);
		}break;
		case 0: {break; }
		}
	} while (ch69 != 0);
}

void  Menu::SearchID(int n)
{
	int _ID;
	bool checked = false;

	do {
		system("cls");
		cout << "\n\n\n";
		cout << setw(5) << "" << "Вводите ID:";
	} while (CheckInt(_ID) != 0);
	
	if (n == 1) {
		for (int i = 0; i < CarElectricList.GetSize(); i++)
		{
			if (CarElectricList[i].getID() == _ID) {
				Show();
				cout << setw(5) << "|" << setw(7) << CarElectricList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarElectricList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarElectricList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarElectricList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarElectricList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarElectricList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarElectricList[i].getIndex() << setw(3) << "|" << endl;
				checked = true;
			}
		}
	}
	if (n == 2) {
		for (int i = 0; i < CarLightList.GetSize(); i++)
		{
			if (CarElectricList[i].getID() == _ID) {

				cout << setw(5) << "|" << setw(7) << CarLightList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarLightList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarLightList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarLightList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarLightList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarLightList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarLightList[i].getIndex() << setw(3) << "|" << endl;
				checked = true;
			}
		}
	}

	if (n == 3) {
		for (int i = 0; i < CarHeavyList.GetSize(); i++)
		{
			if (CarHeavyList[i].getID() == _ID) {

				cout << setw(5) << "|" << setw(7) << CarHeavyList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarHeavyList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarHeavyList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarHeavyList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarHeavyList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarHeavyList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarHeavyList[i].getIndex() << setw(3) << "|" << endl;
				checked = true;
			}
		}
	}
	if (n == 4) {
		for (int i = 0; i < CarMotoList.GetSize(); i++)
		{
			if (CarMotoList[i].getID() == _ID) {

				cout << setw(5) << "|" << setw(7) << CarMotoList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarMotoList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarMotoList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarMotoList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarMotoList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarMotoList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarMotoList[i].getIndex() << setw(3) << "|" << endl;
				checked = true;
			}
		}
	}

	if (checked == false) cout << setw(5) << "" << "Товары не найдены";
	
	else {
		cout << setw(5);
		for (int i = 0; i < 112; i++) cout << "-"; cout << endl;
	}
	system("pause > NUL");
}

void  Menu::SearchSpeed(int n)
{
	int from, to, size123 = 0, q = 0;
	do {
		system("cls");
		cout << "\n\n\n";
		cout << setw(5) << "" << "Вводите скорость 1 :";
	} while (CheckInt(from) != 0);

	do {
		system("cls");
		cout << "\n\n\n";
		cout << setw(5) << "" << "Вводите скорость 1 :" << from << endl;
		cout << setw(5) << "" << "Вводите скорость 2 :";
	} while (CheckInt(to) != 0);
	if (from < to) {
		cout << setw(5) << "Неверное число!"; system("pause > NUL");
	}

	
	if (n == 1) {
		Show();
		size123 = CarElectricList.GetSize();
		for (int i = 0; i < CarElectricList.GetSize(); i++)
		{
			if (CarElectricList[i].getSpeed() >= from && CarElectricList[i].getSpeed() <= to) {
		
				cout << setw(5) << "|" << setw(8) << CarElectricList[i].getID() << setw(6) << "|";
				cout << setw(10) << CarElectricList[i].getType() << setw(2) << "|";
				cout << setw(17) << CarElectricList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarElectricList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarElectricList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarElectricList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarElectricList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}
	}
	if (n == 2) {
		Show();
		size123 = CarLightList.GetSize();
		for (int i = 0; i < CarLightList.GetSize(); i++)
		{
			if (CarLightList[i].getSpeed() >= from && CarLightList[i].getSpeed() <= to) {

				cout << setw(5) << "|" << setw(8) << CarLightList[i].getID() << setw(6) << "|";
				cout << setw(10) << CarLightList[i].getType() << setw(2) << "|";
				cout << setw(17) << CarLightList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarLightList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarLightList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarLightList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarLightList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}
	}

	if (n == 3) {
		Show();
		size123 = CarHeavyList.GetSize();
		for (int i = 0; i < CarHeavyList.GetSize(); i++)
		{
			if (CarHeavyList[i].getSpeed() >= from && CarHeavyList[i].getSpeed() <= to) {

				cout << setw(5) << "|" << setw(8) << CarHeavyList[i].getID() << setw(6) << "|";
				cout << setw(10) << CarHeavyList[i].getType() << setw(2) << "|";
				cout << setw(17) << CarHeavyList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarHeavyList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarHeavyList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarHeavyList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarHeavyList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}
	}
	if (n == 4) {
		Show();
		size123 = CarMotoList.GetSize();
		for (int i = 0; i < CarMotoList.GetSize(); i++)
		{
			if (CarMotoList[i].getSpeed() >= from && CarMotoList[i].getSpeed() <= to) {

				cout << setw(5) << "|" << setw(8) << CarMotoList[i].getID() << setw(6) << "|";
				cout << setw(10) << CarMotoList[i].getType() << setw(2) << "|";
				cout << setw(17) << CarMotoList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarMotoList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarMotoList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarMotoList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarMotoList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}
	}





	if (q == 0) cout << setw(5) << "" << "\nТовары не найдены";
	else if (q == -2)
	{
		cout << setw(5);
		for (int i = 0; i < 115; i++) cout << "-"; cout << endl;
	};
	system("pause > NUL");
}

void  Menu::SearchPrice(int n)
{
	int from, to, size123 = 0, q = 0;
	system("cls");
	cout << setw(5) << "" << "Вводите цена 1 :";
	while (CheckInt(from) != 0);
	cout << setw(5) << "" << "Вводите цена 2 :";
	while (CheckInt(to) != 0);
	if (from < to ) {
		cout << setw(5) << "Неверное число!"; system("pause > NUL");
	}

	if (n == 1) {
		Show();
		size123 = CarElectricList.GetSize();
		for (int i = 0; i < CarElectricList.GetSize(); i++)
		{
			if (CarElectricList[i].getPrice() >= from && CarElectricList[i].getPrice() <= to) {
				cout << setw(5) << "|" << setw(7) << CarElectricList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarElectricList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarElectricList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarElectricList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarElectricList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarElectricList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarElectricList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}
	}
	if (n == 2) {
		Show();
		size123 = CarLightList.GetSize();
		for (int i = 0; i < CarLightList.GetSize(); i++)
		{
			if (CarLightList[i].getPrice() >= from && CarLightList[i].getPrice() <= to) {

				cout << setw(5) << "|" << setw(7) << CarLightList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarLightList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarLightList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarLightList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarLightList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarLightList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarLightList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}
	}

	if (n == 3) {
		Show();
		size123 = CarHeavyList.GetSize();
		for (int i = 0; i < CarHeavyList.GetSize(); i++)
		{
			if (CarHeavyList[i].getPrice() >= from && CarHeavyList[i].getPrice() <= to) {

				cout << setw(5) << "|" << setw(7) << CarHeavyList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarHeavyList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarHeavyList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarHeavyList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarHeavyList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarHeavyList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarHeavyList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}
	}
	if (n == 4) {
		Show();
		size123 = CarMotoList.GetSize();
		for (int i = 0; i < CarMotoList.GetSize(); i++)
		{
			if (CarMotoList[i].getPrice() >= from && CarMotoList[i].getPrice() <= to) {
				cout << setw(5) << "|" << setw(7) << CarMotoList[i].getID() << setw(5) << "|";
				cout << setw(14) << CarMotoList[i].getType() << setw(3) << "|";
				cout << setw(17) << CarMotoList[i].getMarka() << setw(4) << "|";
				cout << setw(16) << CarMotoList[i].getModel() << setw(5) << "|";
				cout << setw(12) << CarMotoList[i].getSpeed() << setw(2) << "|";
				cout << setw(14) << CarMotoList[i].getPrice() << setw(2) << "|";
				cout << setw(10) << CarMotoList[i].getIndex() << setw(3) << "|" << endl;
				q = -2;
			}
		}

	}

	cout << setw(5);

	if (q == -2) {
		for (int i = 0; i < 115; i++) cout << "-";
		cout << endl;
	}

	if (q == 0) cout << setw(5) << "" << "Товары не найдены";
	system("pause > NUL");
}

int  Menu::Sum()
{

	system("cls");
	int ch90;
	cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl;
	cout << setw(5) << "1" << " - Электро Иашины" << endl;
	cout << setw(5) << "2" << " - Лекговые Машины" << endl;
	cout << setw(5) << "3" << " - Грузовые Машины" << endl;
	cout << setw(5) << "4" << " - Мотоциклы " << endl;
	
	do {
		cout << setw(5) << "Ваш Выбор";
	} while (CheckInt(ch90) != 0 && ch90 > 4);
	int sumO = 0;
	if (ch90 == 1) {
		for (int i = 0; i < CarElectricList.GetSize(); i++)
			sumO += CarElectricList[i].getPrice();
	}
	if (ch90 == 2) {
		for (int i = 0; i < CarLightList.GetSize(); i++)
			sumO += CarLightList[i].getPrice();
	}
	if (ch90 == 3) {
		for (int i = 0; i < CarHeavyList.GetSize(); i++)
			sumO += CarHeavyList[i].getPrice();
	}
	if (ch90 == 4) {
		for (int i = 0; i < CarMotoList.GetSize(); i++)
			sumO += CarMotoList[i].getPrice();
	}
	system("cls");

	return sumO;
}

int  Menu::CheckInt(int& number)
{
	int tmp;
	if (!(cin >> tmp) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		ErrorNumberInput a(1);
		return 1;
	}
	else if (tmp < 0)
	{
		ErrorNumberInput a(2);
		return 1;
	}
	else if (tmp > 9999999)
	{
		ErrorNumberInput a(3);
		return 1;
	}
	number = tmp;
	return 0;
}

int  Menu::IfDoubleID(int _ID)
{
	int sizet = 0; 
	sizet = CarElectricList.GetSize();
	if (sizet == 0) return 0;
	for (int i = 0; i < sizet; i++)
	{
		if (CarElectricList[i].getID() == _ID)
		{
			cout << "Товар с такой же номером ID уже существует.Вводите другое ID" << endl;
			system("pause > NUL");
			return 1;
		}
	}

	sizet = CarLightList.GetSize();
	if (sizet == 0) return 0;
	for (int i = 0; i < sizet; i++)
	{
		if (CarElectricList[i].getID() == _ID)
		{
			cout << "Товар с такой же номером ID уже существует.Вводите другое ID" << endl;
			system("pause > NUL");
			return 1;
		}
	}
	sizet = CarHeavyList.GetSize();
	if (sizet == 0) return 0;
	for (int i = 0; i < sizet; i++)
	{
		if (CarElectricList[i].getID() == _ID)
		{
			cout << "Товар с такой же номером ID уже существует.Вводите другое ID" << endl;
			system("pause > NUL");
			return 1;
		}
	}
	sizet = CarMotoList.GetSize();
	if (sizet == 0) return 0;
	for (int i = 0; i < sizet; i++)
	{
		if (CarElectricList[i].getID() == _ID)
		{
			cout << "Товар с такой же номером ID уже существует.Вводите другое ID" << endl;
			system("pause > NUL");
			return 1;
		}
	}



	return 0;
}

void  Menu::Show()
{
	for (int i = 0; i < 3; i++) cout << endl;
	cout << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;
	cout << setw(5) << "|" << setw(5) << "" << "ID" << setw(5) << "|" << setw(11) << "Тип" << setw(6) << "|" << setw(8) << "" << "Марка" << setw(8) << "|" << setw(8) << "" << "Модел";
	cout << setw(8) << "|" << setw(3) << "" << "Скорость" << setw(3) << "|";
	cout << setw(6) << "" << "Цена" << setw(6) << "|" << setw(4) << "" << "index" << setw(4) << "|" << endl << setw(5);
	for (int i = 0; i < 115; i++) cout << "-";
	cout << endl;


}

void  Menu::Show2()
{
	for (int i = 0; i < 3; i++) cout << endl;
	cout << setw(5);
	for (int i = 0; i < 58; i++) cout << "-";
	cout << endl;
	cout << setw(5) << "|" << setw(4) << "ID" << setw(3) << "|" << setw(8) << "Марка" << setw(5) << "|" << setw(8) << "Модел";
	cout << setw(5) << "|" << setw(10) << "Скорость" << setw(2) << "|";
	cout << setw(8) << "Цена" << setw(4) << "|" << endl << setw(5);
	for (int i = 0; i < 58; i++) cout << "-";
	cout << endl;
}

int  Menu::SumOfZakaz()
{
	int tmp = 0, tmpID;
	system("cls");
	int n;
	cout << "\n\n\n" << setw(5) << "" << "Выберите пожалуйста вид" << endl << endl;
	cout << setw(5) << "1" << " - Электро Иашины" << endl;
	cout << setw(5) << "2" << " - Лекговые Машины" << endl;
	cout << setw(5) << "3" << " - Грузовые Машины" << endl;
	cout << setw(5) << "4" << " - Мотоциклы " << endl;
	cout << setw(5) << "5" << " - Общая сумма" << endl;
	cout << setw(5) << "0" << " - Выход" << endl << endl;

	do {
		cout << setw(5) << "" << "Ваш Выбор:";
	} while (CheckInt(n) != 0 && n > 4);

	if(n == 1)
	{
		for (int i = 0; i < CarElectricList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarElectricList.GetSize(); j++)
			{
				if (CarElectricList[j].getID() == tmpID)
				{
					tmp += CarElectricList[j].getPrice();
				}
			}
		}
	}
	if (n == 2)
	{
		for (int i = 0; i < CarLightList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarLightList.GetSize(); j++)
			{
				if (CarLightList[j].getID() == tmpID)
				{
					tmp += CarLightList[j].getPrice();
				}
			}
		}
	}
	if (n == 3)
	{
		for (int i = 0; i < CarHeavyList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarHeavyList.GetSize(); j++)
			{
				if (CarHeavyList[j].getID() == tmpID)
				{
					tmp += CarHeavyList[j].getPrice();
				}
			}
		}

	}
	if (n == 4)
	{
		for (int i = 0; i < CarMotoList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarMotoList.GetSize(); j++)
			{
				if (CarMotoList[j].getID() == tmpID)
				{
					tmp += CarMotoList[j].getPrice();
				}
			}
		}
	}

	if (n == 5) {
		for (int i = 0; i < CarMotoList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarMotoList.GetSize(); j++)
			{
				if (CarMotoList[j].getID() == tmpID)
				{
					tmp += CarMotoList[j].getPrice();
				}
			}
		}
		for (int i = 0; i < CarMotoList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarMotoList.GetSize(); j++)
			{
				if (CarMotoList[j].getID() == tmpID)
				{
					tmp += CarMotoList[j].getPrice();
				}
			}
		}
		for (int i = 0; i < CarElectricList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarElectricList.GetSize(); j++)
			{
				if (CarElectricList[j].getID() == tmpID)
				{
					tmp += CarElectricList[j].getPrice();
				}
			}
		}
		for (int i = 0; i < CarLightList.GetSize(); i++)
		{
			tmpID = KlientList[i].getTovarId();
			for (int j = 0; j < CarLightList.GetSize(); j++)
			{
				if (CarLightList[j].getID() == tmpID)
				{
					tmp += CarLightList[j].getPrice();
				}
			}
		}
	}
	return tmp;
}

int Menu::CheckChar(char obj[])
{
	string input = obj;
	int sizeChar = input.length();
	if (sizeChar < 3)
	{
		ErrorCharInput a(3);
		return 1;
	}
	else if (sizeChar > 20)
	{
		ErrorCharInput a(2);
		return 1;
	};
	for (int i = 0; i < sizeChar; i++)
	{
		if (input[i] < 'A' || input[i] > 'Z')
		{
			if (input[i] < 'a' || input[i] > 'z')
			{
				ErrorCharInput a(1);
				return 1;
			}
		}
	}
	return 0;
}