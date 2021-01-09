#include "stdafx.h"
#include "krest_and_village.h"
#include <fstream>
#include <iostream>

//���������� ������� ������� (� ����� .h ������ �� ���������)

//��� ������ KREST

Krest::Krest() //����������� ��� ����������
{
	name="name"; 
	surname="surname"; 
	proizv_hleb=0; 
	proizv_skot=0;
	eda_hleb=0;
	eda_skot=0; 
	money_trat=0; 
	naim=0; 
	otschet_hours_net_edi=0; 
}

void Krest::Init_rand() //������������� ����� �������� (� ������������� ���������) ��� ����� ��������
{
	ifstream fin; //������� ������ ������ ifstream
	//�������� ��������� ��� �� �����
	fin.open("names.txt", ios::in); //������� ����
	int kolvo_name=0; //��������� �������� ���-�� ���� � �����
	while(!fin.eof()) //���� �� ��������� ���� ����
	{
		getline(fin, name, '\n'); //�������� ����� �� �����
		kolvo_name+=1; //��������� ���-�� ���� �� 1
	}
	fin.close(); //������� ����
	int num_name = (1 + rand() % kolvo_name) -2; //�������� ��������� ����� ����� �� ������ ���-��
	fin.open("names.txt", ios::in); //������� ����
	for (int i_n=0; ; i_n++)
	{
		getline(fin, name, '\n'); //�������� ����� �� �����
		if (i_n==num_name+1) //���� ��� ������� �����, ���������� ����
			break;
	}
	fin.close(); //������� ����
	//�������� ��������� ������� �� �����
	fin.open("surnames.txt", ios::in); //������� ����
	int kolvo_sur=0; //��������� �������� ���-�� ���� � �����
	while(!fin.eof()) //���� �� ��������� ���� ����
	{
		getline(fin, surname, '\n'); //�������� ����� �� �����
		kolvo_sur+=1; //��������� ���-�� ���� �� 1
	}
	fin.close(); //������� ����
	int num_sur = (1 + rand() % kolvo_sur) -2; //�������� ��������� ����� ����� �� ������ ���-��
	fin.open("surnames.txt", ios::in); //������� ����
	for (int i_nn=0; ; i_nn++)
	{
		getline(fin, surname, '\n'); //�������� ����� �� �����
		if (i_nn==num_sur+1) //���� ��� ������� �����, ���������� ����
			break;
	}
	fin.close(); //������� ����

	proizv_hleb = 1 + rand() % 10; //��������� ����� � ��������� �� 1 �� 10 ������������
	proizv_skot = (1 + rand() % 3) -1; //��������� ����� � ��������� �� 0 �� 2 ������������
	eda_hleb = 1 + rand() % 3; //��������� ����� � ��������� �� 1 �� 3 ������������
	eda_skot =(1 + rand() % 2) -1; //��������� ����� � ��������� �� 0 �� 1 ������������
	money_trat = 10 + rand() % 90; //��������� ����� � ��������� �� 10 �� 100 ������������
	naim = 5 + rand() % 50; //��������� ����� � ��������� �� 5 �� 50 ������������
	otschet_hours_net_edi=0;
}

//��������� � ������������ ��������������� ����� ��� �����������
void Krest::set_name(string in)
{
	this->name=in;
}
string Krest::get_name()
{
	return name;
}
/////
void Krest::set_surname(string in)
{
	this->surname=in;
}
string Krest::get_surname()
{
	return surname;
}
/////
void Krest::set_proizv_hleb(int in)
{
	this->proizv_hleb=in;
}
int Krest::get_proizv_hleb()
{
	return proizv_hleb;
}
/////
void Krest::set_proizv_skot(int in)
{
	this->proizv_skot=in;
}
int Krest::get_proizv_skot()
{
	return proizv_skot;
}
/////
void Krest::set_eda_hleb(int in)
{
	this->eda_hleb=in;
}
int Krest::get_eda_hleb()
{
	return eda_hleb;
}
/////
void Krest::set_eda_skot(int in)
{
	this->eda_skot=in;
}
int Krest::get_eda_skot()
{
	return eda_skot;
}
/////
void Krest::set_money_trat(int in)
{
	this->money_trat=in;
}
int Krest::get_money_trat()
{
	return money_trat;
}
/////
void Krest::set_naim(int in)
{
	this->naim=in;
}
int Krest::get_naim()
{
	return naim;
}
/////
void Krest::set_otschet_hours_net_edi(int in)
{
	this->otschet_hours_net_edi=in;
}
int Krest::get_otschet_hours_net_edi()
{
	return otschet_hours_net_edi;
}

