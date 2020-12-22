#pragma once
#include "krest_and_village.h"
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
	/// Сводка для tabl_naim
	/// </summary>
	public ref class tabl_naim : public System::Windows::Forms::Form
	{
	public:
		tabl_naim(void)
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
		~tabl_naim()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  naim_butt;
	protected: 



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  naim_box;

	private: System::Windows::Forms::DataGridView^  spisok;


	private: System::Windows::Forms::Label^  label2;





	private: System::Windows::Forms::MaskedTextBox^  num_krest_pole;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  number_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proizv_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  prozhorl_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rashod_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  naim_money_tabl;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Timer^  timer_proverk_krest;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(tabl_naim::typeid));
			this->naim_butt = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->naim_box = (gcnew System::Windows::Forms::GroupBox());
			this->num_krest_pole = (gcnew System::Windows::Forms::MaskedTextBox());
			this->spisok = (gcnew System::Windows::Forms::DataGridView());
			this->number_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proizv_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prozhorl_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rashod_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->naim_money_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer_proverk_krest = (gcnew System::Windows::Forms::Timer(this->components));
			this->naim_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spisok))->BeginInit();
			this->SuspendLayout();
			// 
			// naim_butt
			// 
			this->naim_butt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->naim_butt->Enabled = false;
			this->naim_butt->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->naim_butt->Location = System::Drawing::Point(311, 34);
			this->naim_butt->Name = L"naim_butt";
			this->naim_butt->Size = System::Drawing::Size(103, 28);
			this->naim_butt->TabIndex = 10;
			this->naim_butt->TabStop = false;
			this->naim_butt->Text = L"Нанять";
			this->naim_butt->UseVisualStyleBackColor = true;
			this->naim_butt->Click += gcnew System::EventHandler(this, &tabl_naim::naim_butt_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Введите номер крестьянина, которого хотите нанять:";
			// 
			// naim_box
			// 
			this->naim_box->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->naim_box->Controls->Add(this->num_krest_pole);
			this->naim_box->Controls->Add(this->label1);
			this->naim_box->Controls->Add(this->naim_butt);
			this->naim_box->Location = System::Drawing::Point(423, 12);
			this->naim_box->Name = L"naim_box";
			this->naim_box->Size = System::Drawing::Size(428, 87);
			this->naim_box->TabIndex = 13;
			this->naim_box->TabStop = false;
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
			this->num_krest_pole->TextChanged += gcnew System::EventHandler(this, &tabl_naim::num_krest_pole1_TextChanged);
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
			this->spisok->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->number_tabl, this->name_tabl, 
				this->proizv_tabl, this->prozhorl_tabl, this->rashod_tabl, this->naim_money_tabl});
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
			this->spisok->Size = System::Drawing::Size(850, 242);
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
			this->number_tabl->Width = 40;
			// 
			// name_tabl
			// 
			this->name_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->name_tabl->Frozen = true;
			this->name_tabl->HeaderText = L"Имя и фамилия";
			this->name_tabl->Name = L"name_tabl";
			this->name_tabl->ReadOnly = true;
			this->name_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->name_tabl->Width = 180;
			// 
			// proizv_tabl
			// 
			this->proizv_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->proizv_tabl->Frozen = true;
			this->proizv_tabl->HeaderText = L"Производительность за один Час Процветания (хлеб/скот)";
			this->proizv_tabl->Name = L"proizv_tabl";
			this->proizv_tabl->ReadOnly = true;
			this->proizv_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->proizv_tabl->Width = 180;
			// 
			// prozhorl_tabl
			// 
			this->prozhorl_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->prozhorl_tabl->Frozen = true;
			this->prozhorl_tabl->HeaderText = L"Прожорливость за один Час Процветания (хлеб/скот)";
			this->prozhorl_tabl->Name = L"prozhorl_tabl";
			this->prozhorl_tabl->ReadOnly = true;
			this->prozhorl_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->prozhorl_tabl->Width = 177;
			// 
			// rashod_tabl
			// 
			this->rashod_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->rashod_tabl->Frozen = true;
			this->rashod_tabl->HeaderText = L"Денежные расходы за один Час Процветания (руб.)";
			this->rashod_tabl->Name = L"rashod_tabl";
			this->rashod_tabl->ReadOnly = true;
			this->rashod_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->rashod_tabl->Width = 177;
			// 
			// naim_money_tabl
			// 
			this->naim_money_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->naim_money_tabl->Frozen = true;
			this->naim_money_tabl->HeaderText = L"Стоимость найма (руб.)";
			this->naim_money_tabl->Name = L"naim_money_tabl";
			this->naim_money_tabl->ReadOnly = true;
			this->naim_money_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->naim_money_tabl->Width = 91;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(400, 21);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Доступные для найма крестьяне:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 2);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(377, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Примечание: информация выводится с учётом текущей Скорости жизни";
			// 
			// timer_proverk_krest
			// 
			this->timer_proverk_krest->Enabled = true;
			this->timer_proverk_krest->Interval = 2000;
			this->timer_proverk_krest->Tick += gcnew System::EventHandler(this, &tabl_naim::timer_proverk_krest_Tick);
			// 
			// tabl_naim
			// 
			this->AcceptButton = this->naim_butt;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(874, 371);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->spisok);
			this->Controls->Add(this->naim_box);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(890, 410);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(890, 410);
			this->Name = L"tabl_naim";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Биржа труда";
			this->Activated += gcnew System::EventHandler(this, &tabl_naim::tabl_naim_Activated);
			this->Load += gcnew System::EventHandler(this, &tabl_naim::tabl_naim_Load);
			this->naim_box->ResumeLayout(false);
			this->naim_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spisok))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tabl_naim_Activated(System::Object^  sender, System::EventArgs^  e) {
		if(f_endgame==1) //игра закончилась, закрыть все формы
				 Close();
		else
		{
			//очистить все строки перед выводом
			while (0 != spisok->RowCount)
				spisok->Rows->RemoveAt(0);

			int kolvo_str=birzh_trud.get_kolvo_krest(); //получить кол-во крестьян в списке
			for(int num=0; num<kolvo_str; num++)
			{
				spisok->Rows->Add(); //добавить новую строку в таблицу
				spisok->Rows[num]->Cells[0]->Value = Convert::ToString(num+1); //записать порядковый номер крестьянина
				string str_name= birzh_trud.krests[num].get_name() + " " + birzh_trud.krests[num].get_surname();
				spisok->Rows[num]->Cells[1]->Value = gcnew System::String(str_name.c_str()); //внести в ячейку таблицы
				spisok->Rows[num]->Cells[2]->Value = Convert::ToString(birzh_trud.krests[num].get_proizv_hleb()) + L"/" + Convert::ToString(birzh_trud.krests[num].get_proizv_skot());
				spisok->Rows[num]->Cells[3]->Value = Convert::ToString(birzh_trud.krests[num].get_eda_hleb()*derevn.get_speed_life()) + L"/" + Convert::ToString(birzh_trud.krests[num].get_eda_skot()*derevn.get_speed_life());
				spisok->Rows[num]->Cells[4]->Value = Convert::ToString(birzh_trud.krests[num].get_money_trat()*derevn.get_speed_life());
				spisok->Rows[num]->Cells[5]->Value = Convert::ToString(birzh_trud.krests[num].get_naim());
			}

		}

		}

