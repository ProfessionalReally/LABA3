#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>

using namespace std;
class SetAccount
{
private:
	string name = ""; //Имя
	string surname = ""; //Фамилия
	string email = ""; //Почта
	string password = ""; //Пароль
public:
	SetAccount(); //Конструктор

	// Функции получения данных из полей
	string Getname();
	string Getsurname();
	string Getemail();
	string Getpassword();

	~SetAccount(); //Деструктор

	void InitAccount(string NAME, string SURNAME, string EMAIL, string PASSWORD); //Инициализация аккаунта

	void InputAccount(); //Изменение данных о аккаунте

	void OutputAccount(); //Вывод данных о аккаунте

	void DeleteAccount(); //Удаление данных о аккаунта
};


