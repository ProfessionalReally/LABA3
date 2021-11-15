#include "Exit.h"

Exit::Exit() //Конструктор
{
	null = "";
	noll = 0;
}

// Функции получения данных из полей
string Exit::Getnull()
{
	return this->null;
}

int Exit::Getnoll()
{
	return this->noll;
}

void SetAccount::DeleteAccount() //Удаление аккаунта
{
		Exit ex;
		string null;
		null = ex.Getnull();
		this->name = null;
		this->surname = null;
		this->email = null;
		this->password = null;
}

void Figure::DeleteFigure() //Удаление фигуры
{
	Exit ex;
	int noll;
	noll = ex.Getnoll();
	this->figure = noll;
	this->color = noll;
}

void Friends::DeleteFriends() //Удаление друзей
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->name = null;
	this->surname = null;
}

void Music::DeleteMusic() //Удаление музыки
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->title = null;
	this->executor = null;
}

Exit::~Exit() //Деструктор
{
	;
}
