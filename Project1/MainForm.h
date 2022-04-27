#pragma once
#include <msclr\marshal_cppstd.h>
#include "ID_class.h"

string glob_user;
bool status_confirm = NULL;

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
	private: System::Windows::Forms::Panel^ panel_user;

	private: System::Windows::Forms::Button^ button_user_logout;
	private: System::Windows::Forms::Button^ button_user_naturalGas;


	private: System::Windows::Forms::Button^ button_user_oil;

	private: System::Windows::Forms::Button^ button_user_electric;

	private: System::Windows::Forms::Label^ label_user_name;
	private: System::Windows::Forms::Button^ button_user_close;
	private: System::Windows::Forms::Label^ label_user_EnergyTrade;
	private: System::Windows::Forms::ComboBox^ comboBox_user_company;
	private: System::Windows::Forms::Label^ label_user_enterprise;
	private: System::Windows::Forms::ComboBox^ comboBox_user_genre;



	private: System::Windows::Forms::Label^ label_user_genre;
	private: System::Windows::Forms::Label^ label_user_price;
	private: System::Windows::Forms::Label^ label_user_volume;


	private: System::Windows::Forms::Label^ label_user_line2;

	private: System::Windows::Forms::Label^ label_user_line1;

	private: System::Windows::Forms::Button^ button_user_sell;
	private: System::Windows::Forms::Button^ button_user_buy;
	private: System::Windows::Forms::Label^ label_user_unit;
	private: System::Windows::Forms::TextBox^ textBox_user_unit;
	private: System::Windows::Forms::Panel^ Underline_user;



	private: System::Windows::Forms::Label^ label_user_valuePrice;

	private: System::Windows::Forms::Label^ label_user_valueVolume;
	private: System::Windows::Forms::Label^ label_user_value2;
	private: System::Windows::Forms::Label^ label_user_value1;
	private: System::Windows::Forms::Label^ label_user_unitPrice;
	private: System::Windows::Forms::Label^ label_user_unitVolume;
	private: System::Windows::Forms::Label^ label_user_unitLine2;
	private: System::Windows::Forms::Label^ label_user_unitLine1;
	private: System::Windows::Forms::Panel^ panel_admin;
	private: System::Windows::Forms::Label^ label_admin_unitUnitPrice;
	private: System::Windows::Forms::Label^ label_admin_unitVolume;
	private: System::Windows::Forms::Label^ label_admin_unitline2;
	private: System::Windows::Forms::Label^ label_admin_unitline1;
	private: System::Windows::Forms::Label^ label_admin_valueUnitPrice;
	private: System::Windows::Forms::Label^ label_admin_valueVolume;
	private: System::Windows::Forms::Label^ label_admin_valueLine2;
	private: System::Windows::Forms::Label^ label_admin_valueLine1;
private: System::Windows::Forms::Panel^ Underline_admin;

	private: System::Windows::Forms::Button^ button_admin_delete;
	private: System::Windows::Forms::Label^ label_admin_unitPrice;
	private: System::Windows::Forms::Label^ label_admin_volume;
	private: System::Windows::Forms::Label^ label_admin_line2;
	private: System::Windows::Forms::Label^ label_admin_line1;
	private: System::Windows::Forms::Label^ label_admin_genre;
private: System::Windows::Forms::ComboBox^ comboBox_admin_genre;

	private: System::Windows::Forms::Label^ label_admin_enterpise;
private: System::Windows::Forms::ComboBox^ comboBox_admin_enterprise;

private: System::Windows::Forms::Button^ button_admin_logout;
private: System::Windows::Forms::Button^ button_admin_gas;


private: System::Windows::Forms::Button^ button_admin_oil;

private: System::Windows::Forms::Button^ button_admin_electric;

	private: System::Windows::Forms::Label^ label_admin_name;
private: System::Windows::Forms::Button^ button_admin_close;

	private: System::Windows::Forms::Label^ label_admin_energyTrade;
private: System::Windows::Forms::Button^ button_admin_add;
private: System::Windows::Forms::Panel^ panel_admin_add;


private: System::Windows::Forms::Panel^ Underline_admin_add;

private: System::Windows::Forms::Label^ label_admin_add_category;
private: System::Windows::Forms::Label^ label_admin_add_unitPrice;

private: System::Windows::Forms::Label^ label_admin_add_volume;
private: System::Windows::Forms::Label^ label_admin_add_line2;



private: System::Windows::Forms::Label^ label_admin_add_line1;

private: System::Windows::Forms::Label^ label_admin_add_enterprise;
private: System::Windows::Forms::ComboBox^ comboBox_admin_add_catagory;

private: System::Windows::Forms::Panel^ Underline_admin_add_line2;

private: System::Windows::Forms::Panel^ Underline_admin_add_line1;
private: System::Windows::Forms::TextBox^ textBox_admin_add_unitePrice;


private: System::Windows::Forms::TextBox^ textBox_admin_add_volume;
private: System::Windows::Forms::TextBox^ textBox_admin_add_line2;


private: System::Windows::Forms::TextBox^ textBox_admin_add_line1;


private: System::Windows::Forms::TextBox^ textBox_admin_add_enterprise;



private: System::Windows::Forms::Panel^ Underline_admin_add_line4;

private: System::Windows::Forms::Panel^ Underline_admin_add_line3;
private: System::Windows::Forms::Panel^ Underline_admin_add_line5;
private: System::Windows::Forms::Label^ label_admin_add_unitUnitPrice;
private: System::Windows::Forms::Label^ label_admin_add_unitVolume;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label_admin_add_unitLine2;
private: System::Windows::Forms::Label^ label_admin_add_unitLine1;
private: System::Windows::Forms::ComboBox^ comboBox_admin_add_genre;
private: System::Windows::Forms::Label^ label_admin_add_genre;
private: System::Windows::Forms::Button^ button_admin_addAll;
private: System::Windows::Forms::Panel^ panel_message;
private: System::Windows::Forms::Label^ label_noti;

private: System::Windows::Forms::Label^ label_message;
private: System::Windows::Forms::Button^ button_message_close;

private: System::Windows::Forms::Button^ button_message_ok;
private: System::Windows::Forms::Panel^ panel_confirm;
private: System::Windows::Forms::Button^ button_confirm_cancel;


private: System::Windows::Forms::Label^ label_confirm_noti;
private: System::Windows::Forms::Label^ label_confirm;
private: System::Windows::Forms::Button^ button_confirm_close;



private: System::Windows::Forms::Button^ button_confirm_ok;
private: System::Windows::Forms::Label^ label_aadmim_top1;
private: System::Windows::Forms::Panel^ Underline_unite;

