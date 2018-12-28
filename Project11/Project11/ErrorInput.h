#pragma once
class ErrorInput
{
protected:
	// варианть ошибки
	int error;
public:
	// конструктор
	ErrorInput();
	// конструктор с параметорм
	ErrorInput(int n);
	// виртуалная функция
	virtual void ErrorInfo() = 0;
	// деструктор
	~ErrorInput();
};

