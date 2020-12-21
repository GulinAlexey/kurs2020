#pragma once
#include "krest_and_village.h"
#include "tabl_naim.h"
#include <string>

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для tabl_krest
	/// </summary>
	public ref class tabl_krest : public System::Windows::Forms::Form
	{
	public:
		tabl_krest(void)
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
		~tabl_krest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  trud_butt;
	private: System::Windows::Forms::Button^  izgnat_butt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  izgnat_box;
	private: System::Windows::Forms::DataGridView^  spisok;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  number_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proizv_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  prozhorl_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rashod_tabl;
	private: System::Windows::Forms::MaskedTextBox^  num_krest_pole;
	private: System::Windows::Forms::Label^  label3;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(tabl_krest::typeid));
			this->trud_butt = (gcnew System::Windows::Forms::Button());
			this->izgnat_butt = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->izgnat_box = (gcnew System::Windows::Forms::GroupBox());
			this->num_krest_pole = (gcnew System::Windows::Forms::MaskedTextBox());
			this->spisok = (gcnew System::Windows::Forms::DataGridView());
			this->number_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proizv_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prozhorl_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rashod_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->izgnat_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spisok))->BeginInit();
			this->SuspendLayout();
			// 
			// trud_butt
			// 
			this->trud_butt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->trud_butt->Font = (gcnew System::Drawing::Font(L"DejaVu Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->trud_butt->Location = System::Drawing::Point(16, 22);
			this->trud_butt->Name = L"trud_butt";
			this->trud_butt->Size = System::Drawing::Size(254, 35);
			this->trud_butt->TabIndex = 9;
			this->trud_butt->TabStop = false;
			this->trud_butt->Text = L"открыть биржу труда";
			this->trud_butt->UseVisualStyleBackColor = true;
			this->trud_butt->Click += gcnew System::EventHandler(this, &tabl_krest::trud_butt_Click);
			// 
			// izgnat_butt
			// 
			this->izgnat_butt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->izgnat_butt->Enabled = false;
			this->izgnat_butt->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->izgnat_butt->Location = System::Drawing::Point(311, 34);
			this->izgnat_butt->Name = L"izgnat_butt";
			this->izgnat_butt->Size = System::Drawing::Size(103, 28);
			this->izgnat_butt->TabIndex = 10;
			this->izgnat_butt->TabStop = false;
			this->izgnat_butt->Text = L"Изгнать";
			this->izgnat_butt->UseVisualStyleBackColor = true;
			this->izgnat_butt->Click += gcnew System::EventHandler(this, &tabl_krest::izgnat_butt_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Введите номер крестьянина, которого хотите изгнать:";
			// 
			// izgnat_box
			// 
			this->izgnat_box->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->izgnat_box->Controls->Add(this->num_krest_pole);
			this->izgnat_box->Controls->Add(this->label1);
			this->izgnat_box->Controls->Add(this->izgnat_butt);
			this->izgnat_box->Location = System::Drawing::Point(423, 12);
			this->izgnat_box->Name = L"izgnat_box";
			this->izgnat_box->Size = System::Drawing::Size(428, 87);
			this->izgnat_box->TabIndex = 13;
			this->izgnat_box->TabStop = false;
			// 
			// num_krest_pole
			// 
			this->num_krest_pole->Location = System::Drawing::Point(22, 39);
			this->num_krest_pole->Mask = L"000000000000000000000000000000000000000000000";
			this->num_krest_pole->Name = L"num_krest_pole";
			this->num_krest_pole->PromptChar = ' ';
			this->num_krest_pole->Size = System::Drawing::Size(283, 20);
			this->num_krest_pole->TabIndex = 16;
			this->num_krest_pole->TabStop = false;
			this->num_krest_pole->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->num_krest_pole->TextChanged += gcnew System::EventHandler(this, &tabl_krest::num_krest_pole1_TextChanged);
			// 
			// spisok
			// 
			this->spisok->AllowUserToAddRows = false;
			this->spisok->AllowUserToDeleteRows = false;
			this->spisok->AllowUserToResizeColumns = false;
			this->spisok->AllowUserToResizeRows = false;
			this->spisok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->spisok->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->spisok->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->spisok->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->number_tabl, this->name_tabl, 
				this->proizv_tabl, this->prozhorl_tabl, this->rashod_tabl});
			this->spisok->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->spisok->Location = System::Drawing::Point(12, 117);
			this->spisok->MultiSelect = false;
			this->spisok->Name = L"spisok";
			this->spisok->ReadOnly = true;
			this->spisok->RowHeadersVisible = false;
			this->spisok->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->spisok->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->spisok->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->spisok->ShowEditingIcon = false;
			this->spisok->Size = System::Drawing::Size(850, 362);
			this->spisok->TabIndex = 14;
			this->spisok->TabStop = false;
			// 
			// number_tabl
			// 
			this->number_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->number_tabl->Frozen = true;
			this->number_tabl->HeaderText = L"№";
			this->number_tabl->Name = L"number_tabl";
			this->number_tabl->ReadOnly = true;
			this->number_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->number_tabl->Width = 50;
			// 
			// name_tabl
			// 
			this->name_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->name_tabl->Frozen = true;
			this->name_tabl->HeaderText = L"Имя и фамилия";
			this->name_tabl->Name = L"name_tabl";
			this->name_tabl->ReadOnly = true;
			this->name_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->name_tabl->Width = 195;
			// 
			// proizv_tabl
			// 
			this->proizv_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->proizv_tabl->Frozen = true;
			this->proizv_tabl->HeaderText = L"Производительность за один Час Процветания (хлеб/скот)";
			this->proizv_tabl->Name = L"proizv_tabl";
			this->proizv_tabl->ReadOnly = true;
			this->proizv_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->proizv_tabl->Width = 200;
			// 
			// prozhorl_tabl
			// 
			this->prozhorl_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->prozhorl_tabl->Frozen = true;
			this->prozhorl_tabl->HeaderText = L"Прожорливость за один Час Процветания (хлеб/скот)";
			this->prozhorl_tabl->Name = L"prozhorl_tabl";
			this->prozhorl_tabl->ReadOnly = true;
			this->prozhorl_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->prozhorl_tabl->Width = 200;
			// 
			// rashod_tabl
			// 
			this->rashod_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->rashod_tabl->Frozen = true;
			this->rashod_tabl->HeaderText = L"Денежные расходы за один Час Процветания (руб.)";
			this->rashod_tabl->Name = L"rashod_tabl";
			this->rashod_tabl->ReadOnly = true;
			this->rashod_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->rashod_tabl->Width = 200;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 21);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Ваши крестьяне:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 2);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(377, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Примечание: информация выводится с учётом текущей Скорости жизни";
			// 
			// tabl_krest
			// 
			this->AcceptButton = this->izgnat_butt;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(874, 491);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->spisok);
			this->Controls->Add(this->izgnat_box);
			this->Controls->Add(this->trud_butt);
			this->DoubleBuffered = true;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(890, 530);
			this->Name = L"tabl_krest";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Список крестьян";
			this->Activated += gcnew System::EventHandler(this, &tabl_krest::tabl_krest_Activated);
			this->Load += gcnew System::EventHandler(this, &tabl_krest::tabl_krest_Load);
			this->izgnat_box->ResumeLayout(false);
			this->izgnat_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spisok))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tabl_krest_Activated(System::Object^  sender, System::EventArgs^  e) {
		//очистить все строки перед выводом
		while (0 != spisok->RowCount)
			spisok->Rows->RemoveAt(0);

		int kolvo_str=derevn.get_kolvo_krest(); //получить кол-во крестьян в списке
		for(int num=0; num<kolvo_str; num++)
		{
			spisok->Rows->Add(); //добавить новую строку в таблицу
			spisok->Rows[num]->Cells[0]->Value = Convert::ToString(num+1); //записать порядковый номер крестьянина
			string str_name= derevn.krests[num].get_name() + " " + derevn.krests[num].get_surname();
			spisok->Rows[num]->Cells[1]->Value = gcnew System::String(str_name.c_str()); //внести в ячейку таблицы
			spisok->Rows[num]->Cells[2]->Value = Convert::ToString(derevn.krests[num].get_proizv_hleb()) + L"/" + Convert::ToString(derevn.krests[num].get_proizv_skot());
			spisok->Rows[num]->Cells[3]->Value = Convert::ToString(derevn.krests[num].get_eda_hleb()) + L"/" + Convert::ToString(derevn.krests[num].get_eda_skot());
			spisok->Rows[num]->Cells[4]->Value = Convert::ToString(derevn.krests[num].get_money_trat());
		}

		}

private: System::Void num_krest_pole1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			int kolvo_strr=derevn.get_kolvo_krest(); //получить кол-во крестьян в списке
			if (this->num_krest_pole->Text!=L"") //если поле с номером строки не пустое
			{
				if((Convert::ToDouble(this->num_krest_pole->Text) > kolvo_strr) || (Convert::ToDouble(this->num_krest_pole->Text)<1)) //если выбр. строка больше общего кол-ва строк, то отключить кнопку
				{
					this->izgnat_butt->Enabled = false;
				}
				else
					this->izgnat_butt->Enabled = true;
			}
			else
				this->izgnat_butt->Enabled = false;
		 }
private: System::Void izgnat_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			 derevn.Delete_krest(Convert::ToDouble(this->num_krest_pole->Text)); //удалить крестьянина
			 tabl_krest_Activated(sender,e); //обновить таблицу
		 }
private: System::Void tabl_krest_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void trud_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			tabl_naim^ tabl_naim_p = gcnew tabl_naim(); //указатель на форму
			tabl_naim_p -> ShowDialog(); //открыть форму
		 }
};
}
