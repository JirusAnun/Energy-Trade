#pragma once
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
	private: System::Windows::Forms::Button^ button_close;
	protected:


	private: System::Windows::Forms::TextBox^ textBox_login_username;
	private: System::Windows::Forms::TextBox^ textBox_login_password;
	private: System::Windows::Forms::CheckBox^ checkBox_login_showPassword;
	private: System::Windows::Forms::Button^ button_login_login;


	private: System::Windows::Forms::Button^ button_login_signup;

	private: System::Windows::Forms::Panel^ panel_register;







	private: System::Windows::Forms::TextBox^ textBox_register_conpassword;

	private: System::Windows::Forms::TextBox^ textBox_register_password;

	private: System::Windows::Forms::TextBox^ testBox_register_username;
	private: System::Windows::Forms::Button^ button_register_back;
	private: System::Windows::Forms::Button^ button_register_signup;
	private: System::Windows::Forms::CheckBox^ checkBox_register_showPassword;
	private: System::Windows::Forms::Button^ button1;





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
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->textBox_login_username = (gcnew System::Windows::Forms::TextBox());
			this->textBox_login_password = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_login_showPassword = (gcnew System::Windows::Forms::CheckBox());
			this->button_login_login = (gcnew System::Windows::Forms::Button());
			this->button_login_signup = (gcnew System::Windows::Forms::Button());
			this->panel_register = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_register_back = (gcnew System::Windows::Forms::Button());
			this->button_register_signup = (gcnew System::Windows::Forms::Button());
			this->checkBox_register_showPassword = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_register_conpassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox_register_password = (gcnew System::Windows::Forms::TextBox());
			this->testBox_register_username = (gcnew System::Windows::Forms::TextBox());
			this->panel_register->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F));
			this->button_close->ForeColor = System::Drawing::Color::Red;
			this->button_close->Location = System::Drawing::Point(1230, 15);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(35, 35);
			this->button_close->TabIndex = 1;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &MainForm::button_close_Click);
			// 
			// textBox_login_username
			// 
			this->textBox_login_username->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox_login_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_login_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_login_username->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_login_username->Location = System::Drawing::Point(659, 252);
			this->textBox_login_username->Name = L"textBox_login_username";
			this->textBox_login_username->Size = System::Drawing::Size(307, 23);
			this->textBox_login_username->TabIndex = 3;
			// 
			// textBox_login_password
			// 
			this->textBox_login_password->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox_login_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_login_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_login_password->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_login_password->Location = System::Drawing::Point(659, 357);
			this->textBox_login_password->Name = L"textBox_login_password";
			this->textBox_login_password->Size = System::Drawing::Size(307, 23);
			this->textBox_login_password->TabIndex = 4;
			this->textBox_login_password->UseSystemPasswordChar = true;
			// 
			// checkBox_login_showPassword
			// 
			this->checkBox_login_showPassword->AutoSize = true;
			this->checkBox_login_showPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox_login_showPassword->Location = System::Drawing::Point(650, 420);
			this->checkBox_login_showPassword->Name = L"checkBox_login_showPassword";
			this->checkBox_login_showPassword->Size = System::Drawing::Size(18, 17);
			this->checkBox_login_showPassword->TabIndex = 7;
			this->checkBox_login_showPassword->UseVisualStyleBackColor = false;
			this->checkBox_login_showPassword->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// button_login_login
			// 
			this->button_login_login->BackColor = System::Drawing::Color::Navy;
			this->button_login_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_login_login.BackgroundImage")));
			this->button_login_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_login_login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_login_login->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->button_login_login->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->button_login_login->Location = System::Drawing::Point(647, 497);
			this->button_login_login->Name = L"button_login_login";
			this->button_login_login->Size = System::Drawing::Size(95, 34);
			this->button_login_login->TabIndex = 8;
			this->button_login_login->Text = L"Login";
			this->button_login_login->UseVisualStyleBackColor = false;
			this->button_login_login->Click += gcnew System::EventHandler(this, &MainForm::button_login_login_Click);
			// 
			// button_login_signup
			// 
			this->button_login_signup->BackColor = System::Drawing::Color::Black;
			this->button_login_signup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_login_signup->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->button_login_signup->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button_login_signup->Location = System::Drawing::Point(748, 497);
			this->button_login_signup->Name = L"button_login_signup";
			this->button_login_signup->Size = System::Drawing::Size(95, 34);
			this->button_login_signup->TabIndex = 9;
			this->button_login_signup->Text = L"Sign up";
			this->button_login_signup->UseVisualStyleBackColor = false;
			this->button_login_signup->Click += gcnew System::EventHandler(this, &MainForm::button_login_signup_Click);
			// 
			// panel_register
			// 
			this->panel_register->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_register.BackgroundImage")));
			this->panel_register->Controls->Add(this->button1);
			this->panel_register->Controls->Add(this->button_register_back);
			this->panel_register->Controls->Add(this->button_register_signup);
			this->panel_register->Controls->Add(this->checkBox_register_showPassword);
			this->panel_register->Controls->Add(this->textBox_register_conpassword);
			this->panel_register->Controls->Add(this->textBox_register_password);
			this->panel_register->Controls->Add(this->testBox_register_username);
			this->panel_register->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_register->Location = System::Drawing::Point(0, 0);
			this->panel_register->Name = L"panel_register";
			this->panel_register->Size = System::Drawing::Size(1280, 720);
			this->panel_register->TabIndex = 10;
			this->panel_register->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(1230, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 35);
			this->button1->TabIndex = 11;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button_register_back
			// 
			this->button_register_back->BackColor = System::Drawing::Color::Black;
			this->button_register_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_register_back->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->button_register_back->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button_register_back->Location = System::Drawing::Point(748, 585);
			this->button_register_back->Name = L"button_register_back";
			this->button_register_back->Size = System::Drawing::Size(95, 34);
			this->button_register_back->TabIndex = 10;
			this->button_register_back->Text = L"Back";
			this->button_register_back->UseVisualStyleBackColor = false;
			this->button_register_back->Click += gcnew System::EventHandler(this, &MainForm::button_register_back_Click);
			// 
			// button_register_signup
			// 
			this->button_register_signup->BackColor = System::Drawing::Color::Navy;
			this->button_register_signup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_register_signup.BackgroundImage")));
			this->button_register_signup->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button_register_signup->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_register_signup->Font = (gcnew System::Drawing::Font(L"Agency FB", 12));
			this->button_register_signup->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->button_register_signup->Location = System::Drawing::Point(647, 585);
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
			this->checkBox_register_showPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox_register_showPassword->Location = System::Drawing::Point(650, 525);
			this->checkBox_register_showPassword->Name = L"checkBox_register_showPassword";
			this->checkBox_register_showPassword->Size = System::Drawing::Size(18, 17);
			this->checkBox_register_showPassword->TabIndex = 8;
			this->checkBox_register_showPassword->UseVisualStyleBackColor = false;
			this->checkBox_register_showPassword->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox_register_showPassword_CheckedChanged);
			// 
			// textBox_register_conpassword
			// 
			this->textBox_register_conpassword->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox_register_conpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_register_conpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_register_conpassword->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_register_conpassword->Location = System::Drawing::Point(659, 459);
			this->textBox_register_conpassword->Name = L"textBox_register_conpassword";
			this->textBox_register_conpassword->Size = System::Drawing::Size(307, 23);
			this->textBox_register_conpassword->TabIndex = 6;
			this->textBox_register_conpassword->UseSystemPasswordChar = true;
			// 
			// textBox_register_password
			// 
			this->textBox_register_password->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox_register_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_register_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox_register_password->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox_register_password->Location = System::Drawing::Point(659, 357);
			this->textBox_register_password->Name = L"textBox_register_password";
			this->textBox_register_password->Size = System::Drawing::Size(307, 23);
			this->textBox_register_password->TabIndex = 5;
			this->textBox_register_password->UseSystemPasswordChar = true;
			// 
			// testBox_register_username
			// 
			this->testBox_register_username->BackColor = System::Drawing::SystemColors::MenuText;
			this->testBox_register_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->testBox_register_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->testBox_register_username->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->testBox_register_username->Location = System::Drawing::Point(659, 252);
			this->testBox_register_username->Name = L"testBox_register_username";
			this->testBox_register_username->Size = System::Drawing::Size(307, 23);
			this->testBox_register_username->TabIndex = 4;
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel_register);
			this->Controls->Add(this->button_login_signup);
			this->Controls->Add(this->button_login_login);
			this->Controls->Add(this->checkBox_login_showPassword);
			this->Controls->Add(this->textBox_login_password);
			this->Controls->Add(this->textBox_login_username);
			this->Controls->Add(this->button_close);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Agency FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button_login_signup_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_register->Visible = true;
}
private: System::Void button_register_back_Click(System::Object^ sender, System::EventArgs^ e) {
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
	if (textBox_register_password->Text != textBox_register_conpassword->Text)
	{
		MessageBox::Show("Password and confirm password isn't match.");
	}
	else
	{

	}
}
};
}
