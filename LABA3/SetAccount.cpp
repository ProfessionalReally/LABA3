#include "SetAccount.h"

SetAccount::SetAccount() //Конструктор
{
	 name = ""; //Имя
	 surname = ""; //Фамилия
	 email = ""; //Почта
	 password = ""; //Пароль
}

// Функции получения данных из полей
string SetAccount::Getname()
{
	return this->name;
}
string SetAccount::Getsurname()
{
	return this->surname;
}
string SetAccount::Getemail()
{
	return this->email;
}
string SetAccount::Getpassword()
{
	return this->password;
}

void SetAccount::InitAccount(string NAME, string SURNAME, string EMAIL, string PASSWORD) //Инициализация аккаунта
{
	this->name = NAME;
	this->surname = SURNAME;
	this->email = EMAIL;
	this->password = PASSWORD;
}

void SetAccount::InputAccount() //Изменение данных о аккаунте
{
	printf_s("\nPlease enter a name: ");
	cin >> name;
	printf_s("\nPlease enter a surname: ");
	cin >> surname;
	printf_s("\nPlease enter a email: ");
	cin >> email;
	printf_s("\nPlease enter a password: ");
	cin >> password;
}

void SetAccount::OutputAccount() //Вывод данных о аккаунте
{
	if ((name[0] == 0) && (surname[0] == 0) && (email[0] == 0) && (password[0] == 0))
	{
		printf_s("\nName: empty");
		printf_s("\nSurname: empty");
		printf_s("\nEmail: empty");
		printf_s("\nPassword: empty");
	}
	else
	{
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Email: " << email << endl;
		cout << "Password: " << password << endl;
	}
	printf_s("\n");
}

SetAccount::~SetAccount() //Деструктор
{
	;
}