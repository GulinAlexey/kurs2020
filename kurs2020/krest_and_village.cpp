#include "stdafx.h"
#include <string>

using namespace std;

class Krest //����� �����������
{
private:
	string name; //���
	string surname; //�������
	int proizv_hleb; //���-�� ������������� ����� �� ��� �����������
	int proizv_skot; //���-�� ������������� ��������� ����� �� ��� ����������� 
	int eda_hleb; //�������������: ���� 
	int eda_skot; //�������������: �������� ���� 
	int money_trat; //�������� ������� �� ���� ��� ����������� 
	int naim; //��������� ����� � ������ 
	int otschet_hours_net_edi; //������ ������� � ����� ����������� � �������, ����� ����������� ��� ��� ����� �����������
public:
	Krest() //����������� ��� ����������
	{
	}

	//��������� � ������������ ��������������� �����
	void set_name(string in)
	{
		this->name=in;
	}
	string get_name()
	{
		return name;
	}
	/////
	void set_surname(string in)
	{
		this->surname=in;
	}
	string get_surname()
	{
		return surname;
	}
	/////
	void set_proizv_hleb(int in)
	{
		this->proizv_hleb=in;
	}
	int get_proizv_hleb()
	{
		return proizv_hleb;
	}
	/////
	void set_proizv_skot(int in)
	{
		this->proizv_skot=in;
	}
	int get_proizv_skot()
	{
		return proizv_skot;
	}
	/////
	void set_eda_hleb(int in)
	{
		this->eda_hleb=in;
	}
	int get_eda_hleb()
	{
		return eda_hleb;
	}
	/////
	void set_eda_skot(int in)
	{
		this->eda_skot=in;
	}
	int get_eda_skot()
	{
		return eda_skot;
	}
	/////
	void set_money_trat(int in)
	{
		this->money_trat=in;
	}
	int get_money_trat()
	{
		return money_trat;
	}
	/////
	void set_naim(int in)
	{
		this->naim=in;
	}
	int get_naim()
	{
		return naim;
	}
	/////
	void set_otschet_hours_net_edi(int in)
	{
		this->otschet_hours_net_edi=in;
	}
	int get_otschet_hours_net_edi()
	{
		return otschet_hours_net_edi;
	}
};

class Village //����� �������
{
private:
	int kolvo_krest; //���-�� �������� � ������� 
	int hours_procv; //���-�� ����� ����������� � ������� ������ ���� 
	int days_procv; //���-�� ���� ����������� � ������� ������ ���� (� ��������� ����)
	int speed_life; //������� ��������� ��������� �����
	int flag_season; //���� �������� ������ (����� ���� �����, ����� ������� �����)
	int kolvo_hleb; //����� ���-�� ����� � ������� 
	int kolvo_skot; //����� ���-�� ����� ��������� ����� � ������� 
	int budget_village; //������ ������� � ������ 
	int hours_from_begin_of_season; //���-�� ����� ����������� � ������, ����� ������� ����� ���� ������ �������� 
	int otschet_hours_net_krest; //������ ������� � ����� ����������� � �������, ����� ���� ��� ��������� 
	int price_hleb; //������� ���� �� ��. ����� �� �������� ����� � ������ 
	int price_skot; //������� ���� �� ���� ������ ��������� ����� �� �������� ����� � ������ 
	Krest* krests; //���������
public:
	Village() //����������� ��� ����������
	{
	}
};