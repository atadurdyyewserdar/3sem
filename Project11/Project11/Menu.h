#pragma once
#include "ArrayList.h"
#include "File.h"
#include"Klient.h"
#include "Admin.h"
#include "Car.h"
#include "CarElectric.h"
#include "CarHeavy.h"
#include "CarLight.h"
#include "CarMoto.h"
#include "ErrorNumberInput.h"
#include "ErrorCharInput.h"

class Menu {
private:
	// список Клиентов
	ArrayList<Klient>KlientList;
	// список товаров
	ArrayList<CarElectric> CarElectricList;
	ArrayList<CarMoto>CarMotoList;
	ArrayList<CarHeavy>CarHeavyList;
	ArrayList<CarLight>CarLightList;

	File<Klient>obj;

	File<CarElectric>CarElectricListFromFile;
	File<CarLight>CarLightListFromFile;
	File<CarMoto>CarMotoListFromFile;
	File<CarHeavy>CarHeavyFromFile;
	Klient klient1;
	Admin admin;
	int NumOfBuyers;

public:

	void ShowCarElectric();
	void ShowCarLight();
	void ShowCarHeavy();
	void ShowCarMoto();


	// функция для главной меню программы
	void ShowMenu();
	// меню для клинта
	void ShowKlientMenu();
	// меню для админа
	void ShowAdminMenu();
	// вывод клинтов который заказали товар
	void ShowKlients();
	// вывод товаров
	void ShowTovar();
	// Добавление товара
	void AddTovar();
	//функция для совершении покупки
	void BuyTovar();
	//функция для чтении с файла
	void ReadKlientsFromFile();
	//функция для чтении с файла
	void ReadTovarFromFile();
	// сохранение данных клиентов
	void SaveKlientsToFile();
	// сохранение товаров
	void SaveTovarToFile();
	// удаление товаров
	void DeleteTovarMenu();
	// удаление клиентов
	void DeleteKlientMenu();
	//Редактирование данных
	void EditMenu();
	// меню сортировки
	void SortMenu();
	//функции для сортировки
	void SortID(int);
	void SortModel(int);
	void SortMarka(int);
	void SortSpeed(int);
	void SortPrice(int);
	// меню поиска
	void SearchMenu();
	// функции для поика данных
	void SearchID(int);
	void SearchSpeed(int);
	void SearchPrice(int);
	// функция для вычисление суммы всех товаров
	int Sum();
	// функции для проверки безопасного ввода
	int CheckInt(int&);
	int CheckChar(char obj[]);
	// функция для проверки ИД 
	int IfDoubleID(int);
	// вывод
	void Show();
	// вывод2
	void Show2();
	int SumOfZakaz();

};
