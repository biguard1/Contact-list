#pragma once
#include "add_form.h"
#include "Structures.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class base : public System::Windows::Forms::Form
	{
	public: array<Contact^>^ contacts = gcnew array<Contact^>(0); //Массив контактов
	public:
		base(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			tableLayoutPanel2->Hide();
			if (IO::File::Exists(".\\Images\\upload30.bmp"))
			{
				this->load->Text = L"";
				this->load->Image = Image::FromFile(".\\Images\\upload30.bmp");
			}
			this->Icon = Icon->ExtractAssociatedIcon(Application::ExecutablePath);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~base()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^ Menu;
	private: System::Windows::Forms::Button^ add_contact;

	private: System::Windows::Forms::DataGridView^ dgv;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ load;

	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Forename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Patronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Menu = (gcnew System::Windows::Forms::Label());
			this->add_contact = (gcnew System::Windows::Forms::Button());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Forename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Patronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->load = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Gray;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->Menu, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->add_contact, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(126, 63);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// Menu
			// 
			this->Menu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Menu->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Menu->ForeColor = System::Drawing::Color::White;
			this->Menu->Location = System::Drawing::Point(3, 6);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(57, 57);
			this->Menu->TabIndex = 0;
			this->Menu->Text = L"📞";
			this->toolTip1->SetToolTip(this->Menu, L"Меню");
			this->Menu->Click += gcnew System::EventHandler(this, &base::Menu_Click);
			this->Menu->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &base::Menu_MouseDown);
			this->Menu->MouseEnter += gcnew System::EventHandler(this, &base::Menu_MouseEnter);
			this->Menu->MouseLeave += gcnew System::EventHandler(this, &base::Menu_MouseLeave);
			this->Menu->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &base::Menu_MouseUp);
			// 
			// add_contact
			// 
			this->add_contact->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->add_contact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_contact->FlatAppearance->BorderSize = 0;
			this->add_contact->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->add_contact->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->add_contact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_contact->ForeColor = System::Drawing::Color::White;
			this->add_contact->Location = System::Drawing::Point(66, 3);
			this->add_contact->Name = L"add_contact";
			this->add_contact->Size = System::Drawing::Size(57, 57);
			this->add_contact->TabIndex = 1;
			this->add_contact->Text = L"+";
			this->toolTip1->SetToolTip(this->add_contact, L"Добавление контакта");
			this->add_contact->UseVisualStyleBackColor = false;
			this->add_contact->Click += gcnew System::EventHandler(this, &base::add_contact_Click);
			// 
			// dgv
			// 
			this->dgv->AllowUserToAddRows = false;
			this->dgv->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Surname, this->Forename,
					this->Patronymic, this->Phone, this->Email
			});
			this->dgv->Cursor = System::Windows::Forms::Cursors::Default;
			this->dgv->Location = System::Drawing::Point(0, 62);
			this->dgv->Name = L"dgv";
			this->dgv->Size = System::Drawing::Size(585, 300);
			this->dgv->TabIndex = 1;
			this->dgv->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &base::dgv_CellEndEdit);
			this->dgv->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &base::dgv_EditingControlShowing);
			this->dgv->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &base::dgv_RowsRemoved);
			this->dgv->Sorted += gcnew System::EventHandler(this, &base::dgv_Sorted);
			// 
			// Surname
			// 
			this->Surname->HeaderText = L"Фамилия";
			this->Surname->Name = L"Surname";
			// 
			// Forename
			// 
			this->Forename->HeaderText = L"Имя";
			this->Forename->Name = L"Forename";
			// 
			// Patronymic
			// 
			this->Patronymic->HeaderText = L"Отчество";
			this->Patronymic->Name = L"Patronymic";
			// 
			// Phone
			// 
			this->Phone->HeaderText = L"Телефон";
			this->Phone->Name = L"Phone";
			// 
			// Email
			// 
			this->Email->HeaderText = L"E-Mail";
			this->Email->Name = L"Email";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::DimGray;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->Controls->Add(this->load, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->save, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 62);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(63, 126);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// load
			// 
			this->load->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->load->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->load->Cursor = System::Windows::Forms::Cursors::Hand;
			this->load->FlatAppearance->BorderSize = 0;
			this->load->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->load->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->load->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->load->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->load->ForeColor = System::Drawing::Color::White;
			this->load->Location = System::Drawing::Point(3, 66);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(57, 57);
			this->load->TabIndex = 2;
			this->load->Text = L"🗁";
			this->toolTip1->SetToolTip(this->load, L"Загрузка контакта");
			this->load->UseVisualStyleBackColor = false;
			this->load->Click += gcnew System::EventHandler(this, &base::load_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->save->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save->FlatAppearance->BorderSize = 0;
			this->save->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->save->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->ForeColor = System::Drawing::Color::White;
			this->save->Location = System::Drawing::Point(3, 3);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(57, 57);
			this->save->TabIndex = 1;
			this->save->Text = L"💾";
			this->toolTip1->SetToolTip(this->save, L"Сохранение контакта");
			this->save->UseVisualStyleBackColor = false;
			this->save->Click += gcnew System::EventHandler(this, &base::save_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Контакты (.contacts)|*.contacts";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Контакты (.contacts)|*.contacts";
			// 
			// base
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(600, 400);
			this->Name = L"base";
			this->Text = L"Contact list";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &base::base_FormClosing);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void save_file()
	{
		saveFileDialog1->FileName = "";
		saveFileDialog1->ShowDialog();
		if (saveFileDialog1->FileName->Length)
		{
			using namespace IO;
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			for (int i = 0; i != contacts->Length; i++)
			{
				sw->WriteLine(contacts[i]->surname + ";" +
					contacts[i]->name + ";" +
					contacts[i]->patronymic + ";" +
					contacts[i]->phone + ";" +
					contacts[i]->email);
			}
			sw->Close();
		}
	}
	//Добавление строки в список
	private: System::Void add_row(Contact^% contact)
	{
		dgv->Rows->Add();
		for (int i = 0; i != dgv->Columns->Count; i++)
		{
			if (dgv->Columns[i]->HeaderText == "Фамилия") dgv->Rows[dgv->Rows->Count - 1]->Cells[i]->Value = contact->surname;
			else if (dgv->Columns[i]->HeaderText == "Имя") dgv->Rows[dgv->Rows->Count - 1]->Cells[i]->Value = contact->name;
			else if (dgv->Columns[i]->HeaderText == "Отчество") dgv->Rows[dgv->Rows->Count - 1]->Cells[i]->Value = contact->patronymic;
			else if (dgv->Columns[i]->HeaderText == "Телефон") dgv->Rows[dgv->Rows->Count - 1]->Cells[i]->Value = contact->phone;
			else if (dgv->Columns[i]->HeaderText == "E-Mail") dgv->Rows[dgv->Rows->Count - 1]->Cells[i]->Value = contact->email;
		}
	}
	//Синхронизация dgv с массивом
	private: System::Void refresh_contacts()
	{
		for (int rows = 0; rows != dgv->Rows->Count; rows++)
			for (int cells = 0; cells != dgv->Columns->Count; cells++)
			{
				if (dgv->Columns[cells]->HeaderText == "Фамилия") contacts[rows]->surname = dgv->Rows[rows]->Cells[cells]->Value->ToString();
				else if (dgv->Columns[cells]->HeaderText == "Имя") contacts[rows]->name = dgv->Rows[rows]->Cells[cells]->Value->ToString();
				else if (dgv->Columns[cells]->HeaderText == "Отчество") contacts[rows]->patronymic = dgv->Rows[rows]->Cells[cells]->Value->ToString();
				else if (dgv->Columns[cells]->HeaderText == "Телефон") contacts[rows]->phone = dgv->Rows[rows]->Cells[cells]->Value->ToString();
				else if (dgv->Columns[cells]->HeaderText == "E-Mail") contacts[rows]->email = dgv->Rows[rows]->Cells[cells]->Value->ToString();
			}
	}
	//При нажатии на кнопку добавления вызывается форма добавления контакта
	private: System::Void add_contact_Click(System::Object^ sender, System::EventArgs^ e) {
		int start_length = contacts->Length;
		add_form^ adf = gcnew add_form;
		adf->ShowDialog();
		adf->get_data(contacts);
		if (start_length != contacts->Length)
		{
			add_row(contacts[contacts->Length - 1]);
		}
	}
	//При нажатии на иконку телефона, вызывается/скрывается меню
	private: System::Void Menu_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!tableLayoutPanel2->Visible) tableLayoutPanel2->Show();
		else tableLayoutPanel2->Hide();
	}
	//При наведении курсора на иконку телефона меняется цвет
	private: System::Void Menu_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		if (tableLayoutPanel2->Visible)
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
		else
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
	}
	//При покидании курсора иконки телефона меняется цвет
	private: System::Void Menu_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		if (tableLayoutPanel2->Visible)
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
		else
			this->Menu->ForeColor = System::Drawing::Color::White;
	}
	//При нажатии кнопки мыши на иконке телефона меняется цвет
	private: System::Void Menu_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
			static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
	}
	//При нажатии кнопки мыши на иконке телефона меняется цвет
	private: System::Void Menu_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (tableLayoutPanel2->Visible)
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
		else
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
	}
	//Ограничивает запись имени
	private: System::Void Name_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	//Ограничивает запись телефона
	private: System::Void Phone_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		TextBox^ tb = dynamic_cast<TextBox^> (dgv->EditingControl);
		if (e->KeyChar == '+' && !tb->Text->Contains("+") && tb->SelectionStart == 0);
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	//Ограничивает запись емейла
	private: System::Void Email_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		TextBox^ tb = dynamic_cast<TextBox^> (dgv->EditingControl);
		if (e->KeyChar == '@' && !tb->Text->Contains("@") && tb->SelectionStart != 0)
		{
			if (tb->Text[tb->SelectionStart - 1] == '.') e->Handled = true;
			else if (tb->SelectionStart != tb->Text->Length)
				if (tb->Text[tb->SelectionStart] == '.') e->Handled = true;
		}
		else if (e->KeyChar == '.' && tb->SelectionStart != 0)
		{
			if (tb->Text[tb->SelectionStart - 1] == '.' || tb->Text[tb->SelectionStart - 1] == '@') e->Handled = true;
			else if (tb->SelectionStart != tb->Text->Length)
				if (tb->Text[tb->SelectionStart] == '.' || tb->Text[tb->SelectionStart] == '@') e->Handled = true;
		}
		else if (!Char::IsLetter(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 && e->KeyChar != '_' && e->KeyChar != '-')
			e->Handled = true;
	}
	//Добавляет событие текстбоксу клетки dgv
	private: System::Void dgv_EditingControlShowing(System::Object^ sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^ e) {
		TextBox^ tb = dynamic_cast<TextBox^> (e->Control);
		tb->KeyPress -= gcnew System::Windows::Forms::KeyPressEventHandler(this, &base::Name_KeyPress);
		tb->KeyPress -= gcnew System::Windows::Forms::KeyPressEventHandler(this, &base::Phone_KeyPress);
		tb->KeyPress -= gcnew System::Windows::Forms::KeyPressEventHandler(this, &base::Email_KeyPress);
		if (dgv->CurrentCell->ColumnIndex <= 2)
			tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &base::Name_KeyPress);
		else if (dgv->CurrentCell->ColumnIndex == 3)
			tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &base::Phone_KeyPress);
		else if (dgv->CurrentCell->ColumnIndex == 4)
			tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &base::Email_KeyPress);
	}
	//После окончания изменения клетки, идёт проверка и синхронизация с массивом
	private: System::Void dgv_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgv->Columns[e->ColumnIndex]->HeaderText == "Фамилия")
		{
			if (dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value)
				contacts[e->RowIndex]->surname = dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
			else contacts[e->RowIndex]->surname = "";
		}
		else if (dgv->Columns[e->ColumnIndex]->HeaderText == "Имя")
		{
			if (dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value)
				contacts[e->RowIndex]->name = dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
			else contacts[e->RowIndex]->name = "";
		}
		else if (dgv->Columns[e->ColumnIndex]->HeaderText == "Отчество")
		{
			if (dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value)
				contacts[e->RowIndex]->patronymic = dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
			else contacts[e->RowIndex]->patronymic = "";
		}
		else if (dgv->Columns[e->ColumnIndex]->HeaderText == "Телефон")
		{
			if (dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value)
			{
				if (dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString() != "+")
					contacts[e->RowIndex]->phone = dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
				else
				{
					MessageBox::Show("Введён неправильный формат телефона", "Ошибка изменения клетки", MessageBoxButtons::OK, MessageBoxIcon::Error);
					dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = contacts[e->RowIndex]->phone;
				}
			}
			else contacts[e->RowIndex]->phone = "";
		}
		else if (dgv->Columns[e->ColumnIndex]->HeaderText == "E-Mail")
		{
			if (dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value)
			{
				if (email_load_check(dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString()))
					contacts[e->RowIndex]->email = dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
				else
				{
					MessageBox::Show("Введён неправильный формат емейла", "Ошибка изменения клетки", MessageBoxButtons::OK, MessageBoxIcon::Error);
					dgv->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = contacts[e->RowIndex]->email;
				}
			}
			else contacts[e->RowIndex]->email = "";
		}
		if (contacts[e->RowIndex]->surname == "" && contacts[e->RowIndex]->name == "" && contacts[e->RowIndex]->patronymic == "" && contacts[e->RowIndex]->phone == "" && contacts[e->RowIndex]->email == "")
		{
			dgv->Rows->RemoveAt(e->RowIndex);
		}
	}
	//При сортировке обновляется массив
	private: System::Void dgv_Sorted(System::Object^ sender, System::EventArgs^ e) {
		refresh_contacts();
	}
	//При удалении строки, удаляется индекс массива
	private: System::Void dgv_RowsRemoved(System::Object^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^ e) {
		for (int i = 0; i != e->RowCount; i++)
			delete_index(contacts, e->RowIndex + i);
	}
	//Сохранение контактов
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tableLayoutPanel2->Visible)
		{
			tableLayoutPanel2->Hide();
			this->Menu->ForeColor = System::Drawing::Color::White;
		}
		save_file();
	}
	//Загрузка контактов
	private: System::Void load_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tableLayoutPanel2->Visible)
		{
			tableLayoutPanel2->Hide();
			this->Menu->ForeColor = System::Drawing::Color::White;
		}
		openFileDialog1->FileName = "";
		openFileDialog1->ShowDialog();
		if (openFileDialog1->FileName->Length)
		{
			using namespace IO;
			if (File::Exists(openFileDialog1->FileName))
			{
				StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
				array<Contact^>^ temp = gcnew array<Contact^>(0);
				bool error = 0;
				int row = 0;
				if (sr->Peek() == -1)
				{
					if (MessageBox::Show("Вы выбрали пустой файл, всё равно загрузить (это просто удалит текущие контакты)?", "Ошибка загрузки файла", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::No)
						error = 1;
				}
				while (sr->Peek() != -1 && !error)
				{
					String^ str = sr->ReadLine();
					int i = 0;
					row++;
					if (str == "")
					{
						if (MessageBox::Show(row + " строка пустая, всё равно продолжить загрузку?", "Ошибка загрузки файла", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::Yes)
							continue;
						else {
							error = 1;
							break;
						}
					}
					temp->Resize(temp, temp->Length + 1);
					temp[temp->Length - 1] = gcnew Contact;
					for (; i != str->Length; i++)
					{
						if (str[i] == ';') break;
						else temp[temp->Length - 1]->surname += str[i];
					}
					if (!name_load_check(temp[temp->Length - 1]->surname))
					{
						MessageBox::Show("Неверный формат фамилии в " + row + " cтроке (возможны и другие ошибки), дальнейшая загрузка файла невозможна", "Ошибка загрузки файла", MessageBoxButtons::OK, MessageBoxIcon::Error);
						error = 1;
						break;
					}
					else if (i != str->Length)
					{
						for (i++; i != str->Length; i++)
						{
							if (str[i] == ';') break;
							else temp[temp->Length - 1]->name += str[i];
						}
						if (!name_load_check(temp[temp->Length - 1]->name))
						{
							MessageBox::Show("Неверный формат имени в " + row + " cтроке (возможны и другие ошибки), дальнейшая загрузка файла невозможна", "Ошибка загрузки файла", MessageBoxButtons::OK, MessageBoxIcon::Error);
							error = 1;
							break;
						}
						else if (i != str->Length)
						{
							for (i++; i != str->Length; i++)
							{
								if (str[i] == ';') break;
								else temp[temp->Length - 1]->patronymic += str[i];
							}
							if (!name_load_check(temp[temp->Length - 1]->patronymic))
							{
								MessageBox::Show("Неверный формат отчества в " + row + " cтроке (возможны и другие ошибки), дальнейшая загрузка файла невозможна", "Ошибка загрузки файла", MessageBoxButtons::OK, MessageBoxIcon::Error);
								error = 1;
								break;
							}
							else if (i != str->Length)
							{
								for (i++; i != str->Length; i++)
								{
									if (str[i] == ';') break;
									else temp[temp->Length - 1]->phone += str[i];
								}
								if (!phone_load_check(temp[temp->Length - 1]->phone))
								{
									MessageBox::Show("Неверный формат телефона в " + row + " cтроке (возможны и другие ошибки), дальнейшая загрузка файла невозможна", "Ошибка загрузки файла", MessageBoxButtons::OK, MessageBoxIcon::Error);
									error = 1;
									break;
								}
								else if (i != str->Length)
								{
									for (i++; i != str->Length; i++)
									{
										if (str[i] == ';') break;
										else temp[temp->Length - 1]->email += str[i];
									}
									if (!email_load_check(temp[temp->Length - 1]->email))
									{
										MessageBox::Show("Неверный формат емейла в " + row + " cтроке (возможны и другие ошибки), дальнейшая загрузка файла невозможна", "Ошибка загрузки файла", MessageBoxButtons::OK, MessageBoxIcon::Error);
										error = 1;
										break;
									}
								}
								else if (MessageBox::Show(row + " строка имеет неверный формат, всё равно продолжить запись?", "Ошибка загрузки файла", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::No)
								{
									error = 1;
									break;
								}
							}
							else if (MessageBox::Show(row + " строка имеет неверный формат, всё равно продолжить запись?", "Ошибка загрузки файла", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::No)
							{
								error = 1;
								break;
							}
						}
						else if (MessageBox::Show(row + " строка имеет неверный формат, всё равно продолжить запись?", "Ошибка загрузки файла", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::No)
						{
							error = 1;
							break;
						}
					}
					else if (MessageBox::Show(row + " строка имеет неверный формат, всё равно продолжить запись?", "Ошибка загрузки файла", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == Windows::Forms::DialogResult::No)
					{
						error = 1;
						break;
					}
				}
				sr->Close();
				if (!error)
				{
					for (; dgv->Rows->Count; dgv->Rows->RemoveAt(0));
					contacts = temp;
					for (int i = 0; i != contacts->Length; i++)
						add_row(contacts[i]);
				}
			}
			else MessageBox::Show("Такого файла не существует", "Ошибка загрузки файла", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	//При закрытии формы спрашивает, требуется ли сохранить контакты
	private: System::Void base_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (contacts->Length)
		{
			Windows::Forms::DialogResult result = MessageBox::Show("Желаете ли вы сохранить текущие контакты, перед закрытием?", "Закрытие программы", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);
			if (result == Windows::Forms::DialogResult::Yes)
				save_file();
			else if (result == Windows::Forms::DialogResult::Cancel)
				e->Cancel = true;
		}
	}
};
}
