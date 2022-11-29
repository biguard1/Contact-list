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
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//При нажатии на кнопку добавления вызывается форма добавления контакта
	private: System::Void add_contact_Click(System::Object^ sender, System::EventArgs^ e) {
		int start_length = contacts->Length;
		add_form^ adf = gcnew add_form;
		adf->ShowDialog();
		adf->get_data(contacts);
		if (start_length != contacts->Length)
			dgv->Rows->Add(contacts[contacts->Length - 1]->surname, contacts[contacts->Length - 1]->name, contacts[contacts->Length - 1]->patronymic, contacts[contacts->Length - 1]->phone, contacts[contacts->Length - 1]->email);
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
	};
}
