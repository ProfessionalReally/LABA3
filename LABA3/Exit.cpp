#include "Exit.h"

Exit::Exit() //�����������
{
	null = "";
	noll = 0;
}

// ������� ��������� ������ �� �����
string Exit::Getnull()
{
	return this->null;
}

int Exit::Getnoll()
{
	return this->noll;
}

void SetAccount::DeleteAccount() //�������� ��������
{
		Exit ex;
		string null;
		null = ex.Getnull();
		this->name = null;
		this->surname = null;
		this->email = null;
		this->password = null;
}

void Figure::DeleteFigure() //�������� ������
{
	Exit ex;
	int noll;
	noll = ex.Getnoll();
	this->figure = noll;
	this->color = noll;
}

void Friends::DeleteFriends() //�������� ������
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->name = null;
	this->surname = null;
}

void Music::DeleteMusic() //�������� ������
{
	Exit ex;
	string null;
	null = ex.Getnull();
	this->title = null;
	this->executor = null;
}

Exit::~Exit() //����������
{
	;
}
