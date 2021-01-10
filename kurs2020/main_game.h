#pragma once
#include <ctime>
#include "tabl_krest.h"
#include "krest_and_village.h"
#include "sell_tovar.h"
#include "spravk.h"

extern int f_endgame; //���� � ���, ��� ���� �������� (����� ��������) (��������.)

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� main_game
	/// </summary>
	public ref class main_game : public System::Windows::Forms::Form
	{
	public:
		main_game(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Label^  event_helper;
	private: System::Windows::Forms::Label^  time_helper;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer_refresh;
	private: System::Windows::Forms::Label^  save_complete;
	private: System::Windows::Forms::Timer^  main_timer;
	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->event_helper = (gcnew System::Windows::Forms::Label());
			this->time_helper = (gcnew System::Windows::Forms::Label());
			this->spisok_krest_butt = (gcnew System::Windows::Forms::Button());
			this->birzha_butt = (gcnew System::Windows::Forms::Button());
			this->vihod_info = (gcnew System::Windows::Forms::Label());
			this->main_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer_refresh = (gcnew System::Windows::Forms::Timer(this->components));
			this->save_complete = (gcnew System::Windows::Forms::Label());
			this->lent_menu->SuspendLayout();
			this->pomoshnik_box->SuspendLayout();
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
			this->save_game_butt->Text = L"��������� ����";
			this->save_game_butt->Click += gcnew System::EventHandler(this, &main_game::save_game_butt_Click);
			// 
			// spravk_lent_butt
			// 
			this->spravk_lent_butt->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"spravk_lent_butt.Image")));
			this->spravk_lent_butt->Name = L"spravk_lent_butt";
			this->spravk_lent_butt->Size = System::Drawing::Size(81, 20);
			this->spravk_lent_butt->Text = L"�������";
			this->spravk_lent_butt->Click += gcnew System::EventHandler(this, &main_game::spravk_lent_butt_Click);
			// 
			// go_to_main_menu_butt
			// 
			this->go_to_main_menu_butt->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"go_to_main_menu_butt.Image")));
			this->go_to_main_menu_butt->Name = L"go_to_main_menu_butt";
			this->go_to_main_menu_butt->Size = System::Drawing::Size(161, 20);
			this->go_to_main_menu_butt->Text = L"����� � ������� ����";
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
			this->skorost_zhiz_text->Text = L"�������� �����: ";
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
			this->den_procv_text->Text = L"��� �����������: ";
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
			this->kolvo_krest_text->Text = L"���������: ";
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
			this->budget_text->Text = L"������: ���.";
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
			this->hleb_text->Text = L"����: ";
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
			this->skot_text->Text = L"�������� ����: ";
			// 
			// pomoshnik_box
			// 
			this->pomoshnik_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pomoshnik_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->pomoshnik_box->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pomoshnik_box.BackgroundImage")));
			this->pomoshnik_box->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pomoshnik_box->Controls->Add(this->event_helper);
			this->pomoshnik_box->Controls->Add(this->time_helper);
			this->pomoshnik_box->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->pomoshnik_box->Location = System::Drawing::Point(12, 389);
			this->pomoshnik_box->Name = L"pomoshnik_box";
			this->pomoshnik_box->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->pomoshnik_box->Size = System::Drawing::Size(820, 100);
			this->pomoshnik_box->TabIndex = 7;
			this->pomoshnik_box->TabStop = false;
			this->pomoshnik_box->Text = L"���������� �� ���������";
			// 
			// event_helper
			// 
			this->event_helper->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->event_helper->BackColor = System::Drawing::Color::Transparent;
			this->event_helper->Cursor = System::Windows::Forms::Cursors::Default;
			this->event_helper->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->event_helper->Location = System::Drawing::Point(6, 51);
			this->event_helper->Name = L"event_helper";
			this->event_helper->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->event_helper->Size = System::Drawing::Size(808, 46);
			this->event_helper->TabIndex = 1;
			this->event_helper->Text = L" ";
			// 
			// time_helper
			// 
			this->time_helper->AutoSize = true;
			this->time_helper->BackColor = System::Drawing::Color::Transparent;
			this->time_helper->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->time_helper->Location = System::Drawing::Point(6, 24);
			this->time_helper->Name = L"time_helper";
			this->time_helper->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->time_helper->Size = System::Drawing::Size(540, 22);
			this->time_helper->TabIndex = 0;
			this->time_helper->Text = L"�� ����� ����� ������� ���� �������� 11 ����� �����������.";
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
			this->spisok_krest_butt->Text = L"������ ��������";
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
			this->birzha_butt->Text = L"�������� �����";
			this->birzha_butt->UseVisualStyleBackColor = true;
			this->birzha_butt->Click += gcnew System::EventHandler(this, &main_game::birzha_butt_Click);
			// 
			// vihod_info
			// 
			this->vihod_info->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->vihod_info->AutoSize = true;
			this->vihod_info->Location = System::Drawing::Point(621, 28);
			this->vihod_info->Name = L"vihod_info";
			this->vihod_info->Size = System::Drawing::Size(223, 13);
			this->vihod_info->TabIndex = 9;
			this->vihod_info->Text = L"�� ������ ��������� ���� ����� �������!";
			// 
			// main_timer
			// 
			this->main_timer->Enabled = true;
			this->main_timer->Interval = 3000;
			this->main_timer->Tick += gcnew System::EventHandler(this, &main_game::main_timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(210)), 
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->label1->Location = System::Drawing::Point(2, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 26);
			this->label1->TabIndex = 10;
			this->label1->Text = L"1 ��� ����������� = 3 �������� �������\r\n1 ���� ����������� = 30 �������� ������";
			// 
			// timer_refresh
			// 
			this->timer_refresh->Enabled = true;
			this->timer_refresh->Interval = 512;
			this->timer_refresh->Tick += gcnew System::EventHandler(this, &main_game::timer_refresh_Tick);
			// 
			// save_complete
			// 
			this->save_complete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->save_complete->AutoSize = true;
			this->save_complete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->save_complete->Location = System::Drawing::Point(474, 28);
			this->save_complete->Name = L"save_complete";
			this->save_complete->Size = System::Drawing::Size(137, 13);
			this->save_complete->TabIndex = 11;
			this->save_complete->Text = L"���� ������� ���������!";
			this->save_complete->Visible = false;
			// 
			// main_game
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(844, 501);
			this->Controls->Add(this->save_complete);
			this->Controls->Add(this->label1);
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
			this->Text = L"���� \"���������� ��������\"";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &main_game::main_game_Load);
			this->lent_menu->ResumeLayout(false);
			this->lent_menu->PerformLayout();
			this->pomoshnik_box->ResumeLayout(false);
			this->pomoshnik_box->PerformLayout();
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
			tabl_krest^ tabl_krest_p = gcnew tabl_krest(); //��������� �� �����
			tabl_krest_p -> ShowDialog(); //������� �����
			delete(tabl_krest_p);
		 }
