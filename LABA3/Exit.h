#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include "SetAccount.h"
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
using namespace std;
class Exit
{
private:
	string null = "";
	int noll = 0;
public:

	Exit(); //Конструктор

	~Exit(); //Деструктор

	// Функции получения данных из полей
	string Getnull();
	int Getnoll();

};


