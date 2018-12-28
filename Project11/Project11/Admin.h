#pragma once
class Admin {
private:
	// логин админа
	char Login[6] = { "admin" };
	// парол админа
	char password[6] = { "admin" };
public:
	// коструктор
	Admin() {}
	// деструктор
	~Admin() {}
	// Функция для проверка пароля и логина
	int adminSafety(char* _log, char* _pass);
};