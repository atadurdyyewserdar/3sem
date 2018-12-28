#pragma once
#include "ErrorInput.h"
class ErrorCharInput :
	virtual public ErrorInput
{
public:
	// конструктор
	ErrorCharInput();
	// конструктор с параметорм
	ErrorCharInput(int n) :ErrorInput(n) {
		ErrorInfo();
	}
	// функция для определение ошибки
	void ErrorInfo();
	// деструктор
	~ErrorCharInput();
};

