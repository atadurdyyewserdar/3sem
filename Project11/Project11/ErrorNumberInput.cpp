#include "ErrorNumberInput.h"
#include <iostream>
#include <iomanip>
using namespace std;


ErrorNumberInput::ErrorNumberInput()
{

}
void ErrorNumberInput::ErrorInfo()
{
	switch (error)
	{
	case 1: {
		cout << setw(4) << "" << "������� ������ �����!" << endl;
		system("pause > NUL");
	}break;
	case 2:
	{
		cout << setw(4) << "" << "����� �� ������ ��� �������������!" << endl;
		system("pause > NUL");
	}break;
	case 3: {
		cout << setw(4) << "" << "������� ������� �����" << endl;
		system("pause > NUL");
	}break;
	default:
		break;
	}
}
ErrorNumberInput::~ErrorNumberInput()
{
}
