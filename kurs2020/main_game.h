#pragma once

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
			// main_game
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(844, 501);
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
	};
}
