#include "stdafx.h"
#include "krest_and_village.h"

void Krest::Init_rand() //инициализация полей случайно (в фиксированном диапазоне) для новых крестьян
	{
	}

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

Village derevn; //объект, в котором хранится вся информация о деревне (глобальн.)