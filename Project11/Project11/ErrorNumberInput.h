#pragma once
#include "ErrorInput.h"
class ErrorNumberInput :
	virtual public ErrorInput
{
public:
	// �����������
	ErrorNumberInput();
	// ����������� � ����������
	ErrorNumberInput(int n) :ErrorInput(n) {
		ErrorInfo();
	}
	// ������� ��� ����������� ������
	void ErrorInfo();
	// ����������
	~ErrorNumberInput();
};