private: System::Void birzha_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			sell_tovar^ sell_tovar_p = gcnew sell_tovar(); //��������� �� �����
			sell_tovar_p -> ShowDialog(); //������� �����
			delete(sell_tovar_p);
		 }
private: System::Void spravk_lent_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			spravk^ spravk_p = gcnew spravk(); //��������� �� �����
			spravk_p -> ShowDialog(); //������� �����
			delete(spravk_p);
		 }
private: System::Void main_game_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->kolvo_krest_text->Text = L"���������: " + Convert::ToString(derevn.get_kolvo_krest())+ L" ���.";;
			 this->skorost_zhiz_text->Text = L"�������� �����: " + Convert::ToString(derevn.get_speed_life());
			 this->den_procv_text->Text = L"��� �����������: " + Convert::ToString(derevn.get_days_procv());
			 this->budget_text->Text = L"������: " + Convert::ToString(derevn.get_budget_village()) + L" ���.";
			 this->hleb_text->Text = L"����: " + Convert::ToString(derevn.get_kolvo_hleb()) + L" ��.";
			 this->skot_text->Text = L"�������� ����: " + Convert::ToString(derevn.get_kolvo_skot()) + L" ��.";
			 if(derevn.get_flag_season()==0)
				this->time_helper->Text = L"�� ����� ���� �������� " + Convert::ToString(40 -(derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())) + L" ����� �����������.";
			 if(derevn.get_flag_season()==1)
			 {
				this->time_helper->Text = L"�� ����� ���� �������� " + Convert::ToString(20 -(derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())) + L" ����� �����������.";
				this->BackgroundImage = Image::FromFile("zima.jpg"); //�������� ��� �� ������
			 }
			 /* //����� �������� ������� � ������ ������� (���:���:���). ����������� � ������ ����� ����
			 time_t now = time(0);
			 tm *ltm = localtime(&now);
			 this->event_helper->Text = L"��������� �������: " + Convert::ToString(ltm->tm_hour)+ L":" + Convert::ToString(ltm->tm_min)+ L":" + Convert::ToString(ltm->tm_sec) + L" ";
			 */
		 }
