// ��������������� ������ (����� �� ��������� ������ ���������������� ���� "class"�)
#ifndef KREST_AND_VILLAGE_H // ���� ��� KREST_AND_VILLAGE_H ��� �� ����������
#define KREST_AND_VILLAGE_H // ���������� ��� KREST_AND_VILLAGE_H
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
	Krest(); //����������� ��� ����������
	void Init_rand(); //������������� ����� �������� (� ������������� ���������) ��� ����� ��������

	//��������� � ������������ ��������������� ����� ��� �����������
	void set_name(string in);
	string get_name();
	/////
	void set_surname(string in);
	string get_surname();
	/////
	void set_proizv_hleb(int in);
	int get_proizv_hleb();
	/////
	void set_proizv_skot(int in);
	int get_proizv_skot();
	/////
	void set_eda_hleb(int in);
	int get_eda_hleb();
	/////
	void set_eda_skot(int in);
	int get_eda_skot();
	/////
	void set_money_trat(int in);
	int get_money_trat();
	/////
	void set_naim(int in);
	int get_naim();
	/////
	void set_otschet_hours_net_edi(int in);
	int get_otschet_hours_net_edi();
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
public:
	Krest* krests; //���������

	Village(); //����������� ��� ����������
	void Init_new_game(); //������������� ��� ������ ����� ����
	void Delete_krest(int number); //�������� ����������� � ��������� ������� (��������� �� �������!)
	
	//��������� � ������������ ��������������� ����� ��� �������
	void set_kolvo_krest(int in);
	int get_kolvo_krest();
	/////
	void set_hours_procv(int in);
	int get_hours_procv();
	/////
	void set_days_procv(int in);
	int get_days_procv();
	/////
	void set_speed_life(int in);
	int get_speed_life();
	/////
	void set_flag_season(int in);
	int get_flag_season();
	/////
	void set_kolvo_hleb(int in);
	int get_kolvo_hleb();
	/////
	void set_kolvo_skot(int in);
	int get_kolvo_skot();
	/////
	void set_budget_village(int in);
	int get_budget_village();
	/////
	void set_hours_from_begin_of_season(int in);
	int get_hours_from_begin_of_season();
	/////
	void set_otschet_hours_net_krest(int in);
	int get_otschet_hours_net_krest();
	/////
	void set_price_hleb(int in);
	int get_price_hleb();
	/////
	void set_price_skot(int in);
	int get_price_skot();
};


extern Village derevn; //������, � ������� �������� ��� ���������� � ������� (��������.)
extern Village birzh_trud; //������, � ������� �������� ��������� ��� ����� (��������.)

#endif KREST_AND_VILLAGE_H // ���� ��� KREST_AND_VILLAGE_H ��� ����������, �������� �� ����������