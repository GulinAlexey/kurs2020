#pragma once
#include "krest_and_village.h"
#include "tabl_naim.h"
#include <string>
#include <fstream>

extern int f_endgame; //���� � ���, ��� ���� �������� (����� ��������) (��������.)

namespace kurs2020 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� record_tabl
	/// </summary>
	public ref class record_tabl : public System::Windows::Forms::Form
	{
	public:
		record_tabl(void)
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
		~record_tabl()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::DataGridView^  spisok;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_tabl;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  proizv_tabl;














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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(record_tabl::typeid));
			this->spisok = (gcnew System::Windows::Forms::DataGridView());
			this->name_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->proizv_tabl = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->spisok->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->name_tabl, this->proizv_tabl});
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
			this->spisok->Size = System::Drawing::Size(503, 467);
			this->spisok->TabIndex = 14;
			this->spisok->TabStop = false;
			// 
			// name_tabl
			// 
			this->name_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->name_tabl->Frozen = true;
			this->name_tabl->HeaderText = L"��� ������";
			this->name_tabl->MaxInputLength = 200;
			this->name_tabl->Name = L"name_tabl";
			this->name_tabl->ReadOnly = true;
			this->name_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->name_tabl->Width = 170;
			// 
			// proizv_tabl
			// 
			this->proizv_tabl->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->proizv_tabl->Frozen = true;
			this->proizv_tabl->HeaderText = L"�������� ������� (���-�� ��������� ���� �����������)";
			this->proizv_tabl->MaxInputLength = 200;
			this->proizv_tabl->Name = L"proizv_tabl";
			this->proizv_tabl->ReadOnly = true;
			this->proizv_tabl->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->proizv_tabl->Width = 330;
			// 
			// record_tabl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(527, 491);
			this->Controls->Add(this->spisok);
			this->DoubleBuffered = true;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(543, 530);
			this->Name = L"record_tabl";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ ��������";
			this->Load += gcnew System::EventHandler(this, &record_tabl::record_tabl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->spisok))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void record_tabl_Activated(System::Object^  sender, System::EventArgs^  e) {

		}
private: System::Void record_tabl_Load(System::Object^  sender, System::EventArgs^  e) {
			 ifstream fin; //������� ������ ������ ifstream
			 fin.open("records.txt", ios::in); //������� ����
			 if(fin.is_open()) //���� ���� �������� �������
			 {
				int kolvo_rec=0; //��������� �������� ���-�� �������� � �����
				string strread; //������ ��� ������ �� �����
				while(!fin.eof()) //���� �� ��������� ���� ����
				{
					getline(fin, strread, '\n'); //�������� ������ �� �����
					kolvo_rec+=1; //��������� ���-�� �������� �� 1
				}
				kolvo_rec=kolvo_rec-1; //������� ������ ����� ���������� ������� �������������, ������� ����� �������
				fin.close(); //������� ����
				fin.open("records.txt", ios::in); //������� ����
				for(int g=0; g<kolvo_rec; g++)
				{
					spisok->Rows->Add(); //�������� ����� ������ � �������
					getline(fin, strread, ';'); //�������� ��� ������ �� �����
					spisok->Rows[g]->Cells[0]->Value = gcnew System::String(strread.c_str()); //������ � ������ �������
					getline(fin, strread, '\n'); //�������� �������� ������� ������ �� �����
					spisok->Rows[g]->Cells[1]->Value = gcnew System::String(strread.c_str()); //������ � ������ �������
				}
			 }
			 fin.close(); //������� ����
		 }
private: System::Void cloz_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
