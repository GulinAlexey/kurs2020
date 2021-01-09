#pragma once
#include "krest_and_village.h"
#include "tabl_naim.h"
#include <string>

extern int f_endgame; //флаг о том, что игра окончена (игрок проиграл) (глобальн.)

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для record_tabl
	/// </summary>
	public ref class record_tabl : public System::Windows::Forms::Form
	{
	public:
		record_tabl(void)
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
		~record_tabl()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::DataGridView^  spisok;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^  number_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proizv_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  prozhorl_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rashod_tabl;



	private: System::ComponentModel::IContainer^  components;











	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(record_tabl::typeid));
			this->spisok = (gcnew System::Windows::Forms::DataGridView());
			this->number_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proizv_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prozhorl_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rashod_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spisok))->BeginInit();
			this->SuspendLayout();
			// 
			// spisok
			// 
			this->spisok->AllowUserToAddRows = false;
			this->spisok->AllowUserToDeleteRows = false;
			this->spisok->AllowUserToResizeColumns = false;
			this->spisok->AllowUserToResizeRows = false;
			this->spisok->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->spisok->BackgroundColor = System::Drawing::Color::Maroon;
			this->spisok->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->spisok->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->spisok->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->number_tabl, this->name_tabl, 
				this->proizv_tabl, this->prozhorl_tabl, this->rashod_tabl});
			this->spisok->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->spisok->Location = System::Drawing::Point(12, 12);
			this->spisok->MultiSelect = false;
			this->spisok->Name = L"spisok";
			this->spisok->ReadOnly = true;
			this->spisok->RowHeadersVisible = false;
			this->spisok->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->spisok->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->spisok->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->spisok->ShowEditingIcon = false;
			this->spisok->Size = System::Drawing::Size(850, 467);
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
			// record_tabl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(874, 491);
			this->Controls->Add(this->spisok);
			this->DoubleBuffered = true;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(890, 530);
			this->Name = L"record_tabl";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Список рекордов";
			this->Activated += gcnew System::EventHandler(this, &record_tabl::record_tabl_Activated);
			this->Load += gcnew System::EventHandler(this, &record_tabl::record_tabl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spisok))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void record_tabl_Activated(System::Object^  sender, System::EventArgs^  e) {
		if(f_endgame==1) //игра закончилась, закрыть все формы
				 Close();
		else
		{
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
				spisok->Rows[num]->Cells[3]->Value = Convert::ToString(derevn.krests[num].get_eda_hleb()*derevn.get_speed_life()) + L"/" + Convert::ToString(derevn.krests[num].get_eda_skot()*derevn.get_speed_life());
				spisok->Rows[num]->Cells[4]->Value = Convert::ToString(derevn.krests[num].get_money_trat()*derevn.get_speed_life());
			}
		}

		}

private: System::Void num_krest_pole1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void izgnat_butt_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void record_tabl_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void trud_butt_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer_proverk_krest_Tick(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
