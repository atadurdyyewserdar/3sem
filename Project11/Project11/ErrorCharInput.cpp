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
		cout << setw(5) << "" << "����� ������� ��������� �����" << endl;
		system("pause > NUL");
	}break;
	case 2: {
		cout << setw(5) << "" << "����� ������� ���������  ����� ��� 20 ����" << endl;
		system("pause > NUL");
	}break;
	case 3: {
		cout << setw(5) << "" << "����� ������� ��������� ������ ��� 3 �����" << endl;
		system("pause > NUL");
	}break;
	}
}

ErrorCharInput::~ErrorCharInput()
{
}
