#pragma once
#include "krest_and_village.h"

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для itog_game
	/// </summary>
	public ref class itog_game : public System::Windows::Forms::Form
	{
	public:
		itog_game(void)
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
		~itog_game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  your_scores;
	private: System::Windows::Forms::TextBox^  name_player;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  ok_record;
	private: System::Windows::Forms::Button^  close;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->your_scores = (gcnew System::Windows::Forms::Label());
			this->name_player = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ok_record = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Все крестьяне покинули деревню.\r\nПред вашим взором только \r\nзаброшенные просторы." 
				L"";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(0, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(284, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Игра окончена!";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-1, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 39);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Итоговый счёт (Дни П.):";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// your_scores
			// 
			this->your_scores->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->your_scores->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->your_scores->Location = System::Drawing::Point(213, 118);
			this->your_scores->Name = L"your_scores";
			this->your_scores->Size = System::Drawing::Size(69, 60);
			this->your_scores->TabIndex = 3;
			this->your_scores->Text = L"12345";
			// 
			// name_player
			// 
			this->name_player->Location = System::Drawing::Point(79, 168);
			this->name_player->MaxLength = 20;
			this->name_player->Name = L"name_player";
			this->name_player->Size = System::Drawing::Size(128, 20);
			this->name_player->TabIndex = 1;
			this->name_player->Text = L"player";
			this->name_player->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->name_player->TextChanged += gcnew System::EventHandler(this, &itog_game::name_player_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(221, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Введите ваше имя: (для списка рекордов)";
			// 
			// ok_record
			// 
			this->ok_record->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ok_record->Location = System::Drawing::Point(17, 194);
			this->ok_record->Name = L"ok_record";
			this->ok_record->Size = System::Drawing::Size(118, 44);
			this->ok_record->TabIndex = 2;
			this->ok_record->Text = L"записать и закрыть";
			this->ok_record->UseVisualStyleBackColor = true;
			this->ok_record->Click += gcnew System::EventHandler(this, &itog_game::ok_record_Click);
			// 
			// close
			// 
			this->close->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->close->Location = System::Drawing::Point(154, 194);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(118, 44);
			this->close->TabIndex = 3;
			this->close->Text = L"закрыть без сохранения рекорда";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &itog_game::close_Click);
			// 
			// itog_game
			// 
			this->AcceptButton = this->ok_record;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->close;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->ControlBox = false;
			this->Controls->Add(this->close);
			this->Controls->Add(this->ok_record);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->name_player);
			this->Controls->Add(this->your_scores);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(300, 300);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"itog_game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Конец игры";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &itog_game::itog_game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void itog_game_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->your_scores->Text = Convert::ToString(derevn.get_days_procv());
		 }
private: System::Void ok_record_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void name_player_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->name_player->Text==L"") //если поле с именем игрока пустое
			 {
				 this->ok_record->Enabled=false;
			 }
			 else
			 {
				 this->ok_record->Enabled=true;
			 }

		 }
};
}