private: System::Void main_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->save_complete->Visible = false;
			 if(f_endgame==1) //���� �����������, ������� ��� �����
				 Close();
			 derevn.set_hours_procv(derevn.get_hours_procv()+1); //���-�� ����� ����������� ����������� �� 1
			 if((derevn.get_hours_procv()%10)==0) //���� ������ 10 ����� �����������
			 {
				 derevn.set_days_procv(derevn.get_days_procv()+1);
			 }
			 if(derevn.get_kolvo_krest()==0) //���� ��� ��������
			 {
				 derevn.set_otschet_hours_net_krest(derevn.get_otschet_hours_net_krest()+1);
			 }
			 if(derevn.get_otschet_hours_net_krest()==2) //���� ����������� ����� ������� ��� ��������
			 {
				 f_endgame=1;
				 Close();
			 }
			 if(derevn.get_kolvo_krest()!=0) //���� ���� �� ���� ���������� �������
			 {
				 derevn.set_otschet_hours_net_krest(0);
			 }
			 if(derevn.get_flag_season()==0 && derevn.get_budget_village()!=0) //���� ���� � ������ �� �������
			 {
				 int kolv_k=derevn.get_kolvo_krest();
				 for(int ko=0; ko<kolv_k; ko++)
				 {
					 if((derevn.get_budget_village()-(derevn.krests[ko].get_money_trat()*derevn.get_speed_life()))>=0)
					 {
						 derevn.set_kolvo_hleb(derevn.get_kolvo_hleb()+derevn.krests[ko].get_proizv_hleb());
						 derevn.set_kolvo_skot(derevn.get_kolvo_skot()+derevn.krests[ko].get_proizv_skot());
						 derevn.set_budget_village(derevn.get_budget_village()-(derevn.krests[ko].get_money_trat()*derevn.get_speed_life()));
					 }
					 else
						 break;
				 }
			 }
			 if(derevn.get_flag_season()==1) //���� ����
			 {
				 int kolv_k=derevn.get_kolvo_krest();
				 for(int ko=0; ko<kolv_k; ko++)
				 {
					 derevn.set_kolvo_hleb(derevn.get_kolvo_hleb()-(derevn.krests[ko].get_eda_hleb()*derevn.get_speed_life()));
					 derevn.set_kolvo_skot(derevn.get_kolvo_skot()-(derevn.krests[ko].get_eda_skot()*derevn.get_speed_life()));
					 if(derevn.get_kolvo_hleb()>=0 && derevn.get_kolvo_skot()>=0)
						 derevn.krests[ko].set_otschet_hours_net_edi(0);
					 if(derevn.get_kolvo_hleb()<0 || derevn.get_kolvo_skot()<0)
					 {
						if(derevn.get_kolvo_hleb()<0)
						{
							 derevn.set_kolvo_hleb(0);
						}
						if(derevn.get_kolvo_skot()<0)
						{
							 derevn.set_kolvo_skot(0);
						}
						derevn.krests[ko].set_otschet_hours_net_edi(derevn.krests[ko].get_otschet_hours_net_edi()+1);
						if(derevn.krests[ko].get_otschet_hours_net_edi()>=5)
						{
							time_t now = time(0); //��� ������ �������
							tm *ltm = localtime(&now);
							string str_name= derevn.krests[ko].get_name() + " " + derevn.krests[ko].get_surname(); //��� ������ ����� � �������
							this->event_helper->Text = L"��������� �������: " + Convert::ToString(ltm->tm_hour)+ L":" + Convert::ToString(ltm->tm_min)+ L":" + Convert::ToString(ltm->tm_sec) + L" " + L"���������� " + gcnew System::String(str_name.c_str()) + L" ���� �� ������� ��-�� ���������� ����.";
							
							derevn.Delete_krest(ko+1); //������� ����������� (������ ��������� ��������� �� �������, � ���� ���������� �� ����)
							kolv_k=kolv_k-1; //�������� ����� �� 1 ������

							if(kolv_k==ko)
								break;
			 
						}
					 }
				 }
			 }

			 if(derevn.get_flag_season()==0 && (derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())==40) //���� ������ ���� � ������ 40 ����� �. �� ������ ���� (4 ��� �. ��� 2 ������)
			 {
				 derevn.set_flag_season(1); //������ ���� ������������� ����
				 this->BackgroundImage = Image::FromFile("zima.jpg"); //�������� ��� �� ������
				 derevn.set_hours_from_begin_of_season(derevn.get_hours_procv());
			 }

			 if(derevn.get_flag_season()==1 && (derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())==20) //���� ������ ���� � ������ 20 ����� �. �� ������ ���� (2 ��� �. ��� 1 ������)
			 {
				 derevn.set_flag_season(0); //������ ���� ������������� ����
				 this->BackgroundImage = Image::FromFile("leto.jpg"); //�������� ��� �� ������
				 derevn.set_hours_from_begin_of_season(derevn.get_hours_procv());
				 derevn.set_speed_life( derevn.get_speed_life()+1); //��������� �������� ����� ���������� �� 1
				 int f_izmen_price; //���� ��������� ���� �� ����� (0, ���� ���������; 1, ���� ���������)
				 double proc_izm; //������� �� ���������� �������� ����, �� ������� ��� ���������
				 //��� ���� �� ����
				 f_izmen_price =(1 + rand() % 2) -1; //��������� ����� � ��������� �� 0 �� 1 ������������
				 proc_izm = 5 + rand() % 25; //��������� ����� � ��������� �� 5 �� 30 ������������
				 proc_izm = proc_izm / 100; //������� ����������� �������� � ����������
				 if(f_izmen_price==0)
				 {
					 derevn.set_price_hleb(derevn.get_price_hleb() - derevn.get_price_hleb() * proc_izm);
				 }
				 if(f_izmen_price==1)
				 {
					 derevn.set_price_hleb(derevn.get_price_hleb() + derevn.get_price_hleb() * proc_izm);
				 }
				 //��� ���� �� ����
				 f_izmen_price =(1 + rand() % 2) -1; //��������� ����� � ��������� �� 0 �� 1 ������������
				 proc_izm = 5 + rand() % 25; //��������� ����� � ��������� �� 5 �� 30 ������������
				 proc_izm = proc_izm / 100; //������� ����������� �������� � ����������
				 if(f_izmen_price==0)
				 {
					 derevn.set_price_skot(derevn.get_price_skot() - derevn.get_price_skot() * proc_izm);
				 }
				 if(f_izmen_price==1)
				 {
					 derevn.set_price_skot(derevn.get_price_skot() + derevn.get_price_skot() * proc_izm);
				 }
			 }

			 if(derevn.get_flag_season()==1 && (derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())==10) //���� ������ ���� � ������ 10 ����� �. �� ������ ���� (�������� ����) (1 ���� �. ��� 0,5 ������)
			 {
				 int f_event; //���� ���������� ������� (0 - ������ ������ �����������, 1 - ��������� ������ �� ����)
				 f_event =(1 + rand() % 2) -1; //��������� ����� � ��������� �� 0 �� 1 ������������

				 double proc_izm; //������� �� ���������� �������� ���-�� �����, �� ������� ��� ���������
				 proc_izm = 5 + rand() % 25; //��������� ����� � ��������� �� 5 �� 30 ������������
				 proc_izm = proc_izm / 100; //������� ����������� �������� � ����������
				 int poteri = derevn.get_kolvo_skot() * proc_izm; //��������� ���������� ��� ���-�� ����������� �����

				 if(f_event==1 && poteri>0) //��������� ������
				 {
					 derevn.set_kolvo_skot(derevn.get_kolvo_skot() - poteri);
					 time_t now = time(0); //��� ������ �������
					 tm *ltm = localtime(&now);
					 this->event_helper->Text = L"��������� �������: " + Convert::ToString(ltm->tm_hour)+ L":" + Convert::ToString(ltm->tm_min)+ L":" + Convert::ToString(ltm->tm_sec) + L" " + L"���� ������ �� ���� ������ �� ��� ����. �������� " + Convert::ToString(poteri) + L" ��. �����.";
				 }
				 else //������ �����������
				 {
					derevn.Add_rand_krest(); //���������� ������ ���������� �����������
					time_t now = time(0); //��� ������ �������
					tm *ltm = localtime(&now);
					int koo =  derevn.get_kolvo_krest() - 1; //�������� ����� ���������� �����������
					string str_name= derevn.krests[koo].get_name() + " " + derevn.krests[koo].get_surname(); //��� ������ ����� � �������
					this->event_helper->Text = L"��������� �������: " + Convert::ToString(ltm->tm_hour)+ L":" + Convert::ToString(ltm->tm_min)+ L":" + Convert::ToString(ltm->tm_sec) + L" " + L"���������� " + gcnew System::String(str_name.c_str()) + L" ����� �� ���� � ������������� � ���.";
				 }
			 }

			 //����� ���������� � �������
			 this->kolvo_krest_text->Text = L"���������: " + Convert::ToString(derevn.get_kolvo_krest())+ L" ���.";;
			 this->skorost_zhiz_text->Text = L"�������� �����: " + Convert::ToString(derevn.get_speed_life());
			 this->den_procv_text->Text = L"��� �����������: " + Convert::ToString(derevn.get_days_procv());
			 this->budget_text->Text = L"������: " + Convert::ToString(derevn.get_budget_village()) + L" ���.";
			 this->hleb_text->Text = L"����: " + Convert::ToString(derevn.get_kolvo_hleb()) + L" ��.";
			 this->skot_text->Text = L"�������� ����: " + Convert::ToString(derevn.get_kolvo_skot()) + L" ��.";
			 if(derevn.get_flag_season()==0)
				this->time_helper->Text = L"�� ����� ���� �������� " + Convert::ToString(40 -(derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())) + L" ����� �����������.";
			 if(derevn.get_flag_season()==1)
				this->time_helper->Text = L"�� ����� ���� �������� " + Convert::ToString(20 -(derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())) + L" ����� �����������.";
		 }
