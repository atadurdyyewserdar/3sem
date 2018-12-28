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
		cout << setw(4) << "" << "Вводите только цифры!" << endl;
		system("pause > NUL");
	}break;
	case 2:
	{
		cout << setw(4) << "" << "Число не можеть быт отрицательным!" << endl;
		system("pause > NUL");
	}break;
	case 3: {
		cout << setw(4) << "" << "Слишком большое число" << endl;
		system("pause > NUL");
	}break;
	default:
		break;
	}
}
ErrorNumberInput::~ErrorNumberInput()
{
}
