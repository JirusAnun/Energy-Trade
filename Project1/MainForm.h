#pragma once
#include <msclr\marshal_cppstd.h>
#include "ID_class.h"
namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MainForm
	/// </summary>

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			panel_login->Show();
			panel_register->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	private: System::Windows::Forms::Panel^ panel_register;







	private: System::Windows::Forms::TextBox^ textBox_register_conpassword;

	private: System::Windows::Forms::TextBox^ textBox_register_password;

	private: System::Windows::Forms::TextBox^ testBox_register_username;
	private: System::Windows::Forms::Button^ button_register_back;
	private: System::Windows::Forms::Button^ button_register_signup;
	private: System::Windows::Forms::CheckBox^ checkBox_register_showPassword;
	private: System::Windows::Forms::Button^ button_register_close;

	private: System::Windows::Forms::Panel^ panel_login;
	private: System::Windows::Forms::Button^ button_login_signup;
	private: System::Windows::Forms::Button^ button_login_login;
	private: System::Windows::Forms::CheckBox^ checkBox_login_showPassword;
	private: System::Windows::Forms::TextBox^ textBox_login_password;
	private: System::Windows::Forms::TextBox^ textBox_login_username;
	private: System::Windows::Forms::Button^ button_login_close;

	private: System::Windows::Forms::Label^ label_register_SignUpTo;
	private: System::Windows::Forms::Label^ label_register_Password;

	private: System::Windows::Forms::Label^ labal_register_Username;
	private: System::Windows::Forms::Label^ label_register_description;


	private: System::Windows::Forms::Label^ label_register_EnergyTrade;
	private: System::Windows::Forms::Label^ label_register_ConfirmPassword;
	private: System::Windows::Forms::Panel^ underline_register_conpassword;

	private: System::Windows::Forms::Panel^ underline_register_password;

	private: System::Windows::Forms::Panel^ underline_register_username;
	private: System::Windows::Forms::Panel^ underline_login_password;
	private: System::Windows::Forms::Label^ label_login_password;



	private: System::Windows::Forms::Panel^ underline_login_username;
	private: System::Windows::Forms::Label^ label_login_username;


	private: System::Windows::Forms::Label^ label_login_description;

	private: System::Windows::Forms::Label^ label_login_EnergyTrade;

	private: System::Windows::Forms::Label^ label_login_logInTo;










	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel_register = (gcnew System::Windows::Forms::Panel());
			this->underline_register_conpassword = (gcnew System::Windows::Forms::Panel());
			this->underline_register_password = (gcnew System::Windows::Forms::Panel());
			this->underline_register_username = (gcnew System::Windows::Forms::Panel());
			this->label_register_EnergyTrade = (gcnew System::Windows::Forms::Label());
			this->label_register_SignUpTo = (gcnew System::Windows::Forms::Label());
			this->label_register_ConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->label_register_Password = (gcnew System::Windows::Forms::Label());
			this->labal_register_Username = (gcnew System::Windows::Forms::Label());
			this->label_register_description = (gcnew System::Windows::Forms::Label());
			this->button_register_close = (gcnew System::Windows::Forms::Button());
			this->button_register_back = (gcnew System::Windows::Forms::Button());
			this->button_register_signup = (gcnew System::Windows::Forms::Button());
			this->checkBox_register_showPassword = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_register_conpassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox_register_password = (gcnew System::Windows::Forms::TextBox());
			this->testBox_register_username = (gcnew System::Windows::Forms::TextBox());
			this->panel_login = (gcnew System::Windows::Forms::Panel());
			this->underline_login_password = (gcnew System::Windows::Forms::Panel());
			this->label_login_password = (gcnew System::Windows::Forms::Label());
			this->underline_login_username = (gcnew System::Windows::Forms::Panel());
			this->label_login_username = (gcnew System::Windows::Forms::Label());
			this->label_login_description = (gcnew System::Windows::Forms::Label());
			this->label_login_EnergyTrade = (gcnew System::Windows::Forms::Label());
			this->label_login_logInTo = (gcnew System::Windows::Forms::Label());
			this->button_login_close = (gcnew System::Windows::Forms::Button());
			this->button_login_signup = (gcnew System::Windows::Forms::Button());
			this->button_login_login = (gcnew System::Windows::Forms::Button());
			this->checkBox_login_showPassword = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_login_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_login_username = (gcnew System::Windows::Forms::TextBox());
			this->panel_register->SuspendLayout();
			this->panel_login->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_register
			// 
			this->panel_register->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_register.BackgroundImage")));
			this->panel_register->Controls->Add(this->underline_register_conpassword);
			this->panel_register->Controls->Add(this->underline_register_password);
			this->panel_register->Controls->Add(this->underline_register_username);
			this->panel_register->Controls->Add(this->label_register_EnergyTrade);
			this->panel_register->Controls->Add(this->label_register_SignUpTo);
			this->panel_register->Controls->Add(this->label_register_ConfirmPassword);
			this->panel_register->Controls->Add(this->label_register_Password);
			this->panel_register->Controls->Add(this->labal_register_Username);
			this->panel_register->Controls->Add(this->label_register_description);
			this->panel_register->Controls->Add(this->button_register_close);
			this->panel_register->Controls->Add(this->button_register_back);
			this->panel_register->Controls->Add(this->button_register_signup);
			this->panel_register->Controls->Add(this->checkBox_register_showPassword);
			this->panel_register->Controls->Add(this->textBox_register_conpassword);
			this->panel_register->Controls->Add(this->textBox_register_password);
			this->panel_register->Controls->Add(this->testBox_register_username);
			this->panel_register->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_register->Font = (gcnew System::Drawing::Font(L"Agency FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel_register->Location = System::Drawing::Point(0, 0);
			this->panel_register->Name = L"panel_register";
			this->panel_register->Size = System::Drawing::Size(1280, 720);
			this->panel_register->TabIndex = 10;
			this->panel_register->Visible = false;
			this->panel_register->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel_register_Paint);
			this->panel_register->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->panel_register->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->panel_register->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			// 
			// underline_register_conpassword
			// 
			this->underline_register_conpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->underline_register_conpassword->Location = System::Drawing::Point(670, 445);
			this->underline_register_conpassword->Name = L"underline_register_conpassword";
			this->underline_register_conpassword->Size = System::Drawing::Size(350, 4);
			this->underline_register_conpassword->TabIndex = 20;
			// 
			// underline_register_password
			// 
			this->underline_register_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->underline_register_password->Location = System::Drawing::Point(670, 370);
			this->underline_register_password->Name = L"underline_register_password";
			this->underline_register_password->Size = System::Drawing::Size(350, 4);
			this->underline_register_password->TabIndex = 19;
			// 
			// underline_register_username
			// 
			this->underline_register_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->underline_register_username->Location = System::Drawing::Point(670, 295);
			this->underline_register_username->Name = L"underline_register_username";
			this->underline_register_username->Size = System::Drawing::Size(350, 4);
			this->underline_register_username->TabIndex = 18;
			// 
			// label_register_EnergyTrade
			// 
			this->label_register_EnergyTrade->AutoSize = true;
			this->label_register_EnergyTrade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->label_register_EnergyTrade->Font = (gcnew System::Drawing::Font(L"Agency FB", 40));
			this->label_register_EnergyTrade->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_register_EnergyTrade->Location = System::Drawing::Point(677, 60);
			this->label_register_EnergyTrade->Name = L"label_register_EnergyTrade";
			this->label_register_EnergyTrade->Size = System::Drawing::Size(312, 79);
			this->label_register_EnergyTrade->TabIndex = 13;
			this->label_register_EnergyTrade->Text = L"Energy Trade";
			this->label_register_EnergyTrade->Click += gcnew System::EventHandler(this, &MainForm::label_register_EnergyTrade_Click);
			// 
			// label_register_SignUpTo
			// 
			this->label_register_SignUpTo->AutoSize = true;
			this->label_register_SignUpTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->label_register_SignUpTo->Font = (gcnew System::Drawing::Font(L"Agency FB", 40));
			this->label_register_SignUpTo->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_register_SignUpTo->Location = System::Drawing::Point(490, 60);
			this->label_register_SignUpTo->Name = L"label_register_SignUpTo";
			this->label_register_SignUpTo->Size = System::Drawing::Size(248, 79);
			this->label_register_SignUpTo->TabIndex = 12;
			this->label_register_SignUpTo->Text = L"Sign up to";
			this->label_register_SignUpTo->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label_register_ConfirmPassword
			// 
			this->label_register_ConfirmPassword->AutoSize = true;
			this->label_register_ConfirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->label_register_ConfirmPassword->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_register_ConfirmPassword->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label_register_ConfirmPassword->Location = System::Drawing::Point(670, 390);
			this->label_register_ConfirmPassword->Name = L"label_register_ConfirmPassword";
			this->label_register_ConfirmPassword->Size = System::Drawing::Size(152, 29);
			this->label_register_ConfirmPassword->TabIndex = 17;
			this->label_register_ConfirmPassword->Text = L"Confirm password";
			this->label_register_ConfirmPassword->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_2);
			// 
			// label_register_Password
			// 
			this->label_register_Password->AutoSize = true;
			this->label_register_Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->label_register_Password->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_register_Password->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label_register_Password->Location = System::Drawing::Point(670, 315);
			this->label_register_Password->Name = L"label_register_Password";
			this->label_register_Password->Size = System::Drawing::Size(90, 29);
			this->label_register_Password->TabIndex = 16;
			this->label_register_Password->Text = L"Password";
			this->label_register_Password->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_1);
			// 
			// labal_register_Username
			// 
			this->labal_register_Username->AutoSize = true;
			this->labal_register_Username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->labal_register_Username->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->labal_register_Username->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->labal_register_Username->Location = System::Drawing::Point(670, 240);
			this->labal_register_Username->Name = L"labal_register_Username";
			this->labal_register_Username->Size = System::Drawing::Size(90, 29);
			this->labal_register_Username->TabIndex = 15;
			this->labal_register_Username->Text = L"Username";
			// 
			// label_register_description
			// 
			this->label_register_description->AutoSize = true;
			this->label_register_description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->label_register_description->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_register_description->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_register_description->Location = System::Drawing::Point(500, 125);
			this->label_register_description->Name = L"label_register_description";
			this->label_register_description->Size = System::Drawing::Size(336, 29);
			this->label_register_description->TabIndex = 14;
			this->label_register_description->Text = L"To start trade. Please create your account.";
			// 
			// button_register_close
			// 
			this->button_register_close->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_register_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_register_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F));
			this->button_register_close->ForeColor = System::Drawing::Color::Red;
			this->button_register_close->Location = System::Drawing::Point(1230, 15);
			this->button_register_close->Name = L"button_register_close";
			this->button_register_close->Size = System::Drawing::Size(35, 35);
			this->button_register_close->TabIndex = 11;
			this->button_register_close->Text = L"X";
			this->button_register_close->UseVisualStyleBackColor = false;
			this->button_register_close->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button_register_back
			// 
			this->button_register_back->BackColor = System::Drawing::Color::Black;
			this->button_register_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_register_back->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_register_back->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button_register_back->Location = System::Drawing::Point(770, 540);
			this->button_register_back->Name = L"button_register_back";
			this->button_register_back->Size = System::Drawing::Size(95, 34);
			this->button_register_back->TabIndex = 10;
			this->button_register_back->Text = L"Back";
			this->button_register_back->UseVisualStyleBackColor = false;
			this->button_register_back->Click += gcnew System::EventHandler(this, &MainForm::button_register_back_Click);
			// 
			// button_register_signup
			// 
			this->button_register_signup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->button_register_signup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_register_signup.BackgroundImage")));
			this->button_register_signup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_register_signup->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_register_signup->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_register_signup->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->button_register_signup->Location = System::Drawing::Point(670, 540);
			this->button_register_signup->Name = L"button_register_signup";
			this->button_register_signup->Size = System::Drawing::Size(95, 34);
			this->button_register_signup->TabIndex = 9;
			this->button_register_signup->Text = L"Sign up";
			this->button_register_signup->UseVisualStyleBackColor = false;
			this->button_register_signup->Click += gcnew System::EventHandler(this, &MainForm::button_register_signup_Click);
			// 
			// checkBox_register_showPassword
			// 
			this->checkBox_register_showPassword->AutoSize = true;
			this->checkBox_register_showPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->checkBox_register_showPassword->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->checkBox_register_showPassword->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->checkBox_register_showPassword->Location = System::Drawing::Point(670, 480);
			this->checkBox_register_showPassword->Name = L"checkBox_register_showPassword";
			this->checkBox_register_showPassword->Size = System::Drawing::Size(159, 33);
			this->checkBox_register_showPassword->TabIndex = 8;
			this->checkBox_register_showPassword->Text = L"Show Password";
			this->checkBox_register_showPassword->UseVisualStyleBackColor = false;
			this->checkBox_register_showPassword->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox_register_showPassword_CheckedChanged);
			// 
			// textBox_register_conpassword
			// 
			this->textBox_register_conpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox_register_conpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_register_conpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_register_conpassword->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_register_conpassword->Location = System::Drawing::Point(675, 425);
			this->textBox_register_conpassword->Name = L"textBox_register_conpassword";
			this->textBox_register_conpassword->Size = System::Drawing::Size(340, 23);
			this->textBox_register_conpassword->TabIndex = 6;
			this->textBox_register_conpassword->UseSystemPasswordChar = true;
			// 
			// textBox_register_password
			// 
			this->textBox_register_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox_register_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_register_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_register_password->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_register_password->Location = System::Drawing::Point(675, 350);
			this->textBox_register_password->Name = L"textBox_register_password";
			this->textBox_register_password->Size = System::Drawing::Size(340, 23);
			this->textBox_register_password->TabIndex = 5;
			this->textBox_register_password->UseSystemPasswordChar = true;
			// 
			// testBox_register_username
			// 
			this->testBox_register_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->testBox_register_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->testBox_register_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->testBox_register_username->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->testBox_register_username->Location = System::Drawing::Point(675, 275);
			this->testBox_register_username->Name = L"testBox_register_username";
			this->testBox_register_username->Size = System::Drawing::Size(340, 23);
			this->testBox_register_username->TabIndex = 4;
			this->testBox_register_username->TextChanged += gcnew System::EventHandler(this, &MainForm::testBox_register_username_TextChanged);
			// 
			// panel_login
			// 
			this->panel_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->panel_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_login.BackgroundImage")));
			this->panel_login->Controls->Add(this->underline_login_password);
			this->panel_login->Controls->Add(this->label_login_password);
			this->panel_login->Controls->Add(this->underline_login_username);
			this->panel_login->Controls->Add(this->label_login_username);
			this->panel_login->Controls->Add(this->label_login_description);
			this->panel_login->Controls->Add(this->label_login_EnergyTrade);
			this->panel_login->Controls->Add(this->label_login_logInTo);
			this->panel_login->Controls->Add(this->button_login_close);
			this->panel_login->Controls->Add(this->button_login_signup);
			this->panel_login->Controls->Add(this->button_login_login);
			this->panel_login->Controls->Add(this->checkBox_login_showPassword);
			this->panel_login->Controls->Add(this->textBox_login_password);
			this->panel_login->Controls->Add(this->textBox_login_username);
			this->panel_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_login->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->panel_login->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel_login->Location = System::Drawing::Point(0, 0);
			this->panel_login->Name = L"panel_login";
			this->panel_login->Size = System::Drawing::Size(1280, 720);
			this->panel_login->TabIndex = 11;
			this->panel_login->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel_login_Paint);
			this->panel_login->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->panel_login->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->panel_login->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			// 
			// underline_login_password
			// 
			this->underline_login_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->underline_login_password->Location = System::Drawing::Point(670, 370);
			this->underline_login_password->Name = L"underline_login_password";
			this->underline_login_password->Size = System::Drawing::Size(350, 4);
			this->underline_login_password->TabIndex = 21;
			// 
			// label_login_password
			// 
			this->label_login_password->AutoSize = true;
			this->label_login_password->Location = System::Drawing::Point(670, 315);
			this->label_login_password->Name = L"label_login_password";
			this->label_login_password->Size = System::Drawing::Size(90, 29);
			this->label_login_password->TabIndex = 21;
			this->label_login_password->Text = L"Password";
			// 
			// underline_login_username
			// 
			this->underline_login_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->underline_login_username->Location = System::Drawing::Point(670, 295);
			this->underline_login_username->Name = L"underline_login_username";
			this->underline_login_username->Size = System::Drawing::Size(350, 4);
			this->underline_login_username->TabIndex = 20;
			// 
			// label_login_username
			// 
			this->label_login_username->AutoSize = true;
			this->label_login_username->Location = System::Drawing::Point(670, 240);
			this->label_login_username->Name = L"label_login_username";
			this->label_login_username->Size = System::Drawing::Size(90, 29);
			this->label_login_username->TabIndex = 19;
			this->label_login_username->Text = L"Username";
			// 
			// label_login_description
			// 
			this->label_login_description->AutoSize = true;
			this->label_login_description->Location = System::Drawing::Point(500, 125);
			this->label_login_description->Name = L"label_login_description";
			this->label_login_description->Size = System::Drawing::Size(341, 29);
			this->label_login_description->TabIndex = 18;
			this->label_login_description->Text = L"To start trade, Please login to your account.";
			// 
			// label_login_EnergyTrade
			// 
			this->label_login_EnergyTrade->AutoSize = true;
			this->label_login_EnergyTrade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->label_login_EnergyTrade->Font = (gcnew System::Drawing::Font(L"Agency FB", 40));
			this->label_login_EnergyTrade->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_login_EnergyTrade->Location = System::Drawing::Point(638, 60);
			this->label_login_EnergyTrade->Name = L"label_login_EnergyTrade";
			this->label_login_EnergyTrade->Size = System::Drawing::Size(312, 79);
			this->label_login_EnergyTrade->TabIndex = 17;
			this->label_login_EnergyTrade->Text = L"Energy Trade";
			// 
			// label_login_logInTo
			// 
			this->label_login_logInTo->AutoSize = true;
			this->label_login_logInTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->label_login_logInTo->Font = (gcnew System::Drawing::Font(L"Agency FB", 40));
			this->label_login_logInTo->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_login_logInTo->Location = System::Drawing::Point(490, 60);
			this->label_login_logInTo->Name = L"label_login_logInTo";
			this->label_login_logInTo->Size = System::Drawing::Size(202, 79);
			this->label_login_logInTo->TabIndex = 16;
			this->label_login_logInTo->Text = L"Login to";
			// 
			// button_login_close
			// 
			this->button_login_close->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_login_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_login_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F));
			this->button_login_close->ForeColor = System::Drawing::Color::Red;
			this->button_login_close->Location = System::Drawing::Point(1230, 15);
			this->button_login_close->Name = L"button_login_close";
			this->button_login_close->Size = System::Drawing::Size(35, 35);
			this->button_login_close->TabIndex = 15;
			this->button_login_close->Text = L"X";
			this->button_login_close->UseVisualStyleBackColor = false;
			this->button_login_close->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button_login_signup
			// 
			this->button_login_signup->BackColor = System::Drawing::Color::Black;
			this->button_login_signup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_login_signup->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_login_signup->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button_login_signup->Location = System::Drawing::Point(770, 465);
			this->button_login_signup->Name = L"button_login_signup";
			this->button_login_signup->Size = System::Drawing::Size(95, 34);
			this->button_login_signup->TabIndex = 14;
			this->button_login_signup->Text = L"Sign up";
			this->button_login_signup->UseVisualStyleBackColor = false;
			this->button_login_signup->Click += gcnew System::EventHandler(this, &MainForm::button_login_signup_Click_1);
			// 
			// button_login_login
			// 
			this->button_login_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_login_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_login_login.BackgroundImage")));
			this->button_login_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_login_login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_login_login->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_login_login->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->button_login_login->Location = System::Drawing::Point(670, 465);
			this->button_login_login->Name = L"button_login_login";
			this->button_login_login->Size = System::Drawing::Size(95, 34);
			this->button_login_login->TabIndex = 13;
			this->button_login_login->Text = L"Login";
			this->button_login_login->UseVisualStyleBackColor = false;
			this->button_login_login->Click += gcnew System::EventHandler(this, &MainForm::button_login_login_Click_1);
			// 
			// checkBox_login_showPassword
			// 
			this->checkBox_login_showPassword->AutoSize = true;
			this->checkBox_login_showPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox_login_showPassword->Location = System::Drawing::Point(670, 405);
			this->checkBox_login_showPassword->Name = L"checkBox_login_showPassword";
			this->checkBox_login_showPassword->Size = System::Drawing::Size(159, 33);
			this->checkBox_login_showPassword->TabIndex = 12;
			this->checkBox_login_showPassword->Text = L"Show Password";
			this->checkBox_login_showPassword->UseVisualStyleBackColor = false;
			this->checkBox_login_showPassword->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox_login_showPassword_CheckedChanged);
			// 
			// textBox_login_password
			// 
			this->textBox_login_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox_login_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_login_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_login_password->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_login_password->Location = System::Drawing::Point(675, 350);
			this->textBox_login_password->Name = L"textBox_login_password";
			this->textBox_login_password->Size = System::Drawing::Size(340, 23);
			this->textBox_login_password->TabIndex = 11;
			this->textBox_login_password->UseSystemPasswordChar = true;
			// 
			// textBox_login_username
			// 
			this->textBox_login_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox_login_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_login_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_login_username->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_login_username->Location = System::Drawing::Point(675, 275);
			this->textBox_login_username->Name = L"textBox_login_username";
			this->textBox_login_username->Size = System::Drawing::Size(340, 23);
			this->textBox_login_username->TabIndex = 10;
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel_register);
			this->Controls->Add(this->panel_login);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			this->panel_register->ResumeLayout(false);
			this->panel_register->PerformLayout();
			this->panel_login->ResumeLayout(false);
			this->panel_login->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