private: System::Windows::Forms::Label^ label_user_total3;
private: System::Windows::Forms::Label^ label_user_total2;
private: System::Windows::Forms::Label^ label_user_total1;
private: System::Windows::Forms::Label^ label_user_top3;
private: System::Windows::Forms::Label^ label_user_top2;
private: System::Windows::Forms::Label^ label_user_top1;
private: System::Windows::Forms::Label^ label_admin_total3;
private: System::Windows::Forms::Label^ label_admin_total2;
private: System::Windows::Forms::Label^ label_admin_total1;
private: System::Windows::Forms::Label^ label_aadmim_top3;
private: System::Windows::Forms::Label^ label_aadmim_top2;


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
			this->panel_user = (gcnew System::Windows::Forms::Panel());
			this->Underline_unite = (gcnew System::Windows::Forms::Panel());
			this->label_user_total3 = (gcnew System::Windows::Forms::Label());
			this->label_user_total2 = (gcnew System::Windows::Forms::Label());
			this->label_user_total1 = (gcnew System::Windows::Forms::Label());
			this->label_user_top3 = (gcnew System::Windows::Forms::Label());
			this->label_user_top2 = (gcnew System::Windows::Forms::Label());
			this->label_user_top1 = (gcnew System::Windows::Forms::Label());
			this->label_user_unitPrice = (gcnew System::Windows::Forms::Label());
			this->label_user_unitVolume = (gcnew System::Windows::Forms::Label());
			this->label_user_unitLine2 = (gcnew System::Windows::Forms::Label());
			this->label_user_unitLine1 = (gcnew System::Windows::Forms::Label());
			this->label_user_valuePrice = (gcnew System::Windows::Forms::Label());
			this->label_user_valueVolume = (gcnew System::Windows::Forms::Label());
			this->label_user_value2 = (gcnew System::Windows::Forms::Label());
			this->label_user_value1 = (gcnew System::Windows::Forms::Label());
			this->Underline_user = (gcnew System::Windows::Forms::Panel());
			this->button_user_sell = (gcnew System::Windows::Forms::Button());
			this->button_user_buy = (gcnew System::Windows::Forms::Button());
			this->label_user_unit = (gcnew System::Windows::Forms::Label());
			this->textBox_user_unit = (gcnew System::Windows::Forms::TextBox());
			this->label_user_price = (gcnew System::Windows::Forms::Label());
			this->label_user_volume = (gcnew System::Windows::Forms::Label());
			this->label_user_line2 = (gcnew System::Windows::Forms::Label());
			this->label_user_line1 = (gcnew System::Windows::Forms::Label());
			this->label_user_genre = (gcnew System::Windows::Forms::Label());
			this->comboBox_user_genre = (gcnew System::Windows::Forms::ComboBox());
			this->label_user_enterprise = (gcnew System::Windows::Forms::Label());
			this->comboBox_user_company = (gcnew System::Windows::Forms::ComboBox());
			this->button_user_logout = (gcnew System::Windows::Forms::Button());
			this->button_user_naturalGas = (gcnew System::Windows::Forms::Button());
			this->button_user_oil = (gcnew System::Windows::Forms::Button());
			this->button_user_electric = (gcnew System::Windows::Forms::Button());
			this->label_user_name = (gcnew System::Windows::Forms::Label());
			this->button_user_close = (gcnew System::Windows::Forms::Button());
			this->label_user_EnergyTrade = (gcnew System::Windows::Forms::Label());
			this->panel_message = (gcnew System::Windows::Forms::Panel());
			this->button_message_ok = (gcnew System::Windows::Forms::Button());
			this->label_noti = (gcnew System::Windows::Forms::Label());
			this->label_message = (gcnew System::Windows::Forms::Label());
			this->button_message_close = (gcnew System::Windows::Forms::Button());
			this->panel_admin = (gcnew System::Windows::Forms::Panel());
			this->label_admin_total3 = (gcnew System::Windows::Forms::Label());
			this->label_admin_total2 = (gcnew System::Windows::Forms::Label());
			this->label_admin_total1 = (gcnew System::Windows::Forms::Label());
			this->label_aadmim_top3 = (gcnew System::Windows::Forms::Label());
			this->label_aadmim_top2 = (gcnew System::Windows::Forms::Label());
			this->label_aadmim_top1 = (gcnew System::Windows::Forms::Label());
			this->panel_admin_add = (gcnew System::Windows::Forms::Panel());
			this->button_admin_addAll = (gcnew System::Windows::Forms::Button());
			this->comboBox_admin_add_genre = (gcnew System::Windows::Forms::ComboBox());
			this->label_admin_add_genre = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_unitUnitPrice = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_unitVolume = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_unitLine2 = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_unitLine1 = (gcnew System::Windows::Forms::Label());
			this->Underline_admin_add_line5 = (gcnew System::Windows::Forms::Panel());
			this->Underline_admin_add_line4 = (gcnew System::Windows::Forms::Panel());
			this->Underline_admin_add_line3 = (gcnew System::Windows::Forms::Panel());
			this->Underline_admin_add_line2 = (gcnew System::Windows::Forms::Panel());
			this->Underline_admin_add_line1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_admin_add_unitePrice = (gcnew System::Windows::Forms::TextBox());
			this->textBox_admin_add_volume = (gcnew System::Windows::Forms::TextBox());
			this->textBox_admin_add_line2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_admin_add_line1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_admin_add_enterprise = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_admin_add_catagory = (gcnew System::Windows::Forms::ComboBox());
			this->Underline_admin_add = (gcnew System::Windows::Forms::Panel());
			this->label_admin_add_category = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_unitPrice = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_volume = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_line2 = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_line1 = (gcnew System::Windows::Forms::Label());
			this->label_admin_add_enterprise = (gcnew System::Windows::Forms::Label());
			this->button_admin_add = (gcnew System::Windows::Forms::Button());
			this->label_admin_unitUnitPrice = (gcnew System::Windows::Forms::Label());
			this->label_admin_unitVolume = (gcnew System::Windows::Forms::Label());
			this->label_admin_unitline2 = (gcnew System::Windows::Forms::Label());
			this->label_admin_unitline1 = (gcnew System::Windows::Forms::Label());
			this->label_admin_valueUnitPrice = (gcnew System::Windows::Forms::Label());
			this->label_admin_valueVolume = (gcnew System::Windows::Forms::Label());
			this->label_admin_valueLine2 = (gcnew System::Windows::Forms::Label());
			this->label_admin_valueLine1 = (gcnew System::Windows::Forms::Label());
			this->Underline_admin = (gcnew System::Windows::Forms::Panel());
			this->button_admin_delete = (gcnew System::Windows::Forms::Button());
			this->label_admin_unitPrice = (gcnew System::Windows::Forms::Label());
			this->label_admin_volume = (gcnew System::Windows::Forms::Label());
			this->label_admin_line2 = (gcnew System::Windows::Forms::Label());
			this->label_admin_line1 = (gcnew System::Windows::Forms::Label());
			this->label_admin_genre = (gcnew System::Windows::Forms::Label());
			this->comboBox_admin_genre = (gcnew System::Windows::Forms::ComboBox());
			this->label_admin_enterpise = (gcnew System::Windows::Forms::Label());
			this->comboBox_admin_enterprise = (gcnew System::Windows::Forms::ComboBox());
			this->button_admin_logout = (gcnew System::Windows::Forms::Button());
			this->button_admin_gas = (gcnew System::Windows::Forms::Button());
			this->button_admin_oil = (gcnew System::Windows::Forms::Button());
			this->button_admin_electric = (gcnew System::Windows::Forms::Button());
			this->label_admin_name = (gcnew System::Windows::Forms::Label());
			this->button_admin_close = (gcnew System::Windows::Forms::Button());
			this->label_admin_energyTrade = (gcnew System::Windows::Forms::Label());
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
			this->panel_confirm = (gcnew System::Windows::Forms::Panel());
			this->button_confirm_ok = (gcnew System::Windows::Forms::Button());
			this->button_confirm_cancel = (gcnew System::Windows::Forms::Button());
			this->label_confirm_noti = (gcnew System::Windows::Forms::Label());
			this->label_confirm = (gcnew System::Windows::Forms::Label());
			this->button_confirm_close = (gcnew System::Windows::Forms::Button());
			this->panel_register->SuspendLayout();
			this->panel_user->SuspendLayout();
			this->panel_message->SuspendLayout();
			this->panel_admin->SuspendLayout();
			this->panel_admin_add->SuspendLayout();
			this->panel_login->SuspendLayout();
			this->panel_confirm->SuspendLayout();
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
			this->label_register_EnergyTrade->Size = System::Drawing::Size(260, 65);
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
			this->label_register_SignUpTo->Size = System::Drawing::Size(204, 65);
			this->label_register_SignUpTo->TabIndex = 12;
			this->label_register_SignUpTo->Text = L"Sign up to";
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
			this->label_register_ConfirmPassword->Size = System::Drawing::Size(116, 24);
			this->label_register_ConfirmPassword->TabIndex = 17;
			this->label_register_ConfirmPassword->Text = L"Confirm password";
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
			this->label_register_Password->Size = System::Drawing::Size(68, 24);
			this->label_register_Password->TabIndex = 16;
			this->label_register_Password->Text = L"Password";
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
			this->labal_register_Username->Size = System::Drawing::Size(70, 24);
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
			this->label_register_description->Size = System::Drawing::Size(259, 24);
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
			this->checkBox_register_showPassword->Size = System::Drawing::Size(122, 28);
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
			this->textBox_register_conpassword->Size = System::Drawing::Size(340, 19);
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
			this->textBox_register_password->Size = System::Drawing::Size(340, 19);
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
			this->testBox_register_username->Size = System::Drawing::Size(340, 19);
			this->testBox_register_username->TabIndex = 4;
			this->testBox_register_username->TextChanged += gcnew System::EventHandler(this, &MainForm::testBox_register_username_TextChanged);
			// 
			// panel_user
			// 
			this->panel_user->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->panel_user->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_user.BackgroundImage")));
			this->panel_user->Controls->Add(this->Underline_unite);
			this->panel_user->Controls->Add(this->label_user_total3);
			this->panel_user->Controls->Add(this->label_user_total2);
			this->panel_user->Controls->Add(this->label_user_total1);
			this->panel_user->Controls->Add(this->label_user_top3);
			this->panel_user->Controls->Add(this->label_user_top2);
			this->panel_user->Controls->Add(this->label_user_top1);
			this->panel_user->Controls->Add(this->label_user_unitPrice);
			this->panel_user->Controls->Add(this->label_user_unitVolume);
			this->panel_user->Controls->Add(this->label_user_unitLine2);
			this->panel_user->Controls->Add(this->label_user_unitLine1);
			this->panel_user->Controls->Add(this->label_user_valuePrice);
			this->panel_user->Controls->Add(this->label_user_valueVolume);
			this->panel_user->Controls->Add(this->label_user_value2);
			this->panel_user->Controls->Add(this->label_user_value1);
			this->panel_user->Controls->Add(this->Underline_user);
			this->panel_user->Controls->Add(this->button_user_sell);
			this->panel_user->Controls->Add(this->button_user_buy);
			this->panel_user->Controls->Add(this->label_user_unit);
			this->panel_user->Controls->Add(this->textBox_user_unit);
			this->panel_user->Controls->Add(this->label_user_price);
			this->panel_user->Controls->Add(this->label_user_volume);
			this->panel_user->Controls->Add(this->label_user_line2);
			this->panel_user->Controls->Add(this->label_user_line1);
			this->panel_user->Controls->Add(this->label_user_genre);
			this->panel_user->Controls->Add(this->comboBox_user_genre);
			this->panel_user->Controls->Add(this->label_user_enterprise);
			this->panel_user->Controls->Add(this->comboBox_user_company);
			this->panel_user->Controls->Add(this->button_user_logout);
			this->panel_user->Controls->Add(this->button_user_naturalGas);
			this->panel_user->Controls->Add(this->button_user_oil);
			this->panel_user->Controls->Add(this->button_user_electric);
			this->panel_user->Controls->Add(this->label_user_name);
			this->panel_user->Controls->Add(this->button_user_close);
			this->panel_user->Controls->Add(this->label_user_EnergyTrade);
			this->panel_user->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_user->Font = (gcnew System::Drawing::Font(L"Agency FB", 14));
			this->panel_user->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel_user->Location = System::Drawing::Point(0, 0);
			this->panel_user->Name = L"panel_user";
			this->panel_user->Size = System::Drawing::Size(1280, 720);
			this->panel_user->TabIndex = 21;
			this->panel_user->Visible = false;
			this->panel_user->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel_user_Paint);
			this->panel_user->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->panel_user->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->panel_user->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			// 
			// Underline_unite
			// 
			this->Underline_unite->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_unite->Location = System::Drawing::Point(360, 670);
			this->Underline_unite->Name = L"Underline_unite";
			this->Underline_unite->Size = System::Drawing::Size(210, 3);
			this->Underline_unite->TabIndex = 53;
			// 
			// label_user_total3
			// 
			this->label_user_total3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_user_total3->Location = System::Drawing::Point(1040, 60);
			this->label_user_total3->Name = L"label_user_total3";
			this->label_user_total3->Size = System::Drawing::Size(115, 23);
			this->label_user_total3->TabIndex = 52;
			this->label_user_total3->Text = L"Total3";
			// 
			// label_user_total2
			// 
			this->label_user_total2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_user_total2->Location = System::Drawing::Point(835, 60);
			this->label_user_total2->Name = L"label_user_total2";
			this->label_user_total2->Size = System::Drawing::Size(115, 23);
			this->label_user_total2->TabIndex = 51;
			this->label_user_total2->Text = L"Total2";
			// 
			// label_user_total1
			// 
			this->label_user_total1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_user_total1->Location = System::Drawing::Point(650, 60);
			this->label_user_total1->Name = L"label_user_total1";
			this->label_user_total1->Size = System::Drawing::Size(115, 23);
			this->label_user_total1->TabIndex = 50;
			this->label_user_total1->Text = L"Total1";
			// 
			// label_user_top3
			// 
			this->label_user_top3->AutoSize = true;
			this->label_user_top3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_user_top3->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_user_top3->Location = System::Drawing::Point(960, 60);
			this->label_user_top3->Name = L"label_user_top3";
			this->label_user_top3->Size = System::Drawing::Size(79, 23);
			this->label_user_top3->TabIndex = 49;
			this->label_user_top3->Text = L"Natural gas : ";
			// 
			// label_user_top2
			// 
			this->label_user_top2->AutoSize = true;
			this->label_user_top2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_user_top2->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_user_top2->Location = System::Drawing::Point(770, 60);
			this->label_user_top2->Name = L"label_user_top2";
			this->label_user_top2->Size = System::Drawing::Size(65, 23);
			this->label_user_top2->TabIndex = 48;
			this->label_user_top2->Text = L"Crude oil : ";
			// 
			// label_user_top1
			// 
			this->label_user_top1->AutoSize = true;
			this->label_user_top1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_user_top1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_user_top1->Location = System::Drawing::Point(515, 60);
			this->label_user_top1->Name = L"label_user_top1";
			this->label_user_top1->Size = System::Drawing::Size(132, 23);
			this->label_user_top1->TabIndex = 47;
			this->label_user_top1->Text = L"Total of Electric energy :";
			// 
			// label_user_unitPrice
			// 
			this->label_user_unitPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_unitPrice->Location = System::Drawing::Point(920, 480);
			this->label_user_unitPrice->Name = L"label_user_unitPrice";
			this->label_user_unitPrice->Size = System::Drawing::Size(40, 24);
			this->label_user_unitPrice->TabIndex = 38;
			this->label_user_unitPrice->Text = L"$";
			this->label_user_unitPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_user_unitVolume
			// 
			this->label_user_unitVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_unitVolume->Location = System::Drawing::Point(920, 420);
			this->label_user_unitVolume->Name = L"label_user_unitVolume";
			this->label_user_unitVolume->Size = System::Drawing::Size(40, 24);
			this->label_user_unitVolume->TabIndex = 37;
			this->label_user_unitVolume->Text = L"unit";
			this->label_user_unitVolume->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_user_unitLine2
			// 
			this->label_user_unitLine2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_unitLine2->Location = System::Drawing::Point(920, 360);
			this->label_user_unitLine2->Name = L"label_user_unitLine2";
			this->label_user_unitLine2->Size = System::Drawing::Size(40, 24);
			this->label_user_unitLine2->TabIndex = 36;
			this->label_user_unitLine2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_user_unitLine1
			// 
			this->label_user_unitLine1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_unitLine1->Location = System::Drawing::Point(920, 300);
			this->label_user_unitLine1->Name = L"label_user_unitLine1";
			this->label_user_unitLine1->Size = System::Drawing::Size(40, 24);
			this->label_user_unitLine1->TabIndex = 35;
			this->label_user_unitLine1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_user_valuePrice
			// 
			this->label_user_valuePrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_valuePrice->Location = System::Drawing::Point(500, 480);
			this->label_user_valuePrice->Name = L"label_user_valuePrice";
			this->label_user_valuePrice->Size = System::Drawing::Size(400, 24);
			this->label_user_valuePrice->TabIndex = 34;
			this->label_user_valuePrice->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label_user_valueVolume
			// 
			this->label_user_valueVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_valueVolume->Location = System::Drawing::Point(500, 420);
			this->label_user_valueVolume->Name = L"label_user_valueVolume";
			this->label_user_valueVolume->Size = System::Drawing::Size(400, 24);
			this->label_user_valueVolume->TabIndex = 33;
			// 
			// label_user_value2
			// 
			this->label_user_value2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_value2->Location = System::Drawing::Point(500, 360);
			this->label_user_value2->Name = L"label_user_value2";
			this->label_user_value2->Size = System::Drawing::Size(400, 24);
			this->label_user_value2->TabIndex = 32;
			// 
			// label_user_value1
			// 
			this->label_user_value1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_value1->Location = System::Drawing::Point(500, 300);
			this->label_user_value1->Name = L"label_user_value1";
			this->label_user_value1->Size = System::Drawing::Size(400, 24);
			this->label_user_value1->TabIndex = 31;
			// 
			// Underline_user
			// 
			this->Underline_user->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_user->Location = System::Drawing::Point(306, 565);
			this->Underline_user->Name = L"Underline_user";
			this->Underline_user->Size = System::Drawing::Size(924, 2);
			this->Underline_user->TabIndex = 30;
			// 
			// button_user_sell
			// 
			this->button_user_sell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_user_sell->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_user_sell->Location = System::Drawing::Point(1010, 620);
			this->button_user_sell->Name = L"button_user_sell";
			this->button_user_sell->Size = System::Drawing::Size(200, 50);
			this->button_user_sell->TabIndex = 29;
			this->button_user_sell->Text = L"SELL";
			this->button_user_sell->UseVisualStyleBackColor = true;
			this->button_user_sell->Click += gcnew System::EventHandler(this, &MainForm::button_user_sell_Click);
			// 
			// button_user_buy
			// 
			this->button_user_buy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_user_buy->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_user_buy->Location = System::Drawing::Point(790, 620);
			this->button_user_buy->Name = L"button_user_buy";
			this->button_user_buy->Size = System::Drawing::Size(200, 50);
			this->button_user_buy->TabIndex = 28;
			this->button_user_buy->Text = L"BUY";
			this->button_user_buy->UseVisualStyleBackColor = true;
			this->button_user_buy->Click += gcnew System::EventHandler(this, &MainForm::button_user_buy_Click);
			// 
			// label_user_unit
			// 
			this->label_user_unit->AutoSize = true;
			this->label_user_unit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_unit->Font = (gcnew System::Drawing::Font(L"Agency FB", 20));
			this->label_user_unit->Location = System::Drawing::Point(360, 605);
			this->label_user_unit->Name = L"label_user_unit";
			this->label_user_unit->Size = System::Drawing::Size(44, 32);
			this->label_user_unit->TabIndex = 27;
			this->label_user_unit->Text = L"Unit";
			// 
			// textBox_user_unit
			// 
			this->textBox_user_unit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->textBox_user_unit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_user_unit->Location = System::Drawing::Point(365, 640);
			this->textBox_user_unit->Name = L"textBox_user_unit";
			this->textBox_user_unit->Size = System::Drawing::Size(200, 23);
			this->textBox_user_unit->TabIndex = 26;
			// 
			// label_user_price
			// 
			this->label_user_price->AutoSize = true;
			this->label_user_price->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_price->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_user_price->Location = System::Drawing::Point(360, 480);
			this->label_user_price->Name = L"label_user_price";
			this->label_user_price->Size = System::Drawing::Size(66, 24);
			this->label_user_price->TabIndex = 25;
			this->label_user_price->Text = L"Unit price";
			// 
			// label_user_volume
			// 
			this->label_user_volume->AutoSize = true;
			this->label_user_volume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_volume->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_user_volume->Location = System::Drawing::Point(360, 420);
			this->label_user_volume->Name = L"label_user_volume";
			this->label_user_volume->Size = System::Drawing::Size(50, 24);
			this->label_user_volume->TabIndex = 24;
			this->label_user_volume->Text = L"volume";
			// 
			// label_user_line2
			// 
			this->label_user_line2->AutoSize = true;
			this->label_user_line2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_line2->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_user_line2->Location = System::Drawing::Point(360, 360);
			this->label_user_line2->Name = L"label_user_line2";
			this->label_user_line2->Size = System::Drawing::Size(53, 24);
			this->label_user_line2->TabIndex = 23;
			this->label_user_line2->Text = L"License";
			// 
			// label_user_line1
			// 
			this->label_user_line1->AutoSize = true;
			this->label_user_line1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_line1->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_user_line1->Location = System::Drawing::Point(360, 300);
			this->label_user_line1->Name = L"label_user_line1";
			this->label_user_line1->Size = System::Drawing::Size(78, 24);
			this->label_user_line1->TabIndex = 22;
			this->label_user_line1->Text = L"Substations";
			// 
			// label_user_genre
			// 
			this->label_user_genre->AutoSize = true;
			this->label_user_genre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_genre->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_user_genre->Location = System::Drawing::Point(850, 190);
			this->label_user_genre->Name = L"label_user_genre";
			this->label_user_genre->Size = System::Drawing::Size(45, 24);
			this->label_user_genre->TabIndex = 21;
			this->label_user_genre->Text = L"Genre";
			this->label_user_genre->Visible = false;
			this->label_user_genre->Click += gcnew System::EventHandler(this, &MainForm::label_user_genre_Click);
			// 
			// comboBox_user_genre
			// 
			this->comboBox_user_genre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_user_genre->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->comboBox_user_genre->FormattingEnabled = true;
			this->comboBox_user_genre->Location = System::Drawing::Point(850, 220);
			this->comboBox_user_genre->Name = L"comboBox_user_genre";
			this->comboBox_user_genre->Size = System::Drawing::Size(260, 28);
			this->comboBox_user_genre->TabIndex = 20;
			this->comboBox_user_genre->Visible = false;
			this->comboBox_user_genre->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox_user_genre_SelectedIndexChanged);
			// 
			// label_user_enterprise
			// 
			this->label_user_enterprise->AutoSize = true;
			this->label_user_enterprise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_user_enterprise->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_user_enterprise->Location = System::Drawing::Point(360, 190);
			this->label_user_enterprise->Name = L"label_user_enterprise";
			this->label_user_enterprise->Size = System::Drawing::Size(71, 24);
			this->label_user_enterprise->TabIndex = 19;
			this->label_user_enterprise->Text = L"Enterprise";
			this->label_user_enterprise->Click += gcnew System::EventHandler(this, &MainForm::label_user_company_Click);
			// 
			// comboBox_user_company
			// 
			this->comboBox_user_company->BackColor = System::Drawing::SystemColors::HotTrack;
			this->comboBox_user_company->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_user_company->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox_user_company->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->comboBox_user_company->FormattingEnabled = true;
			this->comboBox_user_company->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Test1" });
			this->comboBox_user_company->Location = System::Drawing::Point(360, 220);
			this->comboBox_user_company->Name = L"comboBox_user_company";
			this->comboBox_user_company->Size = System::Drawing::Size(350, 28);
			this->comboBox_user_company->TabIndex = 18;
			this->comboBox_user_company->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox_user_enterprise_SelectedIndexChanged);
			// 
			// button_user_logout
			// 
			this->button_user_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button_user_logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_user_logout->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_user_logout->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_user_logout->Location = System::Drawing::Point(0, 670);
			this->button_user_logout->Name = L"button_user_logout";
			this->button_user_logout->Size = System::Drawing::Size(256, 50);
			this->button_user_logout->TabIndex = 17;
			this->button_user_logout->Text = L"Log out";
			this->button_user_logout->UseVisualStyleBackColor = false;
			this->button_user_logout->Click += gcnew System::EventHandler(this, &MainForm::button_user_logout_Click);
			// 
			// button_user_naturalGas
			// 
			this->button_user_naturalGas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_user_naturalGas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_user_naturalGas->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button_user_naturalGas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_user_naturalGas->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_user_naturalGas->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_user_naturalGas->Location = System::Drawing::Point(25, 340);
			this->button_user_naturalGas->Name = L"button_user_naturalGas";
			this->button_user_naturalGas->Size = System::Drawing::Size(206, 50);
			this->button_user_naturalGas->TabIndex = 16;
			this->button_user_naturalGas->Text = L"Natural gas";
			this->button_user_naturalGas->UseVisualStyleBackColor = false;
			this->button_user_naturalGas->Click += gcnew System::EventHandler(this, &MainForm::button_user_naturalGas_Click);
			// 
			// button_user_oil
			// 
			this->button_user_oil->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_user_oil->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_user_oil->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button_user_oil->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_user_oil->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_user_oil->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_user_oil->Location = System::Drawing::Point(25, 270);
			this->button_user_oil->Name = L"button_user_oil";
			this->button_user_oil->Size = System::Drawing::Size(206, 50);
			this->button_user_oil->TabIndex = 15;
			this->button_user_oil->Text = L"Crude oil";
			this->button_user_oil->UseVisualStyleBackColor = false;
			this->button_user_oil->Click += gcnew System::EventHandler(this, &MainForm::button_user_oil_Click);
			// 
			// button_user_electric
			// 
			this->button_user_electric->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->button_user_electric->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_user_electric->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button_user_electric->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_user_electric->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_user_electric->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_user_electric->Location = System::Drawing::Point(25, 200);
			this->button_user_electric->Name = L"button_user_electric";
			this->button_user_electric->Size = System::Drawing::Size(206, 50);
			this->button_user_electric->TabIndex = 14;
			this->button_user_electric->Text = L"Electric energy";
			this->button_user_electric->UseVisualStyleBackColor = false;
			this->button_user_electric->Click += gcnew System::EventHandler(this, &MainForm::button_user_electric_Click);
			// 
			// label_user_name
			// 
			this->label_user_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->label_user_name->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_user_name->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_user_name->Location = System::Drawing::Point(1, 125);
			this->label_user_name->Name = L"label_user_name";
			this->label_user_name->Size = System::Drawing::Size(254, 24);
			this->label_user_name->TabIndex = 13;
			this->label_user_name->Text = L"Username";
			this->label_user_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_user_close
			// 
			this->button_user_close->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_user_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_user_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F));
			this->button_user_close->ForeColor = System::Drawing::Color::Red;
			this->button_user_close->Location = System::Drawing::Point(1230, 15);
			this->button_user_close->Name = L"button_user_close";
			this->button_user_close->Size = System::Drawing::Size(35, 35);
			this->button_user_close->TabIndex = 12;
			this->button_user_close->Text = L"X";
			this->button_user_close->UseVisualStyleBackColor = false;
			this->button_user_close->Click += gcnew System::EventHandler(this, &MainForm::button_user_close_Click);
			// 
			// label_user_EnergyTrade
			// 
			this->label_user_EnergyTrade->AutoSize = true;
			this->label_user_EnergyTrade->Font = (gcnew System::Drawing::Font(L"Agency FB", 35));
			this->label_user_EnergyTrade->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_user_EnergyTrade->Location = System::Drawing::Point(280, 42);
			this->label_user_EnergyTrade->Name = L"label_user_EnergyTrade";
			this->label_user_EnergyTrade->Size = System::Drawing::Size(210, 55);
			this->label_user_EnergyTrade->TabIndex = 0;
			this->label_user_EnergyTrade->Text = L"Energy Trade";
			// 
			// panel_message
			// 
			this->panel_message->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->panel_message->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel_message->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_message->Controls->Add(this->button_message_ok);
			this->panel_message->Controls->Add(this->label_noti);
			this->panel_message->Controls->Add(this->label_message);
			this->panel_message->Controls->Add(this->button_message_close);
			this->panel_message->Location = System::Drawing::Point(465, 260);
			this->panel_message->Name = L"panel_message";
			this->panel_message->Size = System::Drawing::Size(350, 200);
			this->panel_message->TabIndex = 39;
			this->panel_message->Visible = false;
			// 
			// button_message_ok
			// 
			this->button_message_ok->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_message_ok->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_message_ok->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->button_message_ok->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_message_ok->Location = System::Drawing::Point(265, 160);
			this->button_message_ok->Name = L"button_message_ok";
			this->button_message_ok->Size = System::Drawing::Size(75, 28);
			this->button_message_ok->TabIndex = 16;
			this->button_message_ok->Text = L"OK";
			this->button_message_ok->UseVisualStyleBackColor = false;
			this->button_message_ok->Click += gcnew System::EventHandler(this, &MainForm::button_message_ok_Click);
			// 
			// label_noti
			// 
			this->label_noti->AutoSize = true;
			this->label_noti->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_noti->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_noti->Location = System::Drawing::Point(13, 7);
			this->label_noti->Name = L"label_noti";
			this->label_noti->Size = System::Drawing::Size(73, 24);
			this->label_noti->TabIndex = 15;
			this->label_noti->Text = L"Notification";
			// 
			// label_message
			// 
			this->label_message->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_message->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_message->Location = System::Drawing::Point(36, 61);
			this->label_message->Name = L"label_message";
			this->label_message->Size = System::Drawing::Size(280, 74);
			this->label_message->TabIndex = 14;
			this->label_message->Text = L"label_message";
			this->label_message->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_message_close
			// 
			this->button_message_close->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_message_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_message_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5));
			this->button_message_close->ForeColor = System::Drawing::Color::Red;
			this->button_message_close->Location = System::Drawing::Point(320, 7);
			this->button_message_close->Name = L"button_message_close";
			this->button_message_close->Size = System::Drawing::Size(20, 20);
			this->button_message_close->TabIndex = 13;
			this->button_message_close->Text = L"X";
			this->button_message_close->UseVisualStyleBackColor = false;
			this->button_message_close->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// panel_admin
			// 
			this->panel_admin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->panel_admin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_admin.BackgroundImage")));
			this->panel_admin->Controls->Add(this->label_admin_total3);
			this->panel_admin->Controls->Add(this->label_admin_total2);
			this->panel_admin->Controls->Add(this->label_admin_total1);
			this->panel_admin->Controls->Add(this->label_aadmim_top3);
			this->panel_admin->Controls->Add(this->label_aadmim_top2);
			this->panel_admin->Controls->Add(this->label_aadmim_top1);
			this->panel_admin->Controls->Add(this->panel_admin_add);
			this->panel_admin->Controls->Add(this->button_admin_add);
			this->panel_admin->Controls->Add(this->label_admin_unitUnitPrice);
			this->panel_admin->Controls->Add(this->label_admin_unitVolume);
			this->panel_admin->Controls->Add(this->label_admin_unitline2);
			this->panel_admin->Controls->Add(this->label_admin_unitline1);
			this->panel_admin->Controls->Add(this->label_admin_valueUnitPrice);
			this->panel_admin->Controls->Add(this->label_admin_valueVolume);
			this->panel_admin->Controls->Add(this->label_admin_valueLine2);
			this->panel_admin->Controls->Add(this->label_admin_valueLine1);
			this->panel_admin->Controls->Add(this->Underline_admin);
			this->panel_admin->Controls->Add(this->button_admin_delete);
			this->panel_admin->Controls->Add(this->label_admin_unitPrice);
			this->panel_admin->Controls->Add(this->label_admin_volume);
			this->panel_admin->Controls->Add(this->label_admin_line2);
			this->panel_admin->Controls->Add(this->label_admin_line1);
			this->panel_admin->Controls->Add(this->label_admin_genre);
			this->panel_admin->Controls->Add(this->comboBox_admin_genre);
			this->panel_admin->Controls->Add(this->label_admin_enterpise);
			this->panel_admin->Controls->Add(this->comboBox_admin_enterprise);
			this->panel_admin->Controls->Add(this->button_admin_logout);
			this->panel_admin->Controls->Add(this->button_admin_gas);
			this->panel_admin->Controls->Add(this->button_admin_oil);
			this->panel_admin->Controls->Add(this->button_admin_electric);
			this->panel_admin->Controls->Add(this->label_admin_name);
			this->panel_admin->Controls->Add(this->button_admin_close);
			this->panel_admin->Controls->Add(this->label_admin_energyTrade);
			this->panel_admin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_admin->Font = (gcnew System::Drawing::Font(L"Agency FB", 14));
			this->panel_admin->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel_admin->Location = System::Drawing::Point(0, 0);
			this->panel_admin->Name = L"panel_admin";
			this->panel_admin->Size = System::Drawing::Size(1280, 720);
			this->panel_admin->TabIndex = 39;
			this->panel_admin->Visible = false;
			this->panel_admin->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->panel_admin->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->panel_admin->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			// 
			// label_admin_total3
			// 
			this->label_admin_total3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_admin_total3->Location = System::Drawing::Point(1040, 60);
			this->label_admin_total3->Name = L"label_admin_total3";
			this->label_admin_total3->Size = System::Drawing::Size(115, 23);
			this->label_admin_total3->TabIndex = 46;
			this->label_admin_total3->Text = L"Total3";
			// 
			// label_admin_total2
			// 
			this->label_admin_total2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_admin_total2->Location = System::Drawing::Point(835, 60);
			this->label_admin_total2->Name = L"label_admin_total2";
			this->label_admin_total2->Size = System::Drawing::Size(115, 23);
			this->label_admin_total2->TabIndex = 45;
			this->label_admin_total2->Text = L"Total2";
			// 
			// label_admin_total1
			// 
			this->label_admin_total1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_admin_total1->Location = System::Drawing::Point(650, 60);
			this->label_admin_total1->Name = L"label_admin_total1";
			this->label_admin_total1->Size = System::Drawing::Size(115, 23);
			this->label_admin_total1->TabIndex = 44;
			this->label_admin_total1->Text = L"Total1";
			// 
			// label_aadmim_top3
			// 
			this->label_aadmim_top3->AutoSize = true;
			this->label_aadmim_top3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_aadmim_top3->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_aadmim_top3->Location = System::Drawing::Point(960, 60);
			this->label_aadmim_top3->Name = L"label_aadmim_top3";
			this->label_aadmim_top3->Size = System::Drawing::Size(79, 23);
			this->label_aadmim_top3->TabIndex = 43;
			this->label_aadmim_top3->Text = L"Natural gas : ";
			// 
			// label_aadmim_top2
			// 
			this->label_aadmim_top2->AutoSize = true;
			this->label_aadmim_top2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_aadmim_top2->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_aadmim_top2->Location = System::Drawing::Point(770, 60);
			this->label_aadmim_top2->Name = L"label_aadmim_top2";
			this->label_aadmim_top2->Size = System::Drawing::Size(65, 23);
			this->label_aadmim_top2->TabIndex = 42;
			this->label_aadmim_top2->Text = L"Crude oil : ";
			// 
			// label_aadmim_top1
			// 
			this->label_aadmim_top1->AutoSize = true;
			this->label_aadmim_top1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_aadmim_top1->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_aadmim_top1->Location = System::Drawing::Point(515, 60);
			this->label_aadmim_top1->Name = L"label_aadmim_top1";
			this->label_aadmim_top1->Size = System::Drawing::Size(132, 23);
			this->label_aadmim_top1->TabIndex = 41;
			this->label_aadmim_top1->Text = L"Total of Electric energy :";
			// 
			// panel_admin_add
			// 
			this->panel_admin_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->panel_admin_add->Controls->Add(this->button_admin_addAll);
			this->panel_admin_add->Controls->Add(this->comboBox_admin_add_genre);
			this->panel_admin_add->Controls->Add(this->label_admin_add_genre);
			this->panel_admin_add->Controls->Add(this->label_admin_add_unitUnitPrice);
			this->panel_admin_add->Controls->Add(this->label_admin_add_unitVolume);
			this->panel_admin_add->Controls->Add(this->label2);
			this->panel_admin_add->Controls->Add(this->label_admin_add_unitLine2);
			this->panel_admin_add->Controls->Add(this->label_admin_add_unitLine1);
			this->panel_admin_add->Controls->Add(this->Underline_admin_add_line5);
			this->panel_admin_add->Controls->Add(this->Underline_admin_add_line4);
			this->panel_admin_add->Controls->Add(this->Underline_admin_add_line3);
			this->panel_admin_add->Controls->Add(this->Underline_admin_add_line2);
			this->panel_admin_add->Controls->Add(this->Underline_admin_add_line1);
			this->panel_admin_add->Controls->Add(this->textBox_admin_add_unitePrice);
			this->panel_admin_add->Controls->Add(this->textBox_admin_add_volume);
			this->panel_admin_add->Controls->Add(this->textBox_admin_add_line2);
			this->panel_admin_add->Controls->Add(this->textBox_admin_add_line1);
			this->panel_admin_add->Controls->Add(this->textBox_admin_add_enterprise);
			this->panel_admin_add->Controls->Add(this->comboBox_admin_add_catagory);
			this->panel_admin_add->Controls->Add(this->Underline_admin_add);
			this->panel_admin_add->Controls->Add(this->label_admin_add_category);
			this->panel_admin_add->Controls->Add(this->label_admin_add_unitPrice);
			this->panel_admin_add->Controls->Add(this->label_admin_add_volume);
			this->panel_admin_add->Controls->Add(this->label_admin_add_line2);
			this->panel_admin_add->Controls->Add(this->label_admin_add_line1);
			this->panel_admin_add->Controls->Add(this->label_admin_add_enterprise);
			this->panel_admin_add->Location = System::Drawing::Point(257, 145);
			this->panel_admin_add->Name = L"panel_admin_add";
			this->panel_admin_add->Size = System::Drawing::Size(1021, 575);
			this->panel_admin_add->TabIndex = 40;
			this->panel_admin_add->Visible = false;
			this->panel_admin_add->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel_admin_add_Paint);
			// 
			// button_admin_addAll
			// 
			this->button_admin_addAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_admin_addAll->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin_addAll->Location = System::Drawing::Point(753, 475);
			this->button_admin_addAll->Name = L"button_admin_addAll";
			this->button_admin_addAll->Size = System::Drawing::Size(200, 50);
			this->button_admin_addAll->TabIndex = 63;
			this->button_admin_addAll->Text = L"Add";
			this->button_admin_addAll->UseVisualStyleBackColor = true;
			this->button_admin_addAll->Click += gcnew System::EventHandler(this, &MainForm::button_admin_addAll_Click);
			// 
			// comboBox_admin_add_genre
			// 
			this->comboBox_admin_add_genre->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				L"Electric energy",
					L"Crude oil", L"Natural gas"
			});
			this->comboBox_admin_add_genre->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox_admin_add_genre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_admin_add_genre->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->comboBox_admin_add_genre->FormattingEnabled = true;
			this->comboBox_admin_add_genre->Location = System::Drawing::Point(630, 46);
			this->comboBox_admin_add_genre->Name = L"comboBox_admin_add_genre";
			this->comboBox_admin_add_genre->Size = System::Drawing::Size(200, 28);
			this->comboBox_admin_add_genre->TabIndex = 62;
			this->comboBox_admin_add_genre->Visible = false;
			// 
			// label_admin_add_genre
			// 
			this->label_admin_add_genre->AutoSize = true;
			this->label_admin_add_genre->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_add_genre->Location = System::Drawing::Point(505, 45);
			this->label_admin_add_genre->Name = L"label_admin_add_genre";
			this->label_admin_add_genre->Size = System::Drawing::Size(45, 24);
			this->label_admin_add_genre->TabIndex = 61;
			this->label_admin_add_genre->Text = L"Genre";
			this->label_admin_add_genre->Visible = false;
			// 
			// label_admin_add_unitUnitPrice
			// 
			this->label_admin_add_unitUnitPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_unitUnitPrice->Location = System::Drawing::Point(663, 345);
			this->label_admin_add_unitUnitPrice->Name = L"label_admin_add_unitUnitPrice";
			this->label_admin_add_unitUnitPrice->Size = System::Drawing::Size(40, 24);
			this->label_admin_add_unitUnitPrice->TabIndex = 60;
			this->label_admin_add_unitUnitPrice->Text = L"$";
			this->label_admin_add_unitUnitPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_admin_add_unitVolume
			// 
			this->label_admin_add_unitVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_unitVolume->Location = System::Drawing::Point(663, 285);
			this->label_admin_add_unitVolume->Name = L"label_admin_add_unitVolume";
			this->label_admin_add_unitVolume->Size = System::Drawing::Size(40, 24);
			this->label_admin_add_unitVolume->TabIndex = 59;
			this->label_admin_add_unitVolume->Text = L"unit";
			this->label_admin_add_unitVolume->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label2->Location = System::Drawing::Point(663, 285);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 24);
			this->label2->TabIndex = 58;
			this->label2->Text = L"unit";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_admin_add_unitLine2
			// 
			this->label_admin_add_unitLine2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_unitLine2->Location = System::Drawing::Point(663, 225);
			this->label_admin_add_unitLine2->Name = L"label_admin_add_unitLine2";
			this->label_admin_add_unitLine2->Size = System::Drawing::Size(40, 24);
			this->label_admin_add_unitLine2->TabIndex = 57;
			this->label_admin_add_unitLine2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_admin_add_unitLine1
			// 
			this->label_admin_add_unitLine1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_unitLine1->Location = System::Drawing::Point(663, 165);
			this->label_admin_add_unitLine1->Name = L"label_admin_add_unitLine1";
			this->label_admin_add_unitLine1->Size = System::Drawing::Size(40, 24);
			this->label_admin_add_unitLine1->TabIndex = 41;
			this->label_admin_add_unitLine1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Underline_admin_add_line5
			// 
			this->Underline_admin_add_line5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_admin_add_line5->Location = System::Drawing::Point(240, 370);
			this->Underline_admin_add_line5->Name = L"Underline_admin_add_line5";
			this->Underline_admin_add_line5->Size = System::Drawing::Size(410, 2);
			this->Underline_admin_add_line5->TabIndex = 56;
			// 
			// Underline_admin_add_line4
			// 
			this->Underline_admin_add_line4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_admin_add_line4->Location = System::Drawing::Point(240, 310);
			this->Underline_admin_add_line4->Name = L"Underline_admin_add_line4";
			this->Underline_admin_add_line4->Size = System::Drawing::Size(410, 2);
			this->Underline_admin_add_line4->TabIndex = 55;
			// 
			// Underline_admin_add_line3
			// 
			this->Underline_admin_add_line3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_admin_add_line3->Location = System::Drawing::Point(240, 250);
			this->Underline_admin_add_line3->Name = L"Underline_admin_add_line3";
			this->Underline_admin_add_line3->Size = System::Drawing::Size(410, 2);
			this->Underline_admin_add_line3->TabIndex = 54;
			// 
			// Underline_admin_add_line2
			// 
			this->Underline_admin_add_line2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_admin_add_line2->Location = System::Drawing::Point(240, 190);
			this->Underline_admin_add_line2->Name = L"Underline_admin_add_line2";
			this->Underline_admin_add_line2->Size = System::Drawing::Size(410, 2);
			this->Underline_admin_add_line2->TabIndex = 53;
			// 
			// Underline_admin_add_line1
			// 
			this->Underline_admin_add_line1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_admin_add_line1->Location = System::Drawing::Point(240, 130);
			this->Underline_admin_add_line1->Name = L"Underline_admin_add_line1";
			this->Underline_admin_add_line1->Size = System::Drawing::Size(410, 2);
			this->Underline_admin_add_line1->TabIndex = 52;
			// 
			// textBox_admin_add_unitePrice
			// 
			this->textBox_admin_add_unitePrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->textBox_admin_add_unitePrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_admin_add_unitePrice->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_admin_add_unitePrice->Location = System::Drawing::Point(245, 345);
			this->textBox_admin_add_unitePrice->Name = L"textBox_admin_add_unitePrice";
			this->textBox_admin_add_unitePrice->Size = System::Drawing::Size(400, 23);
			this->textBox_admin_add_unitePrice->TabIndex = 51;
			// 
			// textBox_admin_add_volume
			// 
			this->textBox_admin_add_volume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->textBox_admin_add_volume->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_admin_add_volume->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_admin_add_volume->Location = System::Drawing::Point(245, 285);
			this->textBox_admin_add_volume->Name = L"textBox_admin_add_volume";
			this->textBox_admin_add_volume->Size = System::Drawing::Size(400, 23);
			this->textBox_admin_add_volume->TabIndex = 50;
			// 
			// textBox_admin_add_line2
			// 
			this->textBox_admin_add_line2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->textBox_admin_add_line2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_admin_add_line2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_admin_add_line2->Location = System::Drawing::Point(245, 225);
			this->textBox_admin_add_line2->Name = L"textBox_admin_add_line2";
			this->textBox_admin_add_line2->Size = System::Drawing::Size(400, 23);
			this->textBox_admin_add_line2->TabIndex = 49;
			// 
			// textBox_admin_add_line1
			// 
			this->textBox_admin_add_line1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->textBox_admin_add_line1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_admin_add_line1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_admin_add_line1->Location = System::Drawing::Point(245, 165);
			this->textBox_admin_add_line1->Name = L"textBox_admin_add_line1";
			this->textBox_admin_add_line1->Size = System::Drawing::Size(400, 23);
			this->textBox_admin_add_line1->TabIndex = 48;
			// 
			// textBox_admin_add_enterprise
			// 
			this->textBox_admin_add_enterprise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->textBox_admin_add_enterprise->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_admin_add_enterprise->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox_admin_add_enterprise->Location = System::Drawing::Point(245, 105);
			this->textBox_admin_add_enterprise->Name = L"textBox_admin_add_enterprise";
			this->textBox_admin_add_enterprise->Size = System::Drawing::Size(400, 23);
			this->textBox_admin_add_enterprise->TabIndex = 47;
			// 
			// comboBox_admin_add_catagory
			// 
			this->comboBox_admin_add_catagory->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				L"Electric energy",
					L"Crude oil", L"Natural gas"
			});
			this->comboBox_admin_add_catagory->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox_admin_add_catagory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_admin_add_catagory->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->comboBox_admin_add_catagory->FormattingEnabled = true;
			this->comboBox_admin_add_catagory->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Electric energy", L"Crude oil",
					L"Natural gas"
			});
			this->comboBox_admin_add_catagory->Location = System::Drawing::Point(244, 46);
			this->comboBox_admin_add_catagory->Name = L"comboBox_admin_add_catagory";
			this->comboBox_admin_add_catagory->Size = System::Drawing::Size(200, 28);
			this->comboBox_admin_add_catagory->TabIndex = 46;
			this->comboBox_admin_add_catagory->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox_admin_add_catagory_SelectedIndexChanged);
			// 
			// Underline_admin_add
			// 
			this->Underline_admin_add->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_admin_add->Location = System::Drawing::Point(49, 420);
			this->Underline_admin_add->Name = L"Underline_admin_add";
			this->Underline_admin_add->Size = System::Drawing::Size(924, 2);
			this->Underline_admin_add->TabIndex = 45;
			// 
			// label_admin_add_category
			// 
			this->label_admin_add_category->AutoSize = true;
			this->label_admin_add_category->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_add_category->Location = System::Drawing::Point(105, 45);
			this->label_admin_add_category->Name = L"label_admin_add_category";
			this->label_admin_add_category->Size = System::Drawing::Size(61, 24);
			this->label_admin_add_category->TabIndex = 44;
			this->label_admin_add_category->Text = L"Category";
			// 
			// label_admin_add_unitPrice
			// 
			this->label_admin_add_unitPrice->AutoSize = true;
			this->label_admin_add_unitPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_unitPrice->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_add_unitPrice->Location = System::Drawing::Point(105, 345);
			this->label_admin_add_unitPrice->Name = L"label_admin_add_unitPrice";
			this->label_admin_add_unitPrice->Size = System::Drawing::Size(66, 24);
			this->label_admin_add_unitPrice->TabIndex = 43;
			this->label_admin_add_unitPrice->Text = L"Unit price";
			// 
			// label_admin_add_volume
			// 
			this->label_admin_add_volume->AutoSize = true;
			this->label_admin_add_volume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_volume->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_add_volume->Location = System::Drawing::Point(105, 285);
			this->label_admin_add_volume->Name = L"label_admin_add_volume";
			this->label_admin_add_volume->Size = System::Drawing::Size(50, 24);
			this->label_admin_add_volume->TabIndex = 42;
			this->label_admin_add_volume->Text = L"volume";
			// 
			// label_admin_add_line2
			// 
			this->label_admin_add_line2->AutoSize = true;
			this->label_admin_add_line2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_line2->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_add_line2->Location = System::Drawing::Point(105, 225);
			this->label_admin_add_line2->Name = L"label_admin_add_line2";
			this->label_admin_add_line2->Size = System::Drawing::Size(53, 24);
			this->label_admin_add_line2->TabIndex = 41;
			this->label_admin_add_line2->Text = L"License";
			// 
			// label_admin_add_line1
			// 
			this->label_admin_add_line1->AutoSize = true;
			this->label_admin_add_line1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_line1->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_add_line1->Location = System::Drawing::Point(105, 165);
			this->label_admin_add_line1->Name = L"label_admin_add_line1";
			this->label_admin_add_line1->Size = System::Drawing::Size(78, 24);
			this->label_admin_add_line1->TabIndex = 23;
			this->label_admin_add_line1->Text = L"Substations";
			// 
			// label_admin_add_enterprise
			// 
			this->label_admin_add_enterprise->AutoSize = true;
			this->label_admin_add_enterprise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_add_enterprise->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_add_enterprise->Location = System::Drawing::Point(105, 105);
			this->label_admin_add_enterprise->Name = L"label_admin_add_enterprise";
			this->label_admin_add_enterprise->Size = System::Drawing::Size(71, 24);
			this->label_admin_add_enterprise->TabIndex = 20;
			this->label_admin_add_enterprise->Text = L"Enterprise";
			// 
			// button_admin_add
			// 
			this->button_admin_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_admin_add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_admin_add->Cursor = System::Windows::Forms::Cursors::Default;
			this->button_admin_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_admin_add->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_admin_add->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin_add->Location = System::Drawing::Point(25, 600);
			this->button_admin_add->Name = L"button_admin_add";
			this->button_admin_add->Size = System::Drawing::Size(206, 50);
			this->button_admin_add->TabIndex = 39;
			this->button_admin_add->Text = L"Add Information";
			this->button_admin_add->UseVisualStyleBackColor = false;
			this->button_admin_add->Click += gcnew System::EventHandler(this, &MainForm::button_admin_add_Click);
			this->button_admin_add->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->button_admin_add->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->button_admin_add->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			// 
			// label_admin_unitUnitPrice
			// 
			this->label_admin_unitUnitPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_unitUnitPrice->Location = System::Drawing::Point(920, 480);
			this->label_admin_unitUnitPrice->Name = L"label_admin_unitUnitPrice";
			this->label_admin_unitUnitPrice->Size = System::Drawing::Size(40, 24);
			this->label_admin_unitUnitPrice->TabIndex = 38;
			this->label_admin_unitUnitPrice->Text = L"$";
			this->label_admin_unitUnitPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_admin_unitVolume
			// 
			this->label_admin_unitVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_unitVolume->Location = System::Drawing::Point(920, 420);
			this->label_admin_unitVolume->Name = L"label_admin_unitVolume";
			this->label_admin_unitVolume->Size = System::Drawing::Size(40, 24);
			this->label_admin_unitVolume->TabIndex = 37;
			this->label_admin_unitVolume->Text = L"unit";
			this->label_admin_unitVolume->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_admin_unitline2
			// 
			this->label_admin_unitline2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_unitline2->Location = System::Drawing::Point(920, 360);
			this->label_admin_unitline2->Name = L"label_admin_unitline2";
			this->label_admin_unitline2->Size = System::Drawing::Size(40, 24);
			this->label_admin_unitline2->TabIndex = 36;
			this->label_admin_unitline2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_admin_unitline1
			// 
			this->label_admin_unitline1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_unitline1->Location = System::Drawing::Point(920, 300);
			this->label_admin_unitline1->Name = L"label_admin_unitline1";
			this->label_admin_unitline1->Size = System::Drawing::Size(40, 24);
			this->label_admin_unitline1->TabIndex = 35;
			this->label_admin_unitline1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_admin_valueUnitPrice
			// 
			this->label_admin_valueUnitPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_valueUnitPrice->Location = System::Drawing::Point(500, 480);
			this->label_admin_valueUnitPrice->Name = L"label_admin_valueUnitPrice";
			this->label_admin_valueUnitPrice->Size = System::Drawing::Size(400, 24);
			this->label_admin_valueUnitPrice->TabIndex = 34;
			// 
			// label_admin_valueVolume
			// 
			this->label_admin_valueVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_valueVolume->Location = System::Drawing::Point(500, 420);
			this->label_admin_valueVolume->Name = L"label_admin_valueVolume";
			this->label_admin_valueVolume->Size = System::Drawing::Size(400, 24);
			this->label_admin_valueVolume->TabIndex = 33;
			// 
			// label_admin_valueLine2
			// 
			this->label_admin_valueLine2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_valueLine2->Location = System::Drawing::Point(500, 360);
			this->label_admin_valueLine2->Name = L"label_admin_valueLine2";
			this->label_admin_valueLine2->Size = System::Drawing::Size(400, 24);
			this->label_admin_valueLine2->TabIndex = 32;
			// 
			// label_admin_valueLine1
			// 
			this->label_admin_valueLine1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_valueLine1->Location = System::Drawing::Point(500, 300);
			this->label_admin_valueLine1->Name = L"label_admin_valueLine1";
			this->label_admin_valueLine1->Size = System::Drawing::Size(400, 24);
			this->label_admin_valueLine1->TabIndex = 31;
			// 
			// Underline_admin
			// 
			this->Underline_admin->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Underline_admin->Location = System::Drawing::Point(306, 565);
			this->Underline_admin->Name = L"Underline_admin";
			this->Underline_admin->Size = System::Drawing::Size(924, 2);
			this->Underline_admin->TabIndex = 30;
			// 
			// button_admin_delete
			// 
			this->button_admin_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_admin_delete->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin_delete->Location = System::Drawing::Point(1010, 620);
			this->button_admin_delete->Name = L"button_admin_delete";
			this->button_admin_delete->Size = System::Drawing::Size(200, 50);
			this->button_admin_delete->TabIndex = 29;
			this->button_admin_delete->Text = L"Delete";
			this->button_admin_delete->UseVisualStyleBackColor = true;
			// 
			// label_admin_unitPrice
			// 
			this->label_admin_unitPrice->AutoSize = true;
			this->label_admin_unitPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_unitPrice->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_unitPrice->Location = System::Drawing::Point(360, 480);
			this->label_admin_unitPrice->Name = L"label_admin_unitPrice";
			this->label_admin_unitPrice->Size = System::Drawing::Size(66, 24);
			this->label_admin_unitPrice->TabIndex = 25;
			this->label_admin_unitPrice->Text = L"Unit price";
			// 
			// label_admin_volume
			// 
			this->label_admin_volume->AutoSize = true;
			this->label_admin_volume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_volume->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_volume->Location = System::Drawing::Point(360, 420);
			this->label_admin_volume->Name = L"label_admin_volume";
			this->label_admin_volume->Size = System::Drawing::Size(50, 24);
			this->label_admin_volume->TabIndex = 24;
			this->label_admin_volume->Text = L"volume";
			// 
			// label_admin_line2
			// 
			this->label_admin_line2->AutoSize = true;
			this->label_admin_line2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_line2->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_line2->Location = System::Drawing::Point(360, 360);
			this->label_admin_line2->Name = L"label_admin_line2";
			this->label_admin_line2->Size = System::Drawing::Size(53, 24);
			this->label_admin_line2->TabIndex = 23;
			this->label_admin_line2->Text = L"License";
			// 
			// label_admin_line1
			// 
			this->label_admin_line1->AutoSize = true;
			this->label_admin_line1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_line1->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_line1->Location = System::Drawing::Point(360, 300);
			this->label_admin_line1->Name = L"label_admin_line1";
			this->label_admin_line1->Size = System::Drawing::Size(78, 24);
			this->label_admin_line1->TabIndex = 22;
			this->label_admin_line1->Text = L"Substations";
			// 
			// label_admin_genre
			// 
			this->label_admin_genre->AutoSize = true;
			this->label_admin_genre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_genre->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_genre->Location = System::Drawing::Point(850, 190);
			this->label_admin_genre->Name = L"label_admin_genre";
			this->label_admin_genre->Size = System::Drawing::Size(45, 24);
			this->label_admin_genre->TabIndex = 21;
			this->label_admin_genre->Text = L"Genre";
			this->label_admin_genre->Visible = false;
			this->label_admin_genre->Click += gcnew System::EventHandler(this, &MainForm::label_admin_genre_Click);
			// 
			// comboBox_admin_genre
			// 
			this->comboBox_admin_genre->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_admin_genre->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->comboBox_admin_genre->FormattingEnabled = true;
			this->comboBox_admin_genre->Location = System::Drawing::Point(850, 220);
			this->comboBox_admin_genre->Name = L"comboBox_admin_genre";
			this->comboBox_admin_genre->Size = System::Drawing::Size(260, 28);
			this->comboBox_admin_genre->TabIndex = 20;
			this->comboBox_admin_genre->Visible = false;
			// 
			// label_admin_enterpise
			// 
			this->label_admin_enterpise->AutoSize = true;
			this->label_admin_enterpise->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label_admin_enterpise->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_enterpise->Location = System::Drawing::Point(360, 190);
			this->label_admin_enterpise->Name = L"label_admin_enterpise";
			this->label_admin_enterpise->Size = System::Drawing::Size(71, 24);
			this->label_admin_enterpise->TabIndex = 19;
			this->label_admin_enterpise->Text = L"Enterprise";
			// 
			// comboBox_admin_enterprise
			// 
			this->comboBox_admin_enterprise->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox_admin_enterprise->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_admin_enterprise->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->comboBox_admin_enterprise->FormattingEnabled = true;
			this->comboBox_admin_enterprise->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Test1" });
			this->comboBox_admin_enterprise->Location = System::Drawing::Point(360, 220);
			this->comboBox_admin_enterprise->Name = L"comboBox_admin_enterprise";
			this->comboBox_admin_enterprise->Size = System::Drawing::Size(350, 28);
			this->comboBox_admin_enterprise->TabIndex = 18;
			this->comboBox_admin_enterprise->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox_admin_enterprise_SelectedIndexChanged);
			// 
			// button_admin_logout
			// 
			this->button_admin_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button_admin_logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_admin_logout->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_admin_logout->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin_logout->Location = System::Drawing::Point(0, 670);
			this->button_admin_logout->Name = L"button_admin_logout";
			this->button_admin_logout->Size = System::Drawing::Size(256, 50);
			this->button_admin_logout->TabIndex = 17;
			this->button_admin_logout->Text = L"Log out";
			this->button_admin_logout->UseVisualStyleBackColor = false;
			this->button_admin_logout->Click += gcnew System::EventHandler(this, &MainForm::button_admin_logout_Click);
			// 
			// button_admin_gas
			// 
			this->button_admin_gas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_admin_gas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_admin_gas->Cursor = System::Windows::Forms::Cursors::Default;
			this->button_admin_gas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_admin_gas->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_admin_gas->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin_gas->Location = System::Drawing::Point(25, 340);
			this->button_admin_gas->Name = L"button_admin_gas";
			this->button_admin_gas->Size = System::Drawing::Size(206, 50);
			this->button_admin_gas->TabIndex = 16;
			this->button_admin_gas->Text = L"Natural gas";
			this->button_admin_gas->UseVisualStyleBackColor = false;
			this->button_admin_gas->Click += gcnew System::EventHandler(this, &MainForm::button_admin_gas_Click);
			// 
			// button_admin_oil
			// 
			this->button_admin_oil->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_admin_oil->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_admin_oil->Cursor = System::Windows::Forms::Cursors::Default;
			this->button_admin_oil->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_admin_oil->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_admin_oil->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin_oil->Location = System::Drawing::Point(25, 270);
			this->button_admin_oil->Name = L"button_admin_oil";
			this->button_admin_oil->Size = System::Drawing::Size(206, 50);
			this->button_admin_oil->TabIndex = 15;
			this->button_admin_oil->Text = L"Crude oil";
			this->button_admin_oil->UseVisualStyleBackColor = false;
			this->button_admin_oil->Click += gcnew System::EventHandler(this, &MainForm::button_admin_oil_Click);
			// 
			// button_admin_electric
			// 
			this->button_admin_electric->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->button_admin_electric->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_admin_electric->Cursor = System::Windows::Forms::Cursors::Default;
			this->button_admin_electric->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_admin_electric->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->button_admin_electric->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_admin_electric->Location = System::Drawing::Point(25, 200);
			this->button_admin_electric->Name = L"button_admin_electric";
			this->button_admin_electric->Size = System::Drawing::Size(206, 50);
			this->button_admin_electric->TabIndex = 14;
			this->button_admin_electric->Text = L"Electric energy";
			this->button_admin_electric->UseVisualStyleBackColor = false;
			this->button_admin_electric->Click += gcnew System::EventHandler(this, &MainForm::button_admin_electric_Click);
			// 
			// label_admin_name
			// 
			this->label_admin_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)));
			this->label_admin_name->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_admin_name->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_admin_name->Location = System::Drawing::Point(1, 125);
			this->label_admin_name->Name = L"label_admin_name";
			this->label_admin_name->Size = System::Drawing::Size(254, 24);
			this->label_admin_name->TabIndex = 13;
			this->label_admin_name->Text = L"Jiruschai";
			this->label_admin_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_admin_close
			// 
			this->button_admin_close->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_admin_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_admin_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F));
			this->button_admin_close->ForeColor = System::Drawing::Color::Red;
			this->button_admin_close->Location = System::Drawing::Point(1230, 15);
			this->button_admin_close->Name = L"button_admin_close";
			this->button_admin_close->Size = System::Drawing::Size(35, 35);
			this->button_admin_close->TabIndex = 12;
			this->button_admin_close->Text = L"X";
			this->button_admin_close->UseVisualStyleBackColor = false;
			this->button_admin_close->Click += gcnew System::EventHandler(this, &MainForm::button_admin_close_Click);
			// 
			// label_admin_energyTrade
			// 
			this->label_admin_energyTrade->AutoSize = true;
			this->label_admin_energyTrade->Font = (gcnew System::Drawing::Font(L"Agency FB", 35));
			this->label_admin_energyTrade->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->label_admin_energyTrade->Location = System::Drawing::Point(280, 42);
			this->label_admin_energyTrade->Name = L"label_admin_energyTrade";
			this->label_admin_energyTrade->Size = System::Drawing::Size(210, 55);
			this->label_admin_energyTrade->TabIndex = 0;
			this->label_admin_energyTrade->Text = L"Energy Trade";
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
			this->label_login_password->Size = System::Drawing::Size(68, 24);
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
			this->label_login_username->Size = System::Drawing::Size(70, 24);
			this->label_login_username->TabIndex = 19;
			this->label_login_username->Text = L"Username";
			// 
			// label_login_description
			// 
			this->label_login_description->AutoSize = true;
			this->label_login_description->Location = System::Drawing::Point(500, 125);
			this->label_login_description->Name = L"label_login_description";
			this->label_login_description->Size = System::Drawing::Size(263, 24);
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
			this->label_login_EnergyTrade->Size = System::Drawing::Size(260, 65);
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
			this->label_login_logInTo->Size = System::Drawing::Size(164, 65);
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
			this->button_login_close->Click += gcnew System::EventHandler(this, &MainForm::button_login_close_Click);
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
			this->checkBox_login_showPassword->Size = System::Drawing::Size(122, 28);
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
			this->textBox_login_password->Size = System::Drawing::Size(340, 19);
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
			this->textBox_login_username->Size = System::Drawing::Size(340, 19);
			this->textBox_login_username->TabIndex = 10;
			// 
			// panel_confirm
			// 
			this->panel_confirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->panel_confirm->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel_confirm->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_confirm->Controls->Add(this->button_confirm_ok);
			this->panel_confirm->Controls->Add(this->button_confirm_cancel);
			this->panel_confirm->Controls->Add(this->label_confirm_noti);
			this->panel_confirm->Controls->Add(this->label_confirm);
			this->panel_confirm->Controls->Add(this->button_confirm_close);
			this->panel_confirm->Location = System::Drawing::Point(465, 260);
			this->panel_confirm->Name = L"panel_confirm";
			this->panel_confirm->Size = System::Drawing::Size(350, 200);
			this->panel_confirm->TabIndex = 40;
			this->panel_confirm->Visible = false;
			// 
			// button_confirm_ok
			// 
			this->button_confirm_ok->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button_confirm_ok->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_confirm_ok->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->button_confirm_ok->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_confirm_ok->Location = System::Drawing::Point(188, 160);
			this->button_confirm_ok->Name = L"button_confirm_ok";
			this->button_confirm_ok->Size = System::Drawing::Size(75, 28);
			this->button_confirm_ok->TabIndex = 17;
			this->button_confirm_ok->Text = L"OK";
			this->button_confirm_ok->UseVisualStyleBackColor = false;
			this->button_confirm_ok->Click += gcnew System::EventHandler(this, &MainForm::button_confirm_ok_Click);
			// 
			// button_confirm_cancel
			// 
			this->button_confirm_cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_confirm_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_confirm_cancel->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->button_confirm_cancel->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button_confirm_cancel->Location = System::Drawing::Point(265, 160);
			this->button_confirm_cancel->Name = L"button_confirm_cancel";
			this->button_confirm_cancel->Size = System::Drawing::Size(75, 28);
			this->button_confirm_cancel->TabIndex = 16;
			this->button_confirm_cancel->Text = L"Cancel";
			this->button_confirm_cancel->UseVisualStyleBackColor = false;
			this->button_confirm_cancel->Click += gcnew System::EventHandler(this, &MainForm::button_confirm_cancel_Click);
			// 
			// label_confirm_noti
			// 
			this->label_confirm_noti->AutoSize = true;
			this->label_confirm_noti->Font = (gcnew System::Drawing::Font(L"Agency FB", 15));
			this->label_confirm_noti->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_confirm_noti->Location = System::Drawing::Point(13, 7);
			this->label_confirm_noti->Name = L"label_confirm_noti";
			this->label_confirm_noti->Size = System::Drawing::Size(73, 24);
			this->label_confirm_noti->TabIndex = 15;
			this->label_confirm_noti->Text = L"Notification";
			// 
			// label_confirm
			// 
			this->label_confirm->Font = (gcnew System::Drawing::Font(L"Agency FB", 13));
			this->label_confirm->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label_confirm->Location = System::Drawing::Point(36, 61);
			this->label_confirm->Name = L"label_confirm";
			this->label_confirm->Size = System::Drawing::Size(280, 74);
			this->label_confirm->TabIndex = 14;
			this->label_confirm->Text = L"Are you sure you want to exit";
			this->label_confirm->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_confirm_close
			// 
			this->button_confirm_close->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_confirm_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_confirm_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5));
			this->button_confirm_close->ForeColor = System::Drawing::Color::Red;
			this->button_confirm_close->Location = System::Drawing::Point(320, 7);
			this->button_confirm_close->Name = L"button_confirm_close";
			this->button_confirm_close->Size = System::Drawing::Size(20, 20);
			this->button_confirm_close->TabIndex = 13;
			this->button_confirm_close->Text = L"X";
			this->button_confirm_close->UseVisualStyleBackColor = false;
			this->button_confirm_close->Click += gcnew System::EventHandler(this, &MainForm::button_confirm_close_Click);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel_register);
			this->Controls->Add(this->panel_confirm);
			this->Controls->Add(this->panel_user);
			this->Controls->Add(this->panel_login);
			this->Controls->Add(this->panel_admin);
			this->Controls->Add(this->panel_message);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			this->panel_register->ResumeLayout(false);
			this->panel_register->PerformLayout();
			this->panel_user->ResumeLayout(false);
			this->panel_user->PerformLayout();
			this->panel_message->ResumeLayout(false);
			this->panel_message->PerformLayout();
			this->panel_admin->ResumeLayout(false);
			this->panel_admin->PerformLayout();
			this->panel_admin_add->ResumeLayout(false);
			this->panel_admin_add->PerformLayout();
			this->panel_login->ResumeLayout(false);
			this->panel_login->PerformLayout();
			this->panel_confirm->ResumeLayout(false);
			this->panel_confirm->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
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
	panel_register->BringToFront();
	panel_user->Visible = false;
}
private: System::Void button_register_back_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_login->Visible = true;
	panel_login->BringToFront();
	panel_register->Visible = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_confirm->Visible = true;
	panel_confirm->BringToFront();
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
			testBox_register_username->Text = "";
			textBox_register_password->Text = "";
			textBox_register_conpassword->Text = "";
			panel_user->Visible = true;
			panel_user->BringToFront();
			label_message->Text = "Register successful.";
			panel_message->Visible = true;
			panel_message->BringToFront();
			panel_register->Visible = false;
			glob_user = username;
			label_user_name->Text = gcnew String(glob_user.data());
		}
		else
		{
			label_message->Text = "Register failed.";
			panel_message->Visible = true;
			panel_message->BringToFront();
			testBox_register_username->Text = "";
			textBox_register_password->Text = "";
			textBox_register_conpassword->Text = "";
		}
	}
	else
	{
		MessageBox::Show("Password and confirm password not match.");
		testBox_register_username->Text = "";
		textBox_register_password->Text = "";
		textBox_register_conpassword->Text = "";
	}
}
private: System::Void panel_login_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

