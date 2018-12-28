#pragma once
#include "ErrorInput.h"
class ErrorNumberInput :
	virtual public ErrorInput
{
public:
	// конструктор
	ErrorNumberInput();
	// конструктор с параметорм
	ErrorNumberInput(int n) :ErrorInput(n) {
		ErrorInfo();
	}
	// функция для определение ошибки
	void ErrorInfo();
	// деструктор
	~ErrorNumberInput();
};
