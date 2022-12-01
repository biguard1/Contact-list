#pragma once

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
	public ref class favourite : public System::Windows::Forms::Form
	{
		//Отображает, можно ли записывать значения из текстбоксов в массив
	private: bool accept_data = 0;
	public:
		favourite(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Icon = Icon->ExtractAssociatedIcon(Application::ExecutablePath);
			tableLayoutPanel2->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~favourite()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Forename;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Patronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	public: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

	public: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	public: System::Windows::Forms::Label^ Menu;
	public: System::Windows::Forms::Button^ add_contact;




	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

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
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Forename = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Patronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->save = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Menu = (gcnew System::Windows::Forms::Label());
			this->add_contact = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
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
			this->dgv->Size = System::Drawing::Size(589, 304);
			this->dgv->TabIndex = 2;
			this->dgv->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &favourite::dgv_EditingControlShowing);
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
			this->tableLayoutPanel2->Controls->Add(this->save, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 62);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 63)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(63, 63);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::DarkGray;
			this->save->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save->Enabled = false;
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
			this->save->UseVisualStyleBackColor = false;
			this->save->EnabledChanged += gcnew System::EventHandler(this, &favourite::save_EnabledChanged);
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
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// Menu
			// 
			this->Menu->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Menu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Menu->ForeColor = System::Drawing::Color::White;
			this->Menu->Location = System::Drawing::Point(3, 0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(57, 59);
			this->Menu->TabIndex = 0;
			this->Menu->Text = L"☆";
			this->Menu->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Menu->Click += gcnew System::EventHandler(this, &favourite::Menu_Click);
			this->Menu->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &favourite::Menu_MouseDown);
			this->Menu->MouseEnter += gcnew System::EventHandler(this, &favourite::Menu_MouseEnter);
			this->Menu->MouseLeave += gcnew System::EventHandler(this, &favourite::Menu_MouseLeave);
			this->Menu->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &favourite::Menu_MouseUp);
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
			this->add_contact->UseVisualStyleBackColor = false;
			// 
			// favourite
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->dgv);
			this->MinimumSize = System::Drawing::Size(600, 400);
			this->Name = L"favourite";
			this->Text = L"Favourite list";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &favourite::favourite_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Добавление строки в список
	public: System::Void add_row(Contact^% contact)
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
	//При нажатии на иконку избранного, вызывается/скрывается меню
	private: System::Void Menu_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!tableLayoutPanel2->Visible) tableLayoutPanel2->Show();
		else tableLayoutPanel2->Hide();
	}
	//При наведении курсора на иконку избранного меняется цвет
	private: System::Void Menu_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		if (tableLayoutPanel2->Visible)
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
		else
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
	}
	//При покидании курсора иконки избранного меняется цвет
	private: System::Void Menu_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		if (tableLayoutPanel2->Visible)
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
		else
			this->Menu->ForeColor = System::Drawing::Color::White;
	}
	//При нажатии кнопки мыши на иконке избранного меняется цвет
	private: System::Void Menu_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
			static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
	}
	//При отжатии кнопки мыши на иконке избранного меняется цвет
	private: System::Void Menu_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (tableLayoutPanel2->Visible)
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
		else
			this->Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
	}
	//Кнопка загрузки меняет цвет, когда становится недоступной
	private: System::Void save_EnabledChanged(System::Object^ sender, System::EventArgs^ e) {
		if (save->Enabled) {
			this->save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
		}
		else
		{
			this->save->BackColor = System::Drawing::Color::DarkGray;
		}
	}
	//Вместо закрытия форма скрывается
	private: System::Void favourite_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		this->Hide();
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
		tb->KeyPress -= gcnew System::Windows::Forms::KeyPressEventHandler(this, &favourite::Name_KeyPress);
		tb->KeyPress -= gcnew System::Windows::Forms::KeyPressEventHandler(this, &favourite::Phone_KeyPress);
		tb->KeyPress -= gcnew System::Windows::Forms::KeyPressEventHandler(this, &favourite::Email_KeyPress);
		if (dgv->CurrentCell->ColumnIndex <= 2)
			tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &favourite::Name_KeyPress);
		else if (dgv->CurrentCell->ColumnIndex == 3)
			tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &favourite::Phone_KeyPress);
		else if (dgv->CurrentCell->ColumnIndex == 4)
			tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &favourite::Email_KeyPress);
	}
	};
}