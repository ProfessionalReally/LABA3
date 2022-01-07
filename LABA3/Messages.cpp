#include "Messages.h"

Messages::Messages() //�����������
{
	toWhom = ""; //���� ���������
	fromWhom = ""; //�� ���� ���������
	message = ""; //����� ���������
}

// ������� ��������� ������ �� �����

string Messages::GettoWhom()
{
	return this->toWhom;
}

string Messages::GetfromWhom()
{
	return this->fromWhom;
}

string Messages::Getmessage()
{
	return this->message;
}

void Messages::InitMessages(string TOWHOM ,string FROMWHOM, string MESSAGE) //������������� ���������
{
	this->toWhom = TOWHOM;
	this->fromWhom = FROMWHOM;
	this->message = MESSAGE;
}

void Messages::InputMessages() //��������� ������ � ���������
{
	printf_s("Please enter a to whom the message: ");
	cin >> toWhom;
	printf_s("Please enter a from whom the message: ");
	cin >> fromWhom;
	printf_s("Please enter a message: ");
	cin >> message;
}

void Messages::OutputMessages() //����� ������ � ���������
{
	if ((toWhom[0] == 0) && (fromWhom[0] == 0) && (message[0] == 0))
	{
		printf_s("To whom the message: Empty\n");
		printf_s("From whom the message: Empty\n");
		printf_s("Message: Empty\n");
	}
	else
	{
		cout << "To whom the message: " << toWhom << endl;
		cout << "From whom the message: " << fromWhom << endl;
		cout << "Message: " << message << endl;
	}
	printf_s("\n");
}

void Messages::DeleteMessages() //�������� ������ � ���������
{
	this->toWhom = "";
	this->fromWhom = "";
	this->message = "";
}

Messages::~Messages() //����������
{
	;
}