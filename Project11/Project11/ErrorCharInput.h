#pragma once
#include "ErrorInput.h"
class ErrorCharInput :
	virtual public ErrorInput
{
public:
	// �����������
	ErrorCharInput();
	// ����������� � ����������
	ErrorCharInput(int n) :ErrorInput(n) {
		ErrorInfo();
	}
	// ������� ��� ����������� ������
	void ErrorInfo();
	// ����������
	~ErrorCharInput();
};

