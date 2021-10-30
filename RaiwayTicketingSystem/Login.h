#pragma once


namespace RaiwayTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	

	/// <summary>
	//This form is used to log in to the system for adminstration
	///Registerd administrators can only log in to the adminstration form.
	//Thi form is connected to the mysql database
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//Password protection using texbox
			txt_password->PasswordChar = '*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_railwy_ticketing_system;
	private: System::Windows::Forms::GroupBox^ grbx_user_login;
	private: System::Windows::Forms::Button^ btn_login;
	private: System::Windows::Forms::TextBox^ txt_password;

	private: System::Windows::Forms::Label^ lbl_password;
	private: System::Windows::Forms::Label^ lbl_user_name;
	private: System::Windows::Forms::Label^ lbl_loging;
	private: System::Windows::Forms::TextBox^ txt_user_name;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->lbl_railwy_ticketing_system = (gcnew System::Windows::Forms::Label());
			this->grbx_user_login = (gcnew System::Windows::Forms::GroupBox());
			this->txt_user_name = (gcnew System::Windows::Forms::TextBox());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->lbl_user_name = (gcnew System::Windows::Forms::Label());
			this->lbl_loging = (gcnew System::Windows::Forms::Label());
			this->grbx_user_login->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_railwy_ticketing_system
			// 
			this->lbl_railwy_ticketing_system->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_railwy_ticketing_system->BackColor = System::Drawing::Color::Transparent;
			this->lbl_railwy_ticketing_system->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_railwy_ticketing_system->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_railwy_ticketing_system->ForeColor = System::Drawing::Color::BurlyWood;
			this->lbl_railwy_ticketing_system->Location = System::Drawing::Point(109, 24);
			this->lbl_railwy_ticketing_system->Name = L"lbl_railwy_ticketing_system";
			this->lbl_railwy_ticketing_system->Size = System::Drawing::Size(750, 141);
			this->lbl_railwy_ticketing_system->TabIndex = 1;
			this->lbl_railwy_ticketing_system->Text = L"  Railway Ticketing System \r\n       Kelani Valley Line";
			this->lbl_railwy_ticketing_system->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_railwy_ticketing_system->Click += gcnew System::EventHandler(this, &Login::lbl_railwy_ticketing_system_Click);
			// 
			// grbx_user_login
			// 
			this->grbx_user_login->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->grbx_user_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->grbx_user_login->Controls->Add(this->txt_user_name);
			this->grbx_user_login->Controls->Add(this->btn_login);
			this->grbx_user_login->Controls->Add(this->txt_password);
			this->grbx_user_login->Controls->Add(this->lbl_password);
			this->grbx_user_login->Controls->Add(this->lbl_user_name);
			this->grbx_user_login->Controls->Add(this->lbl_loging);
			this->grbx_user_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grbx_user_login->ForeColor = System::Drawing::SystemColors::Menu;
			this->grbx_user_login->Location = System::Drawing::Point(298, 242);
			this->grbx_user_login->Name = L"grbx_user_login";
			this->grbx_user_login->Size = System::Drawing::Size(425, 286);
			this->grbx_user_login->TabIndex = 8;
			this->grbx_user_login->TabStop = false;
			this->grbx_user_login->Enter += gcnew System::EventHandler(this, &Login::grbx_user_login_Enter);
			// 
			// txt_user_name
			// 
			this->txt_user_name->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_user_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_user_name->ForeColor = System::Drawing::Color::Black;
			this->txt_user_name->Location = System::Drawing::Point(198, 97);
			this->txt_user_name->Multiline = true;
			this->txt_user_name->Name = L"txt_user_name";
			this->txt_user_name->Size = System::Drawing::Size(162, 28);
			this->txt_user_name->TabIndex = 8;
			this->txt_user_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_login
			// 
			this->btn_login->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login->Location = System::Drawing::Point(288, 216);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(95, 34);
			this->btn_login->TabIndex = 7;
			this->btn_login->Text = L"login";
			this->btn_login->UseVisualStyleBackColor = false;
			this->btn_login->Click += gcnew System::EventHandler(this, &Login::btn_login_Click);
			// 
			// txt_password
			// 
			this->txt_password->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_password->ForeColor = System::Drawing::Color::Black;
			this->txt_password->Location = System::Drawing::Point(198, 153);
			this->txt_password->Margin = System::Windows::Forms::Padding(4);
			this->txt_password->Multiline = true;
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(162, 30);
			this->txt_password->TabIndex = 6;
			this->txt_password->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbl_password
			// 
			this->lbl_password->BackColor = System::Drawing::Color::Transparent;
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_password->Location = System::Drawing::Point(33, 155);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(134, 28);
			this->lbl_password->TabIndex = 4;
			this->lbl_password->Text = L"Passworad";
			// 
			// lbl_user_name
			// 
			this->lbl_user_name->BackColor = System::Drawing::Color::Transparent;
			this->lbl_user_name->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_user_name->Location = System::Drawing::Point(33, 97);
			this->lbl_user_name->Name = L"lbl_user_name";
			this->lbl_user_name->Size = System::Drawing::Size(134, 28);
			this->lbl_user_name->TabIndex = 3;
			this->lbl_user_name->Text = L"User Name";
			// 
			// lbl_loging
			// 
			this->lbl_loging->BackColor = System::Drawing::Color::Transparent;
			this->lbl_loging->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_loging->Location = System::Drawing::Point(126, 28);
			this->lbl_loging->Name = L"lbl_loging";
			this->lbl_loging->Size = System::Drawing::Size(168, 35);
			this->lbl_loging->TabIndex = 2;
			this->lbl_loging->Text = L"Login";
			this->lbl_loging->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 641);
			this->Controls->Add(this->grbx_user_login);
			this->Controls->Add(this->lbl_railwy_ticketing_system);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->grbx_user_login->ResumeLayout(false);
			this->grbx_user_login->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {

		//Make conection with the MySql

		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		//Check given user name and password with the user_login table in database called "railway_ticketing_system_kelani_valley_line"
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from railway_ticketing_system_kelani_valley_line.user_login where user_name='" + this->txt_user_name->Text + "' and password='" + this->txt_password->Text + "';", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				count = count + 1;
			}

			if (count == 1) {

				MessageBox::Show("Username and password is correct");

				this->Hide();
				RaiwayTicketingSystem::Administration Form;
				Form.ShowDialog();
				this->Hide();

			}
			else
			{
				MessageBox::Show("username and password is incorrect");
			}
			
		}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		

		
	}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_railwy_ticketing_system_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_user_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void grbx_user_login_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
