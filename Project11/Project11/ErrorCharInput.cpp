#include "ErrorCharInput.h"
#include <iostream>
#include <iomanip>
using namespace std;


ErrorCharInput::ErrorCharInput()
{

}


void ErrorCharInput::ErrorInfo()
{
	switch (error)
	{
	case 1: {
		cout << setw(5) << "" << "Полья дольжен содержать буквы" << endl;
		system("pause > NUL");
	}break;
	case 2: {
		cout << setw(5) << "" << "Полья дольжен содержать  менше чем 20 букв" << endl;
		system("pause > NUL");
	}break;
	case 3: {
		cout << setw(5) << "" << "Полья дольжен содержать больше чем 3 буквы" << endl;
		system("pause > NUL");
	}break;
	}
}

ErrorCharInput::~ErrorCharInput()
{
}
