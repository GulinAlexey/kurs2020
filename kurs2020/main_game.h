#pragma once
#include "tabl_krest.h"
#include "krest_and_village.h"

extern Village derevn; //объект, в котором хранится вся информация о деревне (глобальн.)

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для main_game
	/// </summary>
	public ref class main_game : public System::Windows::Forms::Form
	{
	public:
		main_game(void)
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
		~main_game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  lent_menu;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  save_game_butt;
	private: System::Windows::Forms::ToolStripMenuItem^  spravk_lent_butt;
	private: System::Windows::Forms::ToolStripMenuItem^  go_to_main_menu_butt;
	private: System::Windows::Forms::Label^  skorost_zhiz_text;
	private: System::Windows::Forms::Label^  den_procv_text;
	private: System::Windows::Forms::Label^  kolvo_krest_text;
	private: System::Windows::Forms::Label^  budget_text;
	private: System::Windows::Forms::Label^  hleb_text;
	private: System::Windows::Forms::Label^  skot_text;
	private: System::Windows::Forms::GroupBox^  pomoshnik_box;
	private: System::Windows::Forms::Button^  spisok_krest_butt;
	private: System::Windows::Forms::Button^  birzha_butt;
	private: System::Windows::Forms::Label^  vihod_info;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main_game::typeid));
			this->lent_menu = (gcnew System::Windows::Forms::MenuStrip());
			this->save_game_butt = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spravk_lent_butt = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->go_to_main_menu_butt = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skorost_zhiz_text = (gcnew System::Windows::Forms::Label());
			this->den_procv_text = (gcnew System::Windows::Forms::Label());
			this->kolvo_krest_text = (gcnew System::Windows::Forms::Label());
			this->budget_text = (gcnew System::Windows::Forms::Label());
			this->hleb_text = (gcnew System::Windows::Forms::Label());
			this->skot_text = (gcnew System::Windows::Forms::Label());
			this->pomoshnik_box = (gcnew System::Windows::Forms::GroupBox());
			this->spisok_krest_butt = (gcnew System::Windows::Forms::Button());
			this->birzha_butt = (gcnew System::Windows::Forms::Button());
			this->vihod_info = (gcnew System::Windows::Forms::Label());
			this->lent_menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// lent_menu
			// 
			this->lent_menu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lent_menu->Dock = System::Windows::Forms::DockStyle::None;
			this->lent_menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->save_game_butt, this->spravk_lent_butt, 
				this->go_to_main_menu_butt});
			this->lent_menu->Location = System::Drawing::Point(472, 0);
			this->lent_menu->Name = L"lent_menu";
			this->lent_menu->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lent_menu->Size = System::Drawing::Size(372, 24);
			this->lent_menu->TabIndex = 0;
			this->lent_menu->Text = L"lent_menu";
			// 
			// save_game_butt
			// 
			this->save_game_butt->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"save_game_butt.Image")));
			this->save_game_butt->Name = L"save_game_butt";
			this->save_game_butt->Size = System::Drawing::Size(122, 20);
			this->save_game_butt->Text = L"Сохранить игру";
			// 
			// spravk_lent_butt
			// 
			this->spravk_lent_butt->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"spravk_lent_butt.Image")));
			this->spravk_lent_butt->Name = L"spravk_lent_butt";
			this->spravk_lent_butt->Size = System::Drawing::Size(81, 20);
			this->spravk_lent_butt->Text = L"Справка";
			// 
			// go_to_main_menu_butt
			// 
			this->go_to_main_menu_butt->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"go_to_main_menu_butt.Image")));
			this->go_to_main_menu_butt->Name = L"go_to_main_menu_butt";
			this->go_to_main_menu_butt->Size = System::Drawing::Size(161, 20);
			this->go_to_main_menu_butt->Text = L"Выход в главное меню";
			this->go_to_main_menu_butt->Click += gcnew System::EventHandler(this, &main_game::go_to_main_menu_butt_Click);
			// 
			// skorost_zhiz_text
			// 
			this->skorost_zhiz_text->AutoSize = true;
			this->skorost_zhiz_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->skorost_zhiz_text->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->skorost_zhiz_text->Location = System::Drawing::Point(12, 50);
			this->skorost_zhiz_text->Name = L"skorost_zhiz_text";
			this->skorost_zhiz_text->Size = System::Drawing::Size(212, 31);
			this->skorost_zhiz_text->TabIndex = 1;
			this->skorost_zhiz_text->Text = L"Скорость жизни: ";
			// 
			// den_procv_text
			// 
			this->den_procv_text->AutoSize = true;
			this->den_procv_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->den_procv_text->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->den_procv_text->Location = System::Drawing::Point(12, 91);
			this->den_procv_text->Name = L"den_procv_text";
			this->den_procv_text->Size = System::Drawing::Size(227, 31);
			this->den_procv_text->TabIndex = 2;
			this->den_procv_text->Text = L"Дни процветания: ";
			// 
			// kolvo_krest_text
			// 
			this->kolvo_krest_text->AutoSize = true;
			this->kolvo_krest_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->kolvo_krest_text->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->kolvo_krest_text->Location = System::Drawing::Point(12, 134);
			this->kolvo_krest_text->Name = L"kolvo_krest_text";
			this->kolvo_krest_text->Size = System::Drawing::Size(146, 31);
			this->kolvo_krest_text->TabIndex = 3;
			this->kolvo_krest_text->Text = L"Крестьяне: ";
			this->kolvo_krest_text->Click += gcnew System::EventHandler(this, &main_game::label1_Click);
			// 
			// budget_text
			// 
			this->budget_text->AutoSize = true;
			this->budget_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->budget_text->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->budget_text->Location = System::Drawing::Point(12, 178);
			this->budget_text->Name = L"budget_text";
			this->budget_text->Size = System::Drawing::Size(164, 31);
			this->budget_text->TabIndex = 4;
			this->budget_text->Text = L"Бюджет: руб.";
			// 
			// hleb_text
			// 
			this->hleb_text->AutoSize = true;
			this->hleb_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->hleb_text->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->hleb_text->Location = System::Drawing::Point(12, 220);
			this->hleb_text->Name = L"hleb_text";
			this->hleb_text->Size = System::Drawing::Size(85, 31);
			this->hleb_text->TabIndex = 5;
			this->hleb_text->Text = L"Хлеб: ";
			// 
			// skot_text
			// 
			this->skot_text->AutoSize = true;
			this->skot_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->skot_text->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->skot_text->Location = System::Drawing::Point(12, 262);
			this->skot_text->Name = L"skot_text";
			this->skot_text->Size = System::Drawing::Size(208, 31);
			this->skot_text->TabIndex = 6;
			this->skot_text->Text = L"Домашний скот: ";
			// 
			// pomoshnik_box
			// 
			this->pomoshnik_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pomoshnik_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->pomoshnik_box->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pomoshnik_box.BackgroundImage")));
			this->pomoshnik_box->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pomoshnik_box->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->pomoshnik_box->Location = System::Drawing::Point(12, 389);
			this->pomoshnik_box->Name = L"pomoshnik_box";
			this->pomoshnik_box->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pomoshnik_box->Size = System::Drawing::Size(820, 100);
			this->pomoshnik_box->TabIndex = 7;
			this->pomoshnik_box->TabStop = false;
			this->pomoshnik_box->Text = L"Информация от Помощника";
			// 
			// spisok_krest_butt
			// 
			this->spisok_krest_butt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->spisok_krest_butt->Font = (gcnew System::Drawing::Font(L"DejaVu Serif Condensed", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->spisok_krest_butt->Location = System::Drawing::Point(612, 83);
			this->spisok_krest_butt->Name = L"spisok_krest_butt";
			this->spisok_krest_butt->Size = System::Drawing::Size(220, 48);
			this->spisok_krest_butt->TabIndex = 3;
			this->spisok_krest_butt->TabStop = false;
			this->spisok_krest_butt->Text = L"Список крестьян";
			this->spisok_krest_butt->UseVisualStyleBackColor = true;
			this->spisok_krest_butt->Click += gcnew System::EventHandler(this, &main_game::spisok_krest_butt_Click);
			// 
			// birzha_butt
			// 
			this->birzha_butt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->birzha_butt->Font = (gcnew System::Drawing::Font(L"DejaVu Serif Condensed", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->birzha_butt->Location = System::Drawing::Point(612, 147);
			this->birzha_butt->Name = L"birzha_butt";
			this->birzha_butt->Size = System::Drawing::Size(220, 48);
			this->birzha_butt->TabIndex = 8;
			this->birzha_butt->TabStop = false;
			this->birzha_butt->Text = L"Товарная биржа";
			this->birzha_butt->UseVisualStyleBackColor = true;
			// 
			// vihod_info
			// 
			this->vihod_info->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->vihod_info->AutoSize = true;
			this->vihod_info->Location = System::Drawing::Point(621, 28);
			this->vihod_info->Name = L"vihod_info";
			this->vihod_info->Size = System::Drawing::Size(223, 13);
			this->vihod_info->TabIndex = 9;
			this->vihod_info->Text = L"Не забудь сохранить игру перед выходом!";
			// 
			// main_game
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(844, 501);
			this->Controls->Add(this->vihod_info);
			this->Controls->Add(this->birzha_butt);
			this->Controls->Add(this->spisok_krest_butt);
			this->Controls->Add(this->pomoshnik_box);
			this->Controls->Add(this->skot_text);
			this->Controls->Add(this->hleb_text);
			this->Controls->Add(this->budget_text);
			this->Controls->Add(this->kolvo_krest_text);
			this->Controls->Add(this->den_procv_text);
			this->Controls->Add(this->skorost_zhiz_text);
			this->Controls->Add(this->lent_menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->lent_menu;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(860, 540);
			this->Name = L"main_game";
			this->Text = L"Игра \"Управление деревней\"";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->lent_menu->ResumeLayout(false);
			this->lent_menu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void go_to_main_menu_butt_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void spisok_krest_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			tabl_krest^ tabl_krest_p = gcnew tabl_krest(); //указатель на форму
			tabl_krest_p -> ShowDialog(); //открыть форму
		 }
};
}
