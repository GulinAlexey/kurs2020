#include "stdafx.h"
#include <string>

using namespace std;

public class Krest //����� �����������
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

	void Init_rand() //������������� ����� �������� (� ������������� ���������) ��� ����� ��������
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

public class Village //����� �������
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
		kolvo_krest=0;
		hours_procv=0;
		days_procv=0;
		speed_life=0;
		flag_season=0;
		kolvo_hleb=0;
		kolvo_skot=0;
		budget_village=0;
		hours_from_begin_of_season=0;
		otschet_hours_net_krest=0;
		price_hleb=0;
		price_skot=0;
		krests=0;
	}

	void Init_new_game() //������������� ��� ������ ����� ����
	{
		kolvo_krest=3;
		hours_procv=1;
		days_procv=0;
		speed_life=1;
		flag_season=0;
		kolvo_hleb=200;
		kolvo_skot=20;
		budget_village=1000;
		hours_from_begin_of_season=0;
		otschet_hours_net_krest=0;
		price_hleb=30;
		price_skot=200;
		krests = new Krest [3];
		for(int i=0; i<3; i++)
		{
			krests[i].Init_rand();
		}
	}

	//��������� � ������������ ��������������� �����
	void set_kolvo_krest(int in)
	{
		this->kolvo_krest=in;
	}
	int get_kolvo_krest()
	{
		return kolvo_krest;
	}
	/////
	void set_hours_procv(int in)
	{
		this->hours_procv=in;
	}
	int get_hours_procv()
	{
		return hours_procv;
	}
	/////
	void set_days_procv(int in)
	{
		this->days_procv=in;
	}
	int get_days_procv()
	{
		return days_procv;
	}
	/////
	void set_speed_life(int in)
	{
		this->speed_life=in;
	}
	int get_speed_life()
	{
		return speed_life;
	}
	/////
	void set_flag_season(int in)
	{
		this->flag_season=in;
	}
	int get_flag_season()
	{
		return flag_season;
	}
	/////
	void set_kolvo_hleb(int in)
	{
		this->kolvo_hleb=in;
	}
	int get_kolvo_hleb()
	{
		return kolvo_hleb;
	}
	/////
	void set_kolvo_skot(int in)
	{
		this->kolvo_skot=in;
	}
	int get_kolvo_skot()
	{
		return kolvo_skot;
	}
	/////
	void set_budget_village(int in)
	{
		this->budget_village=in;
	}
	int get_budget_village()
	{
		return budget_village;
	}
	/////
	void set_hours_from_begin_of_season(int in)
	{
		this->hours_from_begin_of_season=in;
	}
	int get_hours_from_begin_of_season()
	{
		return hours_from_begin_of_season;
	}
	/////
	void set_otschet_hours_net_krest(int in)
	{
		this->otschet_hours_net_krest=in;
	}
	int get_otschet_hours_net_krest()
	{
		return otschet_hours_net_krest;
	}
	/////
	void set_price_hleb(int in)
	{
		this->price_hleb=in;
	}
	int get_price_hleb()
	{
		return price_hleb;
	}
	/////
	void set_price_skot(int in)
	{
		this->price_skot=in;
	}
	int get_price_skot()
	{
		return price_skot;
	}
};

Village derevn; //������, � ������� �������� ��� ���������� � ������� (��������.)