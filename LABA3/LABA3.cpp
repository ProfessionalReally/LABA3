#include "SetAccount.h"
#include "Figure.h"
#include "Friends.h"
#include "Music.h"
#include "Exit.h"
#include "string"
#include "Windows.h"
int menu()
{
	int i;
	system("cls");
	printf_s("  1) SetAccount\n  2) Figure\n  3) Friends\n  4) Music\n  5) Exit and Delete\n  0) Exit the program\n\n  Choose: ");
	scanf_s("%d", &i);
	return i;
}

int main()
{
	//SetAccount
	string nameA = "Anton"; //Имя
	string surnameA = "Petrov"; //Фамилия
	string emailA = "Petrov22@gmail.com"; //Почта
	string passwordA = "111222333"; //Пароль
	SetAccount* User = new SetAccount;
	//Figure
	int figure = 2;
	int color = 1;
	Figure* View = new Figure;
	//Friends
	string nameF = "Ivan";
	string surnameF = "Ivanov";
	Friends* Human = new Friends[2];
	//Music
	string title = "Kukushka"; //Название
	string executor = "Choi"; //Исполнитель
	Music LikeMAS[2];
	Music* Like1 = new Music;
	Music* Like2 = new Music;
	LikeMAS[0] = *Like1;
	LikeMAS[1] = *Like2;

	int g = 0; //Флаг
	int f = 1; //Флаг
	int n; //Для выбора действий
	int l; //Для выбора действий

	do
	{
		switch (menu())
		{
		case 0:
		{
			f = 0;
			break;
		}
		case 1: //Создание аккаунта и вход
		{
			do
			{
				system("cls");
				printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  0 - Exit\n\n  Choose: ");
				scanf_s("%d", &n);
				if (n == 1)
				{
					(*User).InitAccount(nameA, surnameA, emailA, passwordA);
					g = 1;
				}
				if (n == 2)
				{
					(*User).InputAccount();
					g = 1;
				}
				if (n == 3)
				{
					(*User).OutputAccount();
					system("pause");
				}
			} while (n != 0);
			break;
		}
		case 2: //Фигуры
		{
			if (g) {
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						View->InitFigure(figure, color);
					}
					if (n == 2)
					{
						View->InputFigure();
					}
					if (n == 3)
					{
						View->OutputFigure();
						system("pause");
					}
					if (n == 4)
					{
						View->DeleteFigure();
						system("cls");
						printf_s("\n DELETED!!!\n\n");
						system("pause");
					}
				} while (n != 0);
			}
			break;
		}
		case 3: //Друзья
		{
			if (g)
			{
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						do
						{
						printf_s("\nEnter your friend's number (1 - first, 2 - second): ");
						scanf_s("%d", &l);
						} while ((l < 1) || (l > 2));
						Human[l-1].InitFriends(nameF, surnameF);
					}
					if (n == 2)
					{
						do
						{
						printf_s("\nEnter your friend's number (1 - first, 2 - second): ");
						scanf_s("%d", &l);
						} while ((l < 1) || (l > 2));
						Human[l-1].InputFriends();
					}
					if (n == 3)
					{
						for (int i = 0; i < 2; i++) 
						{
							Human[i].OutputFriends();
						}
						system("pause");
					}
					if (n == 4)
					{
						do 
						{
							printf_s("\nEnter your friend's number (1 - first, 2 - second): ");
							scanf_s("%d", &l);
						} while ((l < 1) || (l > 2));
						Human[l-1].DeleteFriends();
						system("cls");
						printf_s("\n DELETED!!!\n\n");
						system("pause");
					}
				} while (n != 0);
			}
			break;
		}
		case 4: //Музыка
		{
			if (g) {
				do
				{
					system("cls");
					printf_s("\n  1 - Initialization\n  2 - Input\n  3 - Output\n  4 - Delete\n  0 - Exit\n\n  Choose: ");
					scanf_s("%d", &n);
					if (n == 1)
					{
						do 
						{
							printf_s("\nEnter your music number (1 - first, 2 - second): ");
							scanf_s("%d", &l);
						} while ((l < 1) || (l > 2));
						LikeMAS[l-1].MUSICinit(executor, title);
					}
					if (n == 2)
					{
						do
						{
						printf_s("\nEnter your music number (1 - first, 2 - second): ");
						scanf_s("%d", &l);
						} while ((l < 1) || (l > 2));
						LikeMAS[l-1].MUSICinput();
					}
					if (n == 3)
					{
						for (int i = 0; i < 2; i++)
						{
							LikeMAS[i].OutputMusic();
						}
						system("pause");
					}
					if (n == 4)
					{
						do
						{
						printf_s("\nEnter your music number (1 - first, 2 - second): ");
						scanf_s("%d", &l);
						} while ((l < 1) || (l > 2));
						LikeMAS[l-1].DeleteMusic();
						system("cls");
						printf_s("\n DELETED!!!\n\n");
						system("pause");
					}
				} while (n != 0);
			}
			break;
		}
		case 5: //Удаление и выход из аккаунта
		{
			do
			{
				system("cls");
				printf_s("\n  1 - Delete and Exit\n  0 - Exit\n\n  Choose: ");
				scanf_s("%d", &n);
				if (n == 1)
				{
					(*User).DeleteAccount();
					View->DeleteFigure();
					for (int i = 0; i < 2; i++)
					{
						Human[i].DeleteFriends();
						LikeMAS[i].DeleteMusic();
					}
					system("cls");
					printf_s("\n DELETED!!!\n\n");
					system("pause");
					g = 0;
				}
			} while (n != 0);
			break;
		}
		}
	} while (f);
	delete User;
	delete View;
	delete Like1;
	delete Like2;
	delete[] Human;
}
