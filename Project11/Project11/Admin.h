#pragma once
class Admin {
private:
	// ����� ������
	char Login[6] = { "admin" };
	// ����� ������
	char password[6] = { "admin" };
public:
	// ����������
	Admin() {}
	// ����������
	~Admin() {}
	// ������� ��� �������� ������ � ������
	int adminSafety(char* _log, char* _pass);
};