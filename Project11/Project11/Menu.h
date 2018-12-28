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
	// ������ ��������
	ArrayList<Klient>KlientList;
	// ������ �������
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


	// ������� ��� ������� ���� ���������
	void ShowMenu();
	// ���� ��� ������
	void ShowKlientMenu();
	// ���� ��� ������
	void ShowAdminMenu();
	// ����� ������� ������� �������� �����
	void ShowKlients();
	// ����� �������
	void ShowTovar();
	// ���������� ������
	void AddTovar();
	//������� ��� ���������� �������
	void BuyTovar();
	//������� ��� ������ � �����
	void ReadKlientsFromFile();
	//������� ��� ������ � �����
	void ReadTovarFromFile();
	// ���������� ������ ��������
	void SaveKlientsToFile();
	// ���������� �������
	void SaveTovarToFile();
	// �������� �������
	void DeleteTovarMenu();
	// �������� ��������
	void DeleteKlientMenu();
	//�������������� ������
	void EditMenu();
	// ���� ����������
	void SortMenu();
	//������� ��� ����������
	void SortID(int);
	void SortModel(int);
	void SortMarka(int);
	void SortSpeed(int);
	void SortPrice(int);
	// ���� ������
	void SearchMenu();
	// ������� ��� ����� ������
	void SearchID(int);
	void SearchSpeed(int);
	void SearchPrice(int);
	// ������� ��� ���������� ����� ���� �������
	int Sum();
	// ������� ��� �������� ����������� �����
	int CheckInt(int&);
	int CheckChar(char obj[]);
	// ������� ��� �������� �� 
	int IfDoubleID(int);
	// �����
	void Show();
	// �����2
	void Show2();
	int SumOfZakaz();

};
