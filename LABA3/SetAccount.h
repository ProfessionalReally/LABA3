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
	string name = ""; //���
	string surname = ""; //�������
	string email = ""; //�����
	string password = ""; //������
public:
	SetAccount(); //�����������

	// ������� ��������� ������ �� �����
	string Getname();
	string Getsurname();
	string Getemail();
	string Getpassword();

	~SetAccount(); //����������

	void InitAccount(string NAME, string SURNAME, string EMAIL, string PASSWORD); //������������� ��������

	void InputAccount(); //��������� ������ � ��������

	void OutputAccount(); //����� ������ � ��������

	void DeleteAccount(); //�������� ������ � ��������
};


