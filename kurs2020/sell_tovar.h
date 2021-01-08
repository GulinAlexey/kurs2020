#pragma once
#include "krest_and_village.h"

extern int f_endgame; //���� � ���, ��� ���� �������� (����� ��������) (��������.)

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� sell_tovar
	/// </summary>
	public ref class sell_tovar : public System::Windows::Forms::Form
	{
	public:
		sell_tovar(void)
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
		~sell_tovar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  price_hleb_text;
	private: System::Windows::Forms::Label^  price_skot_text;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  num_sell;



	private: System::Windows::Forms::Button^  sell_butt;
	private: System::Windows::Forms::GroupBox^  hleb_or_skot;
	private: System::Windows::Forms::RadioButton^  skot_radio;
	private: System::Windows::Forms::RadioButton^  hleb_radio;
	private: System::Windows::Forms::Timer^  timer_proverka;
	private: System::ComponentModel::IContainer^  components;



	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sell_tovar::typeid));
			this->price_hleb_text = (gcnew System::Windows::Forms::Label());
			this->price_skot_text = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->num_sell = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sell_butt = (gcnew System::Windows::Forms::Button());
			this->hleb_or_skot = (gcnew System::Windows::Forms::GroupBox());
			this->skot_radio = (gcnew System::Windows::Forms::RadioButton());
			this->hleb_radio = (gcnew System::Windows::Forms::RadioButton());
			this->timer_proverka = (gcnew System::Windows::Forms::Timer(this->components));
			this->hleb_or_skot->SuspendLayout();
			this->SuspendLayout();
			// 
			// price_hleb_text
			// 
			this->price_hleb_text->AutoSize = true;
			this->price_hleb_text->BackColor = System::Drawing::SystemColors::Control;
			this->price_hleb_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->price_hleb_text->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->price_hleb_text->Location = System::Drawing::Point(23, 55);
			this->price_hleb_text->Name = L"price_hleb_text";
			this->price_hleb_text->Size = System::Drawing::Size(355, 33);
			this->price_hleb_text->TabIndex = 2;
			this->price_hleb_text->Text = L"������� ���� �� ��. �����:";
			// 
			// price_skot_text
			// 
			this->price_skot_text->AutoSize = true;
			this->price_skot_text->BackColor = System::Drawing::SystemColors::Control;
			this->price_skot_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->price_skot_text->Font = (gcnew System::Drawing::Font(L"Georgia", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->price_skot_text->Location = System::Drawing::Point(23, 115);
			this->price_skot_text->Name = L"price_skot_text";
			this->price_skot_text->Size = System::Drawing::Size(402, 33);
			this->price_skot_text->TabIndex = 3;
			this->price_skot_text->Text = L"������� ���� �� ������ �����:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(41, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(283, 34);
			this->label2->TabIndex = 16;
			this->label2->Text = L"������� ��������, ��.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// num_sell
			// 
			this->num_sell->Location = System::Drawing::Point(41, 242);
			this->num_sell->Mask = L"000000000000000000000000000000000000000000000";
			this->num_sell->Name = L"num_sell";
			this->num_sell->PromptChar = ' ';
			this->num_sell->Size = System::Drawing::Size(283, 20);
			this->num_sell->TabIndex = 18;
			this->num_sell->TabStop = false;
			this->num_sell->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_sell->TextChanged += gcnew System::EventHandler(this, &sell_tovar::num_sell_TextChanged);
			// 
			// sell_butt
			// 
			this->sell_butt->Enabled = false;
			this->sell_butt->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->sell_butt->Location = System::Drawing::Point(124, 280);
			this->sell_butt->Name = L"sell_butt";
			this->sell_butt->Size = System::Drawing::Size(119, 28);
			this->sell_butt->TabIndex = 20;
			this->sell_butt->TabStop = false;
			this->sell_butt->Text = L"�������";
			this->sell_butt->UseVisualStyleBackColor = true;
			this->sell_butt->Click += gcnew System::EventHandler(this, &sell_tovar::sell_butt_Click);
			// 
			// hleb_or_skot
			// 
			this->hleb_or_skot->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"hleb_or_skot.BackgroundImage")));
			this->hleb_or_skot->Controls->Add(this->skot_radio);
			this->hleb_or_skot->Controls->Add(this->hleb_radio);
			this->hleb_or_skot->Location = System::Drawing::Point(366, 195);
			this->hleb_or_skot->Name = L"hleb_or_skot";
			this->hleb_or_skot->Size = System::Drawing::Size(165, 113);
			this->hleb_or_skot->TabIndex = 21;
			this->hleb_or_skot->TabStop = false;
			// 
			// skot_radio
			// 
			this->skot_radio->AutoSize = true;
			this->skot_radio->BackColor = System::Drawing::Color::Transparent;
			this->skot_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->skot_radio->Location = System::Drawing::Point(16, 66);
			this->skot_radio->Name = L"skot_radio";
			this->skot_radio->Size = System::Drawing::Size(137, 22);
			this->skot_radio->TabIndex = 1;
			this->skot_radio->Text = L"�������� ����";
			this->skot_radio->UseVisualStyleBackColor = false;
			this->skot_radio->CheckedChanged += gcnew System::EventHandler(this, &sell_tovar::skot_radio_CheckedChanged);
			// 
			// hleb_radio
			// 
			this->hleb_radio->AutoSize = true;
			this->hleb_radio->BackColor = System::Drawing::Color::Transparent;
			this->hleb_radio->Checked = true;
			this->hleb_radio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->hleb_radio->Location = System::Drawing::Point(16, 29);
			this->hleb_radio->Name = L"hleb_radio";
			this->hleb_radio->Size = System::Drawing::Size(62, 22);
			this->hleb_radio->TabIndex = 0;
			this->hleb_radio->TabStop = true;
			this->hleb_radio->Text = L"����";
			this->hleb_radio->UseVisualStyleBackColor = false;
			// 
			// timer_proverka
			// 
			this->timer_proverka->Enabled = true;
			this->timer_proverka->Interval = 2000;
			this->timer_proverka->Tick += gcnew System::EventHandler(this, &sell_tovar::timer_proverka_Tick);
			// 
			// sell_tovar
			// 
			this->AcceptButton = this->sell_butt;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(571, 371);
			this->Controls->Add(this->hleb_or_skot);
			this->Controls->Add(this->sell_butt);
			this->Controls->Add(this->num_sell);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->price_skot_text);
			this->Controls->Add(this->price_hleb_text);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(587, 410);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(587, 410);
			this->Name = L"sell_tovar";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� �����";
			this->Activated += gcnew System::EventHandler(this, &sell_tovar::sell_tovar_Activated);
			this->hleb_or_skot->ResumeLayout(false);
			this->hleb_or_skot->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void num_sell_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int zapas_hleb=derevn.get_kolvo_hleb(); //�������� ���-�� ����� � �������
			 int zapas_skot=derevn.get_kolvo_skot(); //�������� ���-�� ����� � �������
			 if (this->num_sell->Text!=L"") //���� ���� � ������� ������ �� ������
			 {
				 if(this->hleb_radio->Checked == true) //���� ������ ���� ��� �������
				 {
					 if((Convert::ToDouble(this->num_sell->Text) > derevn.get_kolvo_hleb()) || (Convert::ToDouble(this->num_sell->Text) <= 0))
					 {
						 this->sell_butt->Enabled = false;
					 }
					 else
					 {
						 this->sell_butt->Enabled = true;
					 }
				 }
				 if(this->skot_radio->Checked == true) //���� ������ ���� ��� �������
				 {
					 if((Convert::ToDouble(this->num_sell->Text) > derevn.get_kolvo_skot()) || (Convert::ToDouble(this->num_sell->Text) <= 0))
					 {
						 this->sell_butt->Enabled = false;
					 }
					 else
					 {
						 this->sell_butt->Enabled = true;
					 }
				 }
			 }
			 else
				 this->sell_butt->Enabled = false;
		 }
