// препроцессорная обёртка (чтобы не возникало ошибок «переопределение типа "class"»)
#ifndef KREST_AND_VILLAGE_H // если имя KREST_AND_VILLAGE_H ещё не определено
#define KREST_AND_VILLAGE_H // определить имя KREST_AND_VILLAGE_H
#include <string>

using namespace std;


public class Krest //класс крестьянина
{
private:
	string name; //Имя
	string surname; //Фамилия
	int proizv_hleb; //Кол-во производимого хлеба за Час Процветания
	int proizv_skot; //Кол-во производимого домашнего скота за Час Процветания 
	int eda_hleb; //Прожорливость: хлеб 
	int eda_skot; //Прожорливость: домашний скот 
	int money_trat; //Денежные расходы за один Час Процветания 
	int naim; //Стоимость найма в рублях 
	int otschet_hours_net_edi; //Отсчёт времени в Часах Процветания с момента, когда закончилась еда для этого крестьянина
public:
	Krest(); //конструктор без параметров
	void Init_rand(); //инициализация полей случайно (в фиксированном диапазоне) для новых крестьян

	//Получение и установление соответствующих полей для крестьянина
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

public class Village //класс деревни
{
private:
	int kolvo_krest; //Кол-во крестьян в деревне 
	int hours_procv; //Кол-во Часов Процветания с момента начала игры 
	int days_procv; //Кол-во Дней Процветания с момента начала игры (и финальный счёт)
	int speed_life; //Текущий множитель «Скорость Жизни»
	int flag_season; //Флаг текущего сезона (равен нулю Летом, равен единице Зимой)
	int kolvo_hleb; //Общее кол-во хлеба в деревне 
	int kolvo_skot; //Общее кол-во голов домашнего скота в деревне 
	int budget_village; //Бюджет деревни в рублях 
	int hours_from_begin_of_season; //Кол-во Часов Процветания в момент, когда текущее время года только началось 
	int otschet_hours_net_krest; //Отсчёт времени в Часах Процветания с момента, когда ушли все крестьяне 
	int price_hleb; //Текущая цена за ед. хлеба на Торговой бирже в рублях 
	int price_skot; //Текущая цена за одну голову домашнего скота на Торговой бирже в рублях 
public:
	Krest* krests; //крестьяне

	Village(); //конструктор без параметров
	void Init_new_game(); //инициализация при начале новой игры
	void Delete_krest(int number); //удаление крестьянина с выбранным номером (нумерация от единицы!)
	
	//Получение и установление соответствующих полей для деревни
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


extern Village derevn; //объект, в котором хранится вся информация о деревне (глобальн.)
extern Village birzh_trud; //объект, в котором хранятся крестьяне для найма (глобальн.)

#endif KREST_AND_VILLAGE_H // если имя KREST_AND_VILLAGE_H уже определено, повторно не определять