#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>


using namespace std;
class Account
{
private:
	//ACCOUNT
	string name = ""; //Имя
	string surname = ""; //Фамилия
	string email = ""; //Почта
	string password = ""; //Пароль
public:
	//FIGURE
	int FigureFigure = 0; //Фигура
	int FigureColor = 0; //Цвет
	//FRIENDS
	string FriendsName[2]; //Имя
	string FriendsSurname[2]; //Фамилия
	//MUSIC
	string MusicTitle[2]; //Название
	string MusicExecutor[2]; //Исполнитель
	//MESSAGES
	string MessagestoWhom = ""; //Кому сообщение
	string MessagesfromWhom = ""; //От кого сообщение
	string Messagesmessage = ""; //Текст сообщения

	Account(); //Конструктор

	// Функции получения данных из полей
	string Getname();
	string Getsurname();
	string Getemail();
	string Getpassword();

	~Account(); //Деструктор

	void InitAccount(string NAME, string SURNAME, string EMAIL, string PASSWORD); //Инициализация аккаунта

	void InputAccount(); //Изменение данных о аккаунте

	void OutputAccount(); //Вывод данных о аккаунте

	void DeleteAccount(); //Удаление данных о аккаунта


};