private: System::Void sell_tovar_Activated(System::Object^  sender, System::EventArgs^  e) {
			 this->price_hleb_text->Text = L"������� ���� �� ��. �����: " + Convert::ToString(derevn.get_price_hleb()) + L" ���.";
			 this->price_skot_text->Text = L"������� ���� �� ������ �����: " + Convert::ToString(derevn.get_price_skot()) + L" ���.";

		 }
private: System::Void skot_radio_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 num_sell_TextChanged(sender, e);
		 }
private: System::Void sell_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->hleb_radio->Checked == true) //���� ������ ���� ��� �������
			 {
				 derevn.set_kolvo_hleb(derevn.get_kolvo_hleb()-Convert::ToDouble(this->num_sell->Text)); //������� ��������� ���-�� ����� �� �������� �������
				 derevn.set_budget_village(derevn.get_budget_village()+Convert::ToDouble(this->num_sell->Text)*derevn.get_price_hleb()); //��������� ������ �� �������

			 }
			 if(this->skot_radio->Checked == true) //���� ������ ���� ��� �������
			 {
				 derevn.set_kolvo_skot(derevn.get_kolvo_skot()-Convert::ToDouble(this->num_sell->Text)); //������� ��������� ���-�� ����� �� �������� �������
				 derevn.set_budget_village(derevn.get_budget_village()+Convert::ToDouble(this->num_sell->Text)*derevn.get_price_skot()); //��������� ������ �� �������
			 }
			 num_sell_TextChanged(sender, e);
		 }
private: System::Void timer_proverka_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(f_endgame==1) //���� �����������, ������� ��� �����
				 Close();
			 else
			 {
				num_sell_TextChanged(sender, e); //��������� ��������
				sell_tovar_Activated(sender,e); //�������� �������
			 }
		 }
};
}