private: System::Void num_krest_pole1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			int kolvo_strr=birzh_trud.get_kolvo_krest(); //получить кол-во крестьян в списке
			if (this->num_krest_pole->Text!=L"") //если поле с номером строки не пустое
			{
				int nummk = Convert::ToDouble(this->num_krest_pole->Text); //номер выбранного крестьянина
				if((nummk > kolvo_strr) || (nummk<1)) //если выбр. строка больше общего кол-ва строк, то отключить кнопку
				{
					this->naim_butt->Enabled = false;
				}
				else
					this->naim_butt->Enabled = true;

				if((derevn.get_budget_village()-birzh_trud.krests[nummk-1].get_naim())<0)
					this->naim_butt->Enabled = false;
			}
			else
				this->naim_butt->Enabled = false;
			if(derevn.get_flag_season()==1) //если зима, закрыть форму
			{
				Close();
			}
		 }
private: System::Void naim_butt_Click(System::Object^  sender, System::EventArgs^  e) {
			 int nummk = Convert::ToDouble(this->num_krest_pole->Text); //номер выбранного крестьянина
			 derevn.set_budget_village(derevn.get_budget_village()-birzh_trud.krests[nummk-1].get_naim());
			 derevn.Naim_krest(birzh_trud, nummk);
			 birzh_trud.Delete_krest(nummk); //крестьянин перешёл из одного массива в другой. Из начального массива он удаляется
			 num_krest_pole1_TextChanged(sender,e); //повторная проверка
			 tabl_naim_Activated(sender,e); //обновить таблицу
		 }
private: System::Void tabl_naim_Load(System::Object^  sender, System::EventArgs^  e) {
			if(derevn.get_flag_season()==1) //если зима, закрыть форму
			{
				Close();
			}
			if(birzh_trud.krests!=0)
			{
				delete [] birzh_trud.krests;
			}
			birzh_trud.krests = new Krest[5]; //массив крестьян для найма
			birzh_trud.set_kolvo_krest(5);
			for(int v=0; v<5; v++)
			{
				birzh_trud.krests[v].Init_rand();
			}
		 }
private: System::Void timer_proverk_krest_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(f_endgame==1) //игра закончилась, закрыть все формы
				 Close();
			 else
			 {
				num_krest_pole1_TextChanged(sender,e); //повторная проверка
				if(derevn.get_flag_season()==0) //таблицу обновлять только летом
				{
					tabl_naim_Activated(sender,e); //обновить таблицу
				}
			 }
		 }
};
}
