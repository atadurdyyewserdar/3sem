#pragma once
class ErrorInput
{
protected:
	// �������� ������
	int error;
public:
	// �����������
	ErrorInput();
	// ����������� � ����������
	ErrorInput(int n);
	// ���������� �������
	virtual void ErrorInfo() = 0;
	// ����������
	~ErrorInput();
};

