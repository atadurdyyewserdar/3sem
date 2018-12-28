#include "Admin.h"
#include <iostream>
using namespace std;

int Admin::adminSafety(char * _log, char * _pass)
{
	if ((strcmp(Login, _log) != 0) || (strcmp(password, _pass) != 0))
	{
		system("cls");
		cout << "Данные не верный!";
		system("pause > NUL");
		return 1;
	}
	return 0;
}