/*private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit(); 
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_login_showPassword->Checked){
		textBox_login_password->UseSystemPasswordChar = false ;
	}
	else
	{
		textBox_login_password->UseSystemPasswordChar = true;
	}
}
private: System::Void button_login_login_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox_login_username->Text == "Admin" && textBox_login_password->Text == "Admin")
	{
		MessageBox::Show("Signed in");
	}

}*/
	 //drag form
	   bool drag;
	   Point offset;
private: System::Void MainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	drag = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void MainForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (drag)
	{
		Point Screen_position = PointToScreen(Point(e->X, e->Y));
		Location = Point(Screen_position.X - offset.X , Screen_position.Y - offset.Y);
	}
}
private: System::Void MainForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	drag = false;
}
#pragma region panel_singup

private: System::Void button_login_signup_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_register->Visible = true;
}
private: System::Void button_register_back_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_login->Show();
	panel_login->BringToFront();
	panel_register->Visible = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void checkBox_register_showPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_register_showPassword->Checked)
	{
		textBox_register_password->UseSystemPasswordChar = false;
		textBox_register_conpassword->UseSystemPasswordChar = false;
	}
	else
	{
		textBox_register_password->UseSystemPasswordChar = true;
		textBox_register_conpassword->UseSystemPasswordChar = true;
	}
}
private: System::Void button_register_signup_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox_register_password->Text == textBox_register_conpassword->Text)
	{
		Login_reg User;
		User.create_LL();
		msclr::interop::marshal_context context;
		std::string username = context.marshal_as<std::string>(testBox_register_username->Text);
		std::string password = context.marshal_as<std::string>(textBox_register_password->Text);
		bool status_register = User.check_reg(username, password);
		if (status_register) { 
			User.write_csv(); 
			MessageBox::Show("Register successful.");
		}
	}
}
private: System::Void panel_login_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

#pragma endregion

#pragma region panel_login

private: System::Void button_login_signup_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel_register->Show();
	panel_register->BringToFront();
	panel_login->Hide();
}
private: System::Void checkBox_login_showPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_login_showPassword->Checked) {
		textBox_login_password->UseSystemPasswordChar = false;
	}
	else {
		textBox_login_password->UseSystemPasswordChar = true;
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void panel_register_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button_login_login_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Login_reg User;
	User.create_LL();
	msclr::interop::marshal_context context;
	std::string username = context.marshal_as<std::string>(textBox_login_username->Text);
	std::string password = context.marshal_as<std::string>(textBox_login_password->Text);
	bool status_login = User.check_login(username,password);

	if (status_login) {
		MessageBox::Show("Login successful");
	}

}
#pragma endregion


private: System::Void testBox_register_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_register_EnergyTrade_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
