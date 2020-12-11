#pragma once

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
			this->SuspendLayout();
			// 
			// igra_menu_text
			// 
			this->igra_menu_text->BackColor = System::Drawing::Color::Transparent;
			this->igra_menu_text->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->igra_menu_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->igra_menu_text->Location = System::Drawing::Point(1, 24);
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
			this->glavn_menu_text->ForeColor = System::Drawing::Color::Purple;
			this->glavn_menu_text->Location = System::Drawing::Point(0, 53);
			this->glavn_menu_text->Name = L"glavn_menu_text";
			this->glavn_menu_text->Size = System::Drawing::Size(343, 44);
			this->glavn_menu_text->TabIndex = 1;
			this->glavn_menu_text->Text = L"Главное меню";
			this->glavn_menu_text->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->glavn_menu_text->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(346, 387);
			this->ControlBox = false;
			this->Controls->Add(this->glavn_menu_text);
			this->Controls->Add(this->igra_menu_text);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(362, 426);
			this->MinimumSize = System::Drawing::Size(362, 426);
			this->Name = L"Form1";
			this->RightToLeftLayout = true;
			this->Text = L"Главное меню";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}