private: System::Void timer_refresh_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //����� ���������� � �������
			 this->kolvo_krest_text->Text = L"���������: " + Convert::ToString(derevn.get_kolvo_krest())+ L" ���.";;
			 this->skorost_zhiz_text->Text = L"�������� �����: " + Convert::ToString(derevn.get_speed_life());
			 this->den_procv_text->Text = L"��� �����������: " + Convert::ToString(derevn.get_days_procv());
			 this->budget_text->Text = L"������: " + Convert::ToString(derevn.get_budget_village()) + L" ���.";
			 this->hleb_text->Text = L"����: " + Convert::ToString(derevn.get_kolvo_hleb()) + L" ��.";
			 this->skot_text->Text = L"�������� ����: " + Convert::ToString(derevn.get_kolvo_skot()) + L" ��.";
			 if(derevn.get_flag_season()==0)
				this->time_helper->Text = L"�� ����� ���� �������� " + Convert::ToString(40 -(derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())) + L" ����� �����������.";
			 if(derevn.get_flag_season()==1)
				this->time_helper->Text = L"�� ����� ���� �������� " + Convert::ToString(20 -(derevn.get_hours_procv() - derevn.get_hours_from_begin_of_season())) + L" ����� �����������.";
		 }
private: System::Void save_game_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			 derevn.Save_game(); //��������� ���� � ����
			 this->save_complete->Visible = true; //�������� ������� �� �������� ����������
		 }
};
}
