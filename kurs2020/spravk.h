#pragma once

extern int f_endgame; //���� � ���, ��� ���� �������� (����� ��������) (��������.)

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� spravk
	/// </summary>
	public ref class spravk : public System::Windows::Forms::Form
	{
	public:
		spravk(void)
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
		~spravk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  spravka_info;
	protected: 
	private: System::Windows::Forms::Button^  cloz;
	private: System::Windows::Forms::Timer^  timer_endgame;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(spravk::typeid));
			this->spravka_info = (gcnew System::Windows::Forms::TextBox());
			this->cloz = (gcnew System::Windows::Forms::Button());
			this->timer_endgame = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// spravka_info
			// 
			this->spravka_info->Location = System::Drawing::Point(12, 12);
			this->spravka_info->Multiline = true;
			this->spravka_info->Name = L"spravka_info";
			this->spravka_info->ReadOnly = true;
			this->spravka_info->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->spravka_info->Size = System::Drawing::Size(311, 326);
			this->spravka_info->TabIndex = 0;
			this->spravka_info->TabStop = false;
			this->spravka_info->Text = L"���������� �� ����. �����: ����� �������, ��-92.";
			this->spravka_info->TextChanged += gcnew System::EventHandler(this, &spravk::spravka_info_TextChanged);
			// 
			// cloz
			// 
			this->cloz->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cloz->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cloz->Location = System::Drawing::Point(12, 344);
			this->cloz->Name = L"cloz";
			this->cloz->Size = System::Drawing::Size(311, 23);
			this->cloz->TabIndex = 1;
			this->cloz->Text = L"�������";
			this->cloz->UseVisualStyleBackColor = true;
			this->cloz->Click += gcnew System::EventHandler(this, &spravk::cloz_Click);
			// 
			// timer_endgame
			// 
			this->timer_endgame->Enabled = true;
			this->timer_endgame->Interval = 1003;
			this->timer_endgame->Tick += gcnew System::EventHandler(this, &spravk::timer_endgame_Tick);
			// 
			// spravk
			// 
			this->AcceptButton = this->cloz;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->cloz;
			this->ClientSize = System::Drawing::Size(335, 373);
			this->Controls->Add(this->cloz);
			this->Controls->Add(this->spravka_info);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(351, 412);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(351, 412);
			this->Name = L"spravk";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cloz_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	private: System::Void spravka_info_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void timer_endgame_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(f_endgame==1) //���� �����������, ������� ��� �����
				 Close();
			 }
};
}
