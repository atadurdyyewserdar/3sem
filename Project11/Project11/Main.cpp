#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Menu.h"


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitle(TEXT("�������������� ������� �������������� ��������."));
	Menu gg;
	gg.ShowMenu();
};