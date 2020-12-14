#include "stdafx.h"
#include "krest_and_village.h"
#include <fstream>

//РЕАЛИЗАЦИИ МЕТОДОВ КЛАССОВ (В ФАЙЛЕ .h ТОЛЬКО ИХ ПРОТОТИПЫ)

//ДЛЯ КЛАССА KREST

Krest::Krest() //конструктор без параметров
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

void Krest::Init_rand() //инициализация полей случайно (в фиксированном диапазоне) для новых крестьян
{
	name="name"; //ВРЕМЕННО
	surname="surname"; //ВРЕМЕННО
	proizv_hleb = 1 + rand() % 10; //случайное число в интервале от 1 до 10 включительно
	proizv_skot = (1 + rand() % 3) -1; //случайное число в интервале от 0 до 2 включительно
	eda_hleb = 1 + rand() % 3; //случайное число в интервале от 1 до 3 включительно
	eda_skot =(1 + rand() % 2) -1; //случайное число в интервале от 0 до 1 включительно
	money_trat = 10 + rand() % 100; //случайное число в интервале от 10 до 100 включительно
	naim = 5 + rand() % 50; //случайное число в интервале от 5 до 50 включительно
	otschet_hours_net_edi=0;
}

//Получение и установление соответствующих полей для крестьянина
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

//ДЛЯ КЛАССА VILLAGE
Village::Village() //конструктор без параметров
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

void Village::Init_new_game() //инициализация при начале новой игры
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

//Получение и установление соответствующих полей для деревни
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

//Обявления переменных
Village derevn; //объект, в котором хранится вся информация о деревне (глобальн.)