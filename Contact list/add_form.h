#pragma once
#include "Functions.h"

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
	public ref class add_form : public System::Windows::Forms::Form
	{
	private: bool accept_data = 0;
	public:
		add_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Icon = Icon->ExtractAssociatedIcon(Application::ExecutablePath);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~add_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ accept;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Surname;
	private: System::Windows::Forms::TextBox^ Forename;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Patronymic;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Phone;
	private: System::Windows::Forms::TextBox^ Email;
	private: System::Windows::Forms::ToolTip^ toolTip1;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->accept = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Patronymic = (gcnew System::Windows::Forms::TextBox());
			this->Surname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Forename = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Phone = (gcnew System::Windows::Forms::TextBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Gray;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->accept, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(122, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 263)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 263)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 263)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(63, 263);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// accept
			// 
			this->accept->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->accept->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->accept->Cursor = System::Windows::Forms::Cursors::Hand;
			this->accept->FlatAppearance->BorderSize = 0;
			this->accept->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->accept->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->accept->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->accept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->accept->ForeColor = System::Drawing::Color::White;
			this->accept->Location = System::Drawing::Point(3, 103);
			this->accept->Name = L"accept";
			this->accept->Size = System::Drawing::Size(57, 57);
			this->accept->TabIndex = 2;
			this->accept->Text = L"✓";
			this->toolTip1->SetToolTip(this->accept, L"Принять");
			this->accept->UseVisualStyleBackColor = false;
			this->accept->Click += gcnew System::EventHandler(this, &add_form::accept_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->Patronymic, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->Surname, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->Forename, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->Phone, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->Email, 0, 9);
			this->tableLayoutPanel2->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 10;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(94, 230);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Фамилия:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(3, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"E-Mail:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(3, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Телефон:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Patronymic
			// 
			this->Patronymic->Location = System::Drawing::Point(3, 115);
			this->Patronymic->Name = L"Patronymic";
			this->Patronymic->Size = System::Drawing::Size(88, 20);
			this->Patronymic->TabIndex = 5;
			this->Patronymic->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_form::Name_KeyPress);
			// 
			// Surname
			// 
			this->Surname->Location = System::Drawing::Point(3, 23);
			this->Surname->Name = L"Surname";
			this->Surname->Size = System::Drawing::Size(88, 20);
			this->Surname->TabIndex = 1;
			this->Surname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_form::Name_KeyPress);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Имя:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Forename
			// 
			this->Forename->Location = System::Drawing::Point(3, 69);
			this->Forename->Name = L"Forename";
			this->Forename->Size = System::Drawing::Size(88, 20);
			this->Forename->TabIndex = 3;
			this->Forename->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_form::Name_KeyPress);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Отчество:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Phone
			// 
			this->Phone->Location = System::Drawing::Point(3, 161);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(88, 20);
			this->Phone->TabIndex = 7;
			this->Phone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_form::Phone_KeyPress);
			// 
			// Email
			// 
			this->Email->Location = System::Drawing::Point(3, 207);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(88, 20);
			this->Email->TabIndex = 7;
			this->Email->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &add_form::Email_KeyPress);
			// 
			// add_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->ClientSize = System::Drawing::Size(184, 261);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"add_form";
			this->Text = L"Contact list";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void get_data(array<Contact^>^% contacts)
	{
		if (accept_data)
		{
			if (Surname->Text->Length || Forename->Text->Length || Patronymic->Text->Length || Phone->Text->Length || Email->Text->Length)
			{
				contacts->Resize(contacts, contacts->Length + 1);
				contacts[contacts->Length - 1] = gcnew Contact;
				contacts[contacts->Length - 1]->surname = Surname->Text;
				contacts[contacts->Length - 1]->name = Forename->Text;
				contacts[contacts->Length - 1]->patronymic = Patronymic->Text;
				contacts[contacts->Length - 1]->phone = Phone->Text;
				contacts[contacts->Length - 1]->email = Email->Text;
			}
		}
	}
	private: System::Void Name_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void Phone_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '+' && !Phone->Text->Contains("+") && Phone->SelectionStart == 0);
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void Email_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == '@' && !Email->Text->Contains("@") && Email->SelectionStart != 0);
		else if (e->KeyChar == '.' && Email->SelectionStart != 0)
		{
			if (Email->Text[Email->SelectionStart - 1] == '.') e->Handled = true;
			else if (Email->SelectionStart != Email->Text->Length)
				if (Email->Text[Email->SelectionStart] == '.') e->Handled = true;
		}
		else if (!Char::IsLetter(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08 && e->KeyChar != '_' && e->KeyChar != '-')
			e->Handled = true;
	}
	private: System::Void accept_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Phone->Text == "+")
		{
			MessageBox::Show("Введён неправильный формат телефона", "Ошибка добавления контакта", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (!email_load_check(Email->Text))
				MessageBox::Show("Введён неправильный формат емейла", "Ошибка добавления контакта", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (!email_load_check(Email->Text))
			MessageBox::Show("Введён неправильный формат емейла", "Ошибка добавления контакта", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else 
		{
			accept_data = 1;
			Close();
		}
	}
	};
}