#pragma endregion

#pragma region panel_login

private: System::Void button_login_signup_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel_register->Visible = true;
	panel_register->BringToFront();
	panel_login->Visible = false;
}
private: System::Void checkBox_login_showPassword_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_login_showPassword->Checked) {
		textBox_login_password->UseSystemPasswordChar = false;
	}
	else {
		textBox_login_password->UseSystemPasswordChar = true;
	}
	
}
private: System::Void button_login_close_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_confirm->Visible = true;
	panel_confirm->BringToFront();
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
	bool status_permission = User.check_login_permission(username, password);
	if (status_login) {
		if (status_permission) {
			panel_admin->Visible = true;
			panel_admin->BringToFront();
			glob_user = username;
			label_admin_name->Text = gcnew String(glob_user.data());
			label_message->Text = "Login successfully\nPermission type Admin";
			panel_message->Location = Point(465, 260);
			panel_message->Visible = true;
			panel_message->BringToFront();
		}
		else
		{
			panel_user->Visible = true;
			panel_user->BringToFront();
			glob_user = username;
			label_user_name->Text = gcnew String(glob_user.data());
			label_message->Text = "Login successfully\nPermission type User";
			panel_message->Location = Point(465, 260);
			panel_message->Visible = true;
			panel_message->BringToFront();
		}
		textBox_login_username->Text = "";
		textBox_login_password->Text = "";
	}

}
#pragma endregion