//��� ������ VILLAGE
Village::Village() //����������� ��� ����������
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

void Village::Init_new_game() //������������� ��� ������ ����� ����
{
	if(krests!=0)
	{
		delete [] krests;
	}
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

void Village::Save_game() //���������� ���� (������ ���������� � ������� � ����)
{
	ofstream fof; //������� ������ ������ ofstream (��� ������ � ���� ���������� � �������) (��������� ��������)
	fof.open("village.txt", ios::out); //������� ���� ��� ������
	fof << kolvo_krest; //�������� � ����
	fof << '\n';
	fof << hours_procv; //�������� � ����
	fof << '\n';
	fof << days_procv; //�������� � ����
	fof << '\n';
	fof << speed_life; //�������� � ����
	fof << '\n';
	fof << flag_season; //�������� � ����
	fof << '\n';
	fof << kolvo_hleb; //�������� � ����
	fof << '\n';
	fof << kolvo_skot; //�������� � ����
	fof << '\n';
	fof << budget_village; //�������� � ����
	fof << '\n';
	fof << hours_from_begin_of_season; //�������� � ����
	fof << '\n';
	fof << otschet_hours_net_krest; //�������� � ����
	fof << '\n';
	fof << price_hleb; //�������� � ����
	fof << '\n';
	fof << price_skot; //�������� � ����
	fof << '\n';
	fof.close(); //������� ����

	fof.open("krests.txt", ios::out); //������� ���� ��� ������
	for(int m=0; m<kolvo_krest; m++)
	{
		fof << krests[m].get_name(); //�������� � ����
		fof << ';';
		fof << krests[m].get_surname(); //�������� � ����
		fof << ';';
		fof << krests[m].get_proizv_hleb(); //�������� � ����
		fof << ';';
		fof << krests[m].get_proizv_skot(); //�������� � ����
		fof << ';';
		fof << krests[m].get_eda_hleb(); //�������� � ����
		fof << ';';
		fof << krests[m].get_eda_skot(); //�������� � ����
		fof << ';';
		fof << krests[m].get_money_trat(); //�������� � ����
		fof << ';';
		fof << krests[m].get_naim(); //�������� � ����
		fof << ';';
		fof << krests[m].get_otschet_hours_net_edi(); //�������� � ����
		fof << '\n';
	}
	fof.close(); //������� ����
}

void Village::Init_load_game() //������������� ��� �������� ���������� ����
{
	if(krests!=0)
	{
		delete [] krests;
	}
	ifstream fin; //������� ������ ������ ifstream (��� ������ ���������� � ������� �� �����) (��������� ��������)
	string strread; //������ ��� ������ �� �����

	fin.open("village.txt", ios::in); //������� ����

	getline(fin, strread, '\n'); //��������� �� �����
	kolvo_krest=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	hours_procv=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	days_procv=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	speed_life=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	flag_season=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	kolvo_hleb=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	kolvo_skot=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	budget_village=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	hours_from_begin_of_season=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	otschet_hours_net_krest=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	price_hleb=atoi(strread.c_str()); //�������� � ������ ����

	getline(fin, strread, '\n'); //��������� �� �����
	price_skot=atoi(strread.c_str()); //�������� � ������ ����

	fin.close(); //������� ����

	krests = new Krest [kolvo_krest];
	fin.open("krests.txt", ios::in); //������� ����
	for(int m=0; m<kolvo_krest; m++)
	{
		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_name(strread);

		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_surname(strread);

		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_proizv_hleb(atoi(strread.c_str())); //�������� � ������ ����

		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_proizv_skot(atoi(strread.c_str())); //�������� � ������ ����

		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_eda_hleb(atoi(strread.c_str())); //�������� � ������ ����

		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_eda_skot(atoi(strread.c_str())); //�������� � ������ ����

		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_money_trat(atoi(strread.c_str())); //�������� � ������ ����

		getline(fin, strread, ';'); //��������� �� �����
		krests[m].set_naim(atoi(strread.c_str())); //�������� � ������ ����

		getline(fin, strread, '\n'); //��������� �� �����
		krests[m].set_otschet_hours_net_edi(atoi(strread.c_str())); //�������� � ������ ����
	}
	fin.close(); //������� ����
}

void Village::Delete_krest(int number) //�������� ����������� � ��������� ������� (��������� �� �������!)
{
	Krest* kre_change = new Krest[kolvo_krest-1]; //��������� ������ ��������
	for(int j=0, k1=0; j<kolvo_krest; j++) //��������� ���� ������ �������� � �������
	{
		if(j!=(number-1)) //���� ����� ����������� �� ����� ��������, �� ����������� ��� � ����� ������
		{
			kre_change[k1]=krests[j];
			k1++;
		}
	}
	delete krests; //������� ������ ������
	krests = kre_change; //������ ��������� ��������� �� ����� ������
	kolvo_krest=kolvo_krest-1; //������ �� 1 ����������� ������
}

void Village::Add_rand_krest() //���������� ���������� ����������� � ��������� (������ �������, ��������� �����)
{
	Krest* kre_change = new Krest[kolvo_krest+1]; //��������� ������ ��������
	int j;
	for(j=0; j<kolvo_krest; j++) //��������� ���� ������ �������� � �������
	{
		kre_change[j]=krests[j];
	}
	kre_change[j].Init_rand(); //����� ���������� ������������ ��������
	delete krests; //������� ������ ������
	krests = kre_change; //������ ��������� ��������� �� ����� ������
	kolvo_krest=kolvo_krest+1; //������ �� 1 ����������� ������
}

void Village::Naim_krest(Village vil_naim, int numk) //���� ����������� � ��������� ������� �� ����� ����� (��������� �� �������!)
{
	Krest* kre_change = new Krest[kolvo_krest+1]; //��������� ������ ��������
	int j;
	for(j=0; j<kolvo_krest; j++) //��������� ���� ������ �������� � �������
	{
		kre_change[j]=krests[j];
	}
	kre_change[j]=vil_naim.krests[numk-1]; //����� ���������� ������ �� ������� ����� ��� ������ ������� (��������� �� �������, � �� �� ����!)
	delete krests; //������� ������ ������
	krests = kre_change; //������ ��������� ��������� �� ����� ������
	kolvo_krest=kolvo_krest+1; //������ �� 1 ����������� ������
}

//��������� � ������������ ��������������� ����� ��� �������
void Village::set_kolvo_krest(int in)
{
	this->kolvo_krest=in;
}
int Village::get_kolvo_krest()
{
	return kolvo_krest;
}
/////
void Village::set_hours_procv(int in)
{
	this->hours_procv=in;
}
int Village::get_hours_procv()
{
	return hours_procv;
}
/////
void Village::set_days_procv(int in)
{
	this->days_procv=in;
}
int Village::get_days_procv()
{
	return days_procv;
}
/////
void Village::set_speed_life(int in)
{
	this->speed_life=in;
}
int Village::get_speed_life()
{
	return speed_life;
}
/////
void Village::set_flag_season(int in)
{
	this->flag_season=in;
}
int Village::get_flag_season()
{
	return flag_season;
}
/////
void Village::set_kolvo_hleb(int in)
{
	this->kolvo_hleb=in;
}
int Village::get_kolvo_hleb()
{
	return kolvo_hleb;
}
/////
void Village::set_kolvo_skot(int in)
{
	this->kolvo_skot=in;
}
int Village::get_kolvo_skot()
{
	return kolvo_skot;
}
/////
void Village::set_budget_village(int in)
{
	this->budget_village=in;
}
int Village::get_budget_village()
{
	return budget_village;
}
/////
void Village::set_hours_from_begin_of_season(int in)
{
	this->hours_from_begin_of_season=in;
}
int Village::get_hours_from_begin_of_season()
{
	return hours_from_begin_of_season;
}
/////
void Village::set_otschet_hours_net_krest(int in)
{
	this->otschet_hours_net_krest=in;
}
int Village::get_otschet_hours_net_krest()
{
	return otschet_hours_net_krest;
}
/////
void Village::set_price_hleb(int in)
{
	this->price_hleb=in;
}
int Village::get_price_hleb()
{
	return price_hleb;
}
/////
void Village::set_price_skot(int in)
{
	this->price_skot=in;
}
int Village::get_price_skot()
{
	return price_skot;
}

//��������� ����������
Village derevn; //������, � ������� �������� ��� ���������� � ������� (��������.)
Village birzh_trud; //������, � ������� �������� ��������� ��� ����� (��������.)