#pragma once
#include <cstdlib>
#include <ctime>
#include "krest_and_village.h"
#include "main_game.h"
#include "spravk.h"
#include "itog_game.h"

int f_endgame=0; //флаг о том, что игра окончена (игрок проиграл) (глобальн.)

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  igra_menu_text;
	private: System::Windows::Forms::Label^  glavn_menu_text;
	private: System::Windows::Forms::Button^  new_game_butt;
	private: System::Windows::Forms::Button^  load_game_butt;
	private: System::Windows::Forms::Button^  records_butt;
	private: System::Windows::Forms::Button^  quit_butt;
	private: System::Windows::Forms::Button^  spravk_butt;
	private: System::Windows::Forms::Label^  info_avtor;






	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->igra_menu_text = (gcnew System::Windows::Forms::Label());
			this->glavn_menu_text = (gcnew System::Windows::Forms::Label());
			this->new_game_butt = (gcnew System::Windows::Forms::Button());
			this->load_game_butt = (gcnew System::Windows::Forms::Button());
			this->records_butt = (gcnew System::Windows::Forms::Button());
			this->quit_butt = (gcnew System::Windows::Forms::Button());
			this->spravk_butt = (gcnew System::Windows::Forms::Button());
			this->info_avtor = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// igra_menu_text
			// 
			this->igra_menu_text->BackColor = System::Drawing::Color::Transparent;
			this->igra_menu_text->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->igra_menu_text->ForeColor = System::Drawing::Color::Navy;
			this->igra_menu_text->Location = System::Drawing::Point(1, 38);
			this->igra_menu_text->Name = L"igra_menu_text";
			this->igra_menu_text->Size = System::Drawing::Size(343, 29);
			this->igra_menu_text->TabIndex = 0;
			this->igra_menu_text->Text = L"Игра \"Управление деревней\"";
			this->igra_menu_text->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->igra_menu_text->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// glavn_menu_text
			// 
			this->glavn_menu_text->BackColor = System::Drawing::Color::Transparent;
			this->glavn_menu_text->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 20.25F, System::Drawing::FontStyle::Italic, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->glavn_menu_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->glavn_menu_text->Location = System::Drawing::Point(0, 62);
			this->glavn_menu_text->Name = L"glavn_menu_text";
			this->glavn_menu_text->Size = System::Drawing::Size(344, 44);
			this->glavn_menu_text->TabIndex = 1;
			this->glavn_menu_text->Text = L"Главное меню";
			this->glavn_menu_text->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->glavn_menu_text->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// new_game_butt
			// 
			this->new_game_butt->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->new_game_butt->Location = System::Drawing::Point(60, 121);
			this->new_game_butt->Name = L"new_game_butt";
			this->new_game_butt->Size = System::Drawing::Size(220, 48);
			this->new_game_butt->TabIndex = 2;
			this->new_game_butt->Text = L"Новая игра";
			this->new_game_butt->UseVisualStyleBackColor = true;
			this->new_game_butt->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// load_game_butt
			// 
			this->load_game_butt->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->load_game_butt->Location = System::Drawing::Point(60, 185);
			this->load_game_butt->Name = L"load_game_butt";
			this->load_game_butt->Size = System::Drawing::Size(220, 48);
			this->load_game_butt->TabIndex = 3;
			this->load_game_butt->Text = L"Загрузка\r\nнезаконченной игры";
			this->load_game_butt->UseVisualStyleBackColor = true;
			this->load_game_butt->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// records_butt
			// 
			this->records_butt->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->records_butt->Location = System::Drawing::Point(60, 248);
			this->records_butt->Name = L"records_butt";
			this->records_butt->Size = System::Drawing::Size(220, 48);
			this->records_butt->TabIndex = 4;
			this->records_butt->Text = L"Список рекордов";
			this->records_butt->UseVisualStyleBackColor = true;
			this->records_butt->Click += gcnew System::EventHandler(this, &Form1::button1_Click_2);
			// 
			// quit_butt
			// 
			this->quit_butt->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->quit_butt->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->quit_butt->Location = System::Drawing::Point(60, 311);
			this->quit_butt->Name = L"quit_butt";
			this->quit_butt->Size = System::Drawing::Size(220, 48);
			this->quit_butt->TabIndex = 5;
			this->quit_butt->Text = L"Выход из игры";
			this->quit_butt->UseVisualStyleBackColor = true;
			this->quit_butt->Click += gcnew System::EventHandler(this, &Form1::quit_butt_Click);
			// 
			// spravk_butt
			// 
			this->spravk_butt->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->spravk_butt->Location = System::Drawing::Point(316, 3);
			this->spravk_butt->Name = L"spravk_butt";
			this->spravk_butt->Size = System::Drawing::Size(28, 32);
			this->spravk_butt->TabIndex = 6;
			this->spravk_butt->Text = L"\?";
			this->spravk_butt->UseVisualStyleBackColor = true;
			this->spravk_butt->Click += gcnew System::EventHandler(this, &Form1::spravk_butt_Click);
			// 
			// info_avtor
			// 
			this->info_avtor->AutoSize = true;
			this->info_avtor->BackColor = System::Drawing::Color::Transparent;
			this->info_avtor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->info_avtor->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->info_avtor->Location = System::Drawing::Point(3, 3);
			this->info_avtor->Name = L"info_avtor";
			this->info_avtor->Size = System::Drawing::Size(224, 15);
			this->info_avtor->TabIndex = 7;
			this->info_avtor->Text = L"© Гулин Алексей, ПИ-92. АлтГТУ 2020";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->CancelButton = this->quit_butt;
			this->ClientSize = System::Drawing::Size(346, 387);
			this->ControlBox = false;
			this->Controls->Add(this->info_avtor);
			this->Controls->Add(this->spravk_butt);
			this->Controls->Add(this->quit_butt);
			this->Controls->Add(this->records_butt);
			this->Controls->Add(this->load_game_butt);
			this->Controls->Add(this->new_game_butt);
			this->Controls->Add(this->glavn_menu_text);
			this->Controls->Add(this->igra_menu_text);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(362, 426);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(362, 426);
			this->Name = L"Form1";
			this->RightToLeftLayout = true;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Главное меню";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			srand(time(NULL)); //автоматическая рандомизация генератора случайных чисел в зависимости от времени (чтобы всегда давал разный результат)
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			f_endgame=0; //флаг конца игры (будет равен 1, когда игрок проиграет)
			derevn.Init_new_game(); //инициализация деревни перед началом новой игры
			main_game^ main_game_p = gcnew main_game(); //указатель на форму
			main_game_p -> ShowDialog(); //открыть форму
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void quit_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0); //выход из программы
		 }
private: System::Void spravk_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			spravk^ spravk_p = gcnew spravk(); //указатель на форму
			spravk_p -> ShowDialog(); //открыть форму
		 }
private: System::Void Form1_Activated(System::Object^  sender, System::EventArgs^  e) {
			 if(f_endgame==1)
			 {
				f_endgame=0;
				itog_game^ itog_game_p = gcnew itog_game(); //указатель на форму
				itog_game_p -> Show(); //открыть форму
			 }
		 }
};
}