private: System::Void testBox_register_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_register_EnergyTrade_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_user_close_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_confirm->Visible = true;
	panel_confirm->BringToFront();
}
private: System::Void button_user_electric_Click(System::Object^ sender, System::EventArgs^ e) {
		label_user_genre->Visible = false;
		label_user_genre->Text = "Genre";
		comboBox_user_genre->Visible = false;

		label_user_line1->Text = "Substations";
		label_user_line2->Text = "License";

		label_user_value1->Text = "";
		label_user_value2->Text = "";
		label_user_valueVolume->Text = "";
		label_user_valuePrice->Text = "";

		label_user_unitLine1->Text = "";
		label_user_unitLine2->Text = "";
		label_user_unitVolume->Text = "unit";
		label_user_unitPrice->Text = "$";

	button_user_electric->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(27)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
	button_user_oil->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)), 
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_user_naturalGas->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
}
private: System::Void button_user_oil_Click(System::Object^ sender, System::EventArgs^ e) {
	label_user_genre->Visible = false;
	label_user_genre->Text = "Type";
	comboBox_user_genre->Visible = false;

	label_user_line1->Text = "API gravity";
	label_user_line2->Text = "Sulfer";

	label_user_value1->Text = "";
	label_user_value2->Text = "";
	label_user_valueVolume->Text = "";
	label_user_valuePrice->Text = "";

	label_user_unitLine1->Text = "";
	label_user_unitLine2->Text = "%";
	label_user_unitVolume->Text = "unit";
	label_user_unitPrice->Text = "$";

	button_user_electric->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_user_oil->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(27)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
	button_user_naturalGas->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
}
private: System::Void button_user_naturalGas_Click(System::Object^ sender, System::EventArgs^ e) {
	label_user_genre->Visible = false;
	label_user_genre->Text = "Type";
	comboBox_user_genre->Visible = false;

	label_user_line1->Text = "Pressure";
	label_user_line2->Text = "Temperature";

	label_user_value1->Text = "";
	label_user_value2->Text = "";
	label_user_valueVolume->Text = "";
	label_user_valuePrice->Text = "";

	label_user_unitLine1->Text = "kPA";
	label_user_unitLine2->Text = "°F";
	label_user_unitVolume->Text = "unit";
	label_user_unitPrice->Text = "$";

	button_user_electric->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_user_oil->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_user_naturalGas->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(27)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
}
private: System::Void label_user_company_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox_user_enterprise_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	label_user_genre->Visible = true;
	comboBox_user_genre->Visible = true;
}
private: System::Void label_user_genre_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox_user_genre_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel_user_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button_user_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_login->Visible = true;
	panel_user->Visible = false;
	panel_login->BringToFront();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_admin_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_login->Visible = true;
	panel_admin->Visible = false;
	panel_login->BringToFront();
}
private: System::Void button_admin_close_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_confirm->Visible = true;
	panel_confirm->BringToFront();
}
private: System::Void button_admin_electric_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_admin_add->Visible = false;
	label_admin_genre->Visible = false;
	label_admin_genre->Text = "Genre";
	comboBox_admin_genre->Visible = false;

	label_admin_line1->Text = "Substations";
	label_admin_line2->Text = "License";

	label_admin_valueLine1->Text = "";
	label_admin_valueLine2->Text = "";
	label_admin_valueVolume->Text = "";
	label_admin_valueUnitPrice->Text = "";

	label_admin_unitline1->Text = "";
	label_admin_unitline2->Text = "";
	label_admin_unitVolume->Text = "unit";
	label_admin_unitUnitPrice->Text = "$";

	button_admin_electric->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(27)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
	button_admin_oil->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_gas->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_add->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
}
private: System::Void button_admin_oil_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_admin_add->Visible = false;
	label_admin_genre->Visible = false;
	label_admin_genre->Text = "Type";
	comboBox_admin_genre->Visible = false;

	label_admin_line1->Text = "API gravity";
	label_admin_line2->Text = "Sulfer";

	label_admin_valueLine1->Text = "";
	label_admin_valueLine2->Text = "";
	label_admin_valueVolume->Text = "";
	label_admin_valueUnitPrice->Text = "";

	label_admin_unitline1->Text = "";
	label_admin_unitline2->Text = "%";
	label_admin_unitVolume->Text = "unit";
	label_admin_unitUnitPrice->Text = "$";

	button_admin_electric->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_oil->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(27)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
	button_admin_gas->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_add->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
}
private: System::Void button_admin_gas_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_admin_add->Visible = false;
	label_admin_genre->Visible = false;
	label_admin_genre->Text = "Type";
	comboBox_admin_genre->Visible = false;

	label_admin_line1->Text = "Pressure";
	label_admin_line2->Text = "Temperature";

	label_admin_valueLine1->Text = "";
	label_admin_valueLine2->Text = "";
	label_admin_valueVolume->Text = "";
	label_admin_valueUnitPrice->Text = "";

	label_admin_unitline1->Text = "kPA";
	label_admin_unitline2->Text = "°F";
	label_admin_unitVolume->Text = "unit";
	label_admin_unitUnitPrice->Text = "$";

	button_admin_electric->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_oil->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_gas->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(27)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
	button_admin_add->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
}
private: System::Void comboBox_admin_enterprise_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	label_admin_genre->Visible = true;
	comboBox_admin_genre->Visible = true;
}
private: System::Void button_admin_add_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_admin_add->Visible = true;
	label_admin_genre->Visible = false;
	label_admin_genre->Text = "Type";
	comboBox_admin_genre->Visible = false;

	label_admin_line1->Text = "Pressure";
	label_admin_line2->Text = "Temperature";

	label_admin_valueLine1->Text = "";
	label_admin_valueLine2->Text = "";
	label_admin_valueVolume->Text = "";
	label_admin_valueUnitPrice->Text = "";

	label_admin_unitline1->Text = "kPA";
	label_admin_unitline2->Text = "°F";
	label_admin_unitVolume->Text = "unit";
	label_admin_unitUnitPrice->Text = "$";

	button_admin_electric->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_oil->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_gas->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(13)),
		static_cast<System::Int32>(static_cast<System::Byte>(45)),
		static_cast<System::Int32>(static_cast<System::Byte>(140)));
	button_admin_add->BackColor = System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(27)),
		static_cast<System::Int32>(static_cast<System::Byte>(106)));
}
private: System::Void panel_admin_add_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void comboBox_admin_add_catagory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_admin_add_catagory->SelectedItem == "Electric energy")
	{
		comboBox_admin_add_genre->Items->Clear();
		comboBox_admin_add_genre->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
			L"Wind", L"Hydro",L"Solar", L"Biomass", L"Other"
		});
		label_admin_add_genre->Text = "Genre";
		label_admin_add_genre->Visible = true;
		comboBox_admin_add_genre->Visible = true;
		label_admin_add_line1->Text = "Substations";
		label_admin_add_line2->Text = "License";
		label_admin_add_unitLine1->Text = "";
		label_admin_add_unitLine2->Text = "";
	}
	else if (comboBox_admin_add_catagory->SelectedItem == "Crude oil")
	{
		comboBox_admin_add_genre->Items->Clear();
		comboBox_admin_add_genre->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
			L"Extra Heavy", L"Heavy", L"Medium", L"Light", L"Other"
		});
		label_admin_add_genre->Text = "Type";
		label_admin_add_genre->Visible = true;
		comboBox_admin_add_genre->Visible = true;
		label_admin_add_line1->Text = "API gravity";
		label_admin_add_line2->Text = "Sulfer";
		label_admin_add_unitLine1->Text = "";
		label_admin_add_unitLine2->Text = "%";
	}
	else if (comboBox_admin_add_catagory->SelectedItem == "Natural gas") {
		comboBox_admin_add_genre->Items->Clear();
		comboBox_admin_add_genre->Items->AddRange(gcnew cli::array< System::Object^  >(2) {
			L"CNG", L"LNG"
		});
		label_admin_add_genre->Text = "Type";
		label_admin_add_genre->Visible = true;
		comboBox_admin_add_genre->Visible = true;
		label_admin_add_line1->Text = "Pressure";
		label_admin_add_line2->Text = "Temperature";
		label_admin_add_unitLine1->Text = "kPA";
		label_admin_add_unitLine2->Text = "°F";
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel_message->Visible = false;
}
private: System::Void button_message_ok_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_message->Visible = false;
}
private: System::Void label_admin_genre_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_confirm_ok_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_confirm->Visible = false;
	Application::Exit();
}
private: System::Void button_confirm_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_confirm->Visible = false;
}
private: System::Void button_confirm_close_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_confirm->Visible = false;
}
private: System::Void button_admin_addAll_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_user_buy_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_user_sell_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
