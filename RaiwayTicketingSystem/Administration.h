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
	/// Summary for Administration
	///This form which is called as adminstration, allows for registred administrates anly.
	///By using this pageadmin can add new train details or delete and update details of train which are already stored in the database
	///And also can  register a new user for adminstraion
	
	/// </summary>
	public ref class Administration : public System::Windows::Forms::Form
	{
	public:
		Administration(void)
		{
			InitializeComponent();
			
			// Fillcombo() is an user defined function which use to populate combo box
			Fillcombo();
			Fillcombo2();
			grpbx_new_user->Hide();
			this->listBox->Enabled = false;
			this->grpbx_add_eddit_delete->Enabled = false;
			this->grpbx_search->Enabled = false;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_railwy_ticketing_system;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_edit;
	private: System::Windows::Forms::Button^ btn_new_user;
	private: System::Windows::Forms::Label^ lbl_train_number;
	private: System::Windows::Forms::Label^ lbl_source;
	private: System::Windows::Forms::Label^ lbl_destination;
	private: System::Windows::Forms::Label^ lbl_no_of_seat;
	private: System::Windows::Forms::Label^ lbl_tiket_price;
	private: System::Windows::Forms::Label^ lbl_tme;
	private: System::Windows::Forms::TextBox^ txt_time;
	private: System::Windows::Forms::TextBox^ txt_price;
	private: System::Windows::Forms::TextBox^ txt_no_of_pasengers;
	private: System::Windows::Forms::TextBox^ txt_train_number;
	private: System::Windows::Forms::Button^ btn_add_grpbx;
	private: System::Windows::Forms::Button^ btn_edit_grpbx;
	private: System::Windows::Forms::Button^ btn_delete_grpbx;


	private: System::Windows::Forms::GroupBox^ grpbx_search;
	private: System::Windows::Forms::ComboBox^ cmbx_destination;
	private: System::Windows::Forms::ComboBox^ cmbx_source;





	private: System::Windows::Forms::Label^ lbl_destination_grpbx_search;
	private: System::Windows::Forms::Label^ lbl_search_grpbx_search;

	private: System::Windows::Forms::GroupBox^ grpbx_add_eddit_delete;
	private: System::Windows::Forms::ListBox^ listBox;
	private: System::Windows::Forms::Button^ btn_sarch;

	private: System::Windows::Forms::GroupBox^ grpbx_new_user;
	private: System::Windows::Forms::Button^ btn_user_add;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::TextBox^ txt_user_name;
	private: System::Windows::Forms::TextBox^ txt_last_name;
	private: System::Windows::Forms::TextBox^ txt_first_name;
	private: System::Windows::Forms::Label^ lbl_password;
	private: System::Windows::Forms::Label^ lbl_user_name;
	private: System::Windows::Forms::Label^ lbl_last_name;
	private: System::Windows::Forms::Label^ lbl_first_name;
	private: System::Windows::Forms::TextBox^ txt_source;
	private: System::Windows::Forms::TextBox^ txtdestination;

	private: System::Windows::Forms::TextBox^ txt_departure_time;
	private: System::Windows::Forms::Label^ lbl_departure;
	private: System::Windows::Forms::Label^ label1;


































	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Administration::typeid));
			this->lbl_railwy_ticketing_system = (gcnew System::Windows::Forms::Label());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->btn_new_user = (gcnew System::Windows::Forms::Button());
			this->lbl_train_number = (gcnew System::Windows::Forms::Label());
			this->lbl_source = (gcnew System::Windows::Forms::Label());
			this->lbl_destination = (gcnew System::Windows::Forms::Label());
			this->lbl_no_of_seat = (gcnew System::Windows::Forms::Label());
			this->lbl_tiket_price = (gcnew System::Windows::Forms::Label());
			this->lbl_tme = (gcnew System::Windows::Forms::Label());
			this->txt_time = (gcnew System::Windows::Forms::TextBox());
			this->txt_price = (gcnew System::Windows::Forms::TextBox());
			this->txt_no_of_pasengers = (gcnew System::Windows::Forms::TextBox());
			this->txt_train_number = (gcnew System::Windows::Forms::TextBox());
			this->btn_add_grpbx = (gcnew System::Windows::Forms::Button());
			this->btn_edit_grpbx = (gcnew System::Windows::Forms::Button());
			this->btn_delete_grpbx = (gcnew System::Windows::Forms::Button());
			this->grpbx_search = (gcnew System::Windows::Forms::GroupBox());
			this->btn_sarch = (gcnew System::Windows::Forms::Button());
			this->cmbx_destination = (gcnew System::Windows::Forms::ComboBox());
			this->cmbx_source = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_destination_grpbx_search = (gcnew System::Windows::Forms::Label());
			this->lbl_search_grpbx_search = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->grpbx_add_eddit_delete = (gcnew System::Windows::Forms::GroupBox());
			this->txt_departure_time = (gcnew System::Windows::Forms::TextBox());
			this->lbl_departure = (gcnew System::Windows::Forms::Label());
			this->txt_source = (gcnew System::Windows::Forms::TextBox());
			this->txtdestination = (gcnew System::Windows::Forms::TextBox());
			this->grpbx_new_user = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_user_add = (gcnew System::Windows::Forms::Button());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_user_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_last_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_first_name = (gcnew System::Windows::Forms::TextBox());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->lbl_user_name = (gcnew System::Windows::Forms::Label());
			this->lbl_last_name = (gcnew System::Windows::Forms::Label());
			this->lbl_first_name = (gcnew System::Windows::Forms::Label());
			this->grpbx_search->SuspendLayout();
			this->grpbx_add_eddit_delete->SuspendLayout();
			this->grpbx_new_user->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_railwy_ticketing_system
			// 
			this->lbl_railwy_ticketing_system->BackColor = System::Drawing::Color::Transparent;
			this->lbl_railwy_ticketing_system->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_railwy_ticketing_system->ForeColor = System::Drawing::Color::BurlyWood;
			this->lbl_railwy_ticketing_system->Location = System::Drawing::Point(230, 23);
			this->lbl_railwy_ticketing_system->Name = L"lbl_railwy_ticketing_system";
			this->lbl_railwy_ticketing_system->Size = System::Drawing::Size(533, 88);
			this->lbl_railwy_ticketing_system->TabIndex = 0;
			this->lbl_railwy_ticketing_system->Text = L"  Railway Ticketing System\r\n       Kalani valley Line";
			this->lbl_railwy_ticketing_system->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::DarkSalmon;
			this->btn_add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add.Image")));
			this->btn_add->Location = System::Drawing::Point(43, 157);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(75, 63);
			this->btn_add->TabIndex = 1;
			this->btn_add->Text = L"Add";
			this->btn_add->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Administration::btn_add_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::DarkSalmon;
			this->btn_delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete.Image")));
			this->btn_delete->Location = System::Drawing::Point(43, 390);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 63);
			this->btn_delete->TabIndex = 2;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Administration::btn_delete_Click);
			// 
			// btn_edit
			// 
			this->btn_edit->BackColor = System::Drawing::Color::DarkSalmon;
			this->btn_edit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_edit.Image")));
			this->btn_edit->Location = System::Drawing::Point(43, 273);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(75, 63);
			this->btn_edit->TabIndex = 3;
			this->btn_edit->Text = L"Edite";
			this->btn_edit->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_edit->UseVisualStyleBackColor = false;
			this->btn_edit->Click += gcnew System::EventHandler(this, &Administration::btn_edit_Click);
			// 
			// btn_new_user
			// 
			this->btn_new_user->BackColor = System::Drawing::Color::DarkSalmon;
			this->btn_new_user->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_new_user->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_new_user.Image")));
			this->btn_new_user->Location = System::Drawing::Point(43, 501);
			this->btn_new_user->Name = L"btn_new_user";
			this->btn_new_user->Size = System::Drawing::Size(75, 75);
			this->btn_new_user->TabIndex = 4;
			this->btn_new_user->Text = L"New user";
			this->btn_new_user->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_new_user->UseVisualStyleBackColor = false;
			this->btn_new_user->Click += gcnew System::EventHandler(this, &Administration::btn_new_user_Click);
			// 
			// lbl_train_number
			// 
			this->lbl_train_number->BackColor = System::Drawing::Color::Transparent;
			this->lbl_train_number->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_train_number->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_train_number->Location = System::Drawing::Point(28, 28);
			this->lbl_train_number->Name = L"lbl_train_number";
			this->lbl_train_number->Size = System::Drawing::Size(182, 26);
			this->lbl_train_number->TabIndex = 5;
			this->lbl_train_number->Text = L"Train number";
			// 
			// lbl_source
			// 
			this->lbl_source->BackColor = System::Drawing::Color::Transparent;
			this->lbl_source->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_source->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_source->Location = System::Drawing::Point(28, 79);
			this->lbl_source->Name = L"lbl_source";
			this->lbl_source->Size = System::Drawing::Size(182, 26);
			this->lbl_source->TabIndex = 6;
			this->lbl_source->Text = L"Source";
			// 
			// lbl_destination
			// 
			this->lbl_destination->BackColor = System::Drawing::Color::Transparent;
			this->lbl_destination->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_destination->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_destination->Location = System::Drawing::Point(21, 123);
			this->lbl_destination->Name = L"lbl_destination";
			this->lbl_destination->Size = System::Drawing::Size(182, 26);
			this->lbl_destination->TabIndex = 7;
			this->lbl_destination->Text = L"Destination";
			// 
			// lbl_no_of_seat
			// 
			this->lbl_no_of_seat->BackColor = System::Drawing::Color::Transparent;
			this->lbl_no_of_seat->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_no_of_seat->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_no_of_seat->Location = System::Drawing::Point(21, 276);
			this->lbl_no_of_seat->Name = L"lbl_no_of_seat";
			this->lbl_no_of_seat->Size = System::Drawing::Size(182, 26);
			this->lbl_no_of_seat->TabIndex = 8;
			this->lbl_no_of_seat->Text = L"No of pasengers";
			// 
			// lbl_tiket_price
			// 
			this->lbl_tiket_price->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tiket_price->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_tiket_price->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_tiket_price->Location = System::Drawing::Point(28, 326);
			this->lbl_tiket_price->Name = L"lbl_tiket_price";
			this->lbl_tiket_price->Size = System::Drawing::Size(182, 26);
			this->lbl_tiket_price->TabIndex = 9;
			this->lbl_tiket_price->Text = L"Ticket Price";
			this->lbl_tiket_price->Click += gcnew System::EventHandler(this, &Administration::lbl_tiket_price_Click);
			// 
			// lbl_tme
			// 
			this->lbl_tme->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tme->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_tme->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_tme->Location = System::Drawing::Point(232, 177);
			this->lbl_tme->Name = L"lbl_tme";
			this->lbl_tme->Size = System::Drawing::Size(145, 26);
			this->lbl_tme->TabIndex = 10;
			this->lbl_tme->Text = L"Arrival  Time";
			// 
			// txt_time
			// 
			this->txt_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_time->Location = System::Drawing::Point(236, 220);
			this->txt_time->Multiline = true;
			this->txt_time->Name = L"txt_time";
			this->txt_time->Size = System::Drawing::Size(160, 33);
			this->txt_time->TabIndex = 13;
			this->txt_time->Text = L"00:00:00";
			this->txt_time->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_price
			// 
			this->txt_price->Location = System::Drawing::Point(236, 326);
			this->txt_price->Multiline = true;
			this->txt_price->Name = L"txt_price";
			this->txt_price->Size = System::Drawing::Size(160, 33);
			this->txt_price->TabIndex = 14;
			// 
			// txt_no_of_pasengers
			// 
			this->txt_no_of_pasengers->Location = System::Drawing::Point(236, 268);
			this->txt_no_of_pasengers->Multiline = true;
			this->txt_no_of_pasengers->Name = L"txt_no_of_pasengers";
			this->txt_no_of_pasengers->Size = System::Drawing::Size(160, 33);
			this->txt_no_of_pasengers->TabIndex = 15;
			// 
			// txt_train_number
			// 
			this->txt_train_number->Location = System::Drawing::Point(236, 21);
			this->txt_train_number->Multiline = true;
			this->txt_train_number->Name = L"txt_train_number";
			this->txt_train_number->Size = System::Drawing::Size(160, 33);
			this->txt_train_number->TabIndex = 16;
			this->txt_train_number->TextChanged += gcnew System::EventHandler(this, &Administration::textBox1_TextChanged);
			// 
			// btn_add_grpbx
			// 
			this->btn_add_grpbx->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_add_grpbx->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add_grpbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add_grpbx->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_add_grpbx->Location = System::Drawing::Point(279, 388);
			this->btn_add_grpbx->Name = L"btn_add_grpbx";
			this->btn_add_grpbx->Size = System::Drawing::Size(117, 35);
			this->btn_add_grpbx->TabIndex = 17;
			this->btn_add_grpbx->Text = L"Add";
			this->btn_add_grpbx->UseVisualStyleBackColor = false;
			this->btn_add_grpbx->Click += gcnew System::EventHandler(this, &Administration::btn_add_grpbx_Click);
			// 
			// btn_edit_grpbx
			// 
			this->btn_edit_grpbx->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_edit_grpbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_edit_grpbx->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_edit_grpbx->Location = System::Drawing::Point(155, 388);
			this->btn_edit_grpbx->Name = L"btn_edit_grpbx";
			this->btn_edit_grpbx->Size = System::Drawing::Size(117, 35);
			this->btn_edit_grpbx->TabIndex = 18;
			this->btn_edit_grpbx->Text = L"Update";
			this->btn_edit_grpbx->UseVisualStyleBackColor = false;
			this->btn_edit_grpbx->Click += gcnew System::EventHandler(this, &Administration::btn_edit_grpbx_Click);
			// 
			// btn_delete_grpbx
			// 
			this->btn_delete_grpbx->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_delete_grpbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete_grpbx->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_delete_grpbx->Location = System::Drawing::Point(32, 388);
			this->btn_delete_grpbx->Name = L"btn_delete_grpbx";
			this->btn_delete_grpbx->Size = System::Drawing::Size(117, 35);
			this->btn_delete_grpbx->TabIndex = 19;
			this->btn_delete_grpbx->Text = L"Delete";
			this->btn_delete_grpbx->UseVisualStyleBackColor = false;
			this->btn_delete_grpbx->Click += gcnew System::EventHandler(this, &Administration::btn_delete_grpbx_Click);
			// 
			// grpbx_search
			// 
			this->grpbx_search->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->grpbx_search->Controls->Add(this->btn_sarch);
			this->grpbx_search->Controls->Add(this->cmbx_destination);
			this->grpbx_search->Controls->Add(this->cmbx_source);
			this->grpbx_search->Controls->Add(this->lbl_destination_grpbx_search);
			this->grpbx_search->Controls->Add(this->lbl_search_grpbx_search);
			this->grpbx_search->ImeMode = System::Windows::Forms::ImeMode::On;
			this->grpbx_search->Location = System::Drawing::Point(588, 149);
			this->grpbx_search->Name = L"grpbx_search";
			this->grpbx_search->Size = System::Drawing::Size(380, 199);
			this->grpbx_search->TabIndex = 18;
			this->grpbx_search->TabStop = false;
			this->grpbx_search->Enter += gcnew System::EventHandler(this, &Administration::grpbx_search_Enter);
			// 
			// btn_sarch
			// 
			this->btn_sarch->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_sarch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sarch->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_sarch->Location = System::Drawing::Point(220, 130);
			this->btn_sarch->Name = L"btn_sarch";
			this->btn_sarch->Size = System::Drawing::Size(117, 35);
			this->btn_sarch->TabIndex = 20;
			this->btn_sarch->Text = L"Search";
			this->btn_sarch->UseVisualStyleBackColor = false;
			this->btn_sarch->Click += gcnew System::EventHandler(this, &Administration::btn_sarch_Click);
			// 
			// cmbx_destination
			// 
			this->cmbx_destination->FormattingEnabled = true;
			this->cmbx_destination->Location = System::Drawing::Point(177, 89);
			this->cmbx_destination->Name = L"cmbx_destination";
			this->cmbx_destination->Size = System::Drawing::Size(160, 21);
			this->cmbx_destination->TabIndex = 12;
			this->cmbx_destination->Text = L"<Select Destination>";
			// 
			// cmbx_source
			// 
			this->cmbx_source->FormattingEnabled = true;
			this->cmbx_source->Location = System::Drawing::Point(177, 27);
			this->cmbx_source->Name = L"cmbx_source";
			this->cmbx_source->Size = System::Drawing::Size(160, 21);
			this->cmbx_source->TabIndex = 11;
			this->cmbx_source->Text = L"<select source>";
			this->cmbx_source->SelectedIndexChanged += gcnew System::EventHandler(this, &Administration::cmbx_source_SelectedIndexChanged_1);
			// 
			// lbl_destination_grpbx_search
			// 
			this->lbl_destination_grpbx_search->BackColor = System::Drawing::Color::Transparent;
			this->lbl_destination_grpbx_search->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_destination_grpbx_search->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_destination_grpbx_search->Location = System::Drawing::Point(6, 89);
			this->lbl_destination_grpbx_search->Name = L"lbl_destination_grpbx_search";
			this->lbl_destination_grpbx_search->Size = System::Drawing::Size(127, 26);
			this->lbl_destination_grpbx_search->TabIndex = 7;
			this->lbl_destination_grpbx_search->Text = L"Destination";
			// 
			// lbl_search_grpbx_search
			// 
			this->lbl_search_grpbx_search->BackColor = System::Drawing::Color::Transparent;
			this->lbl_search_grpbx_search->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_search_grpbx_search->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_search_grpbx_search->Location = System::Drawing::Point(6, 27);
			this->lbl_search_grpbx_search->Name = L"lbl_search_grpbx_search";
			this->lbl_search_grpbx_search->Size = System::Drawing::Size(127, 26);
			this->lbl_search_grpbx_search->TabIndex = 6;
			this->lbl_search_grpbx_search->Text = L"Source";
			// 
			// listBox
			// 
			this->listBox->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->listBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox->ForeColor = System::Drawing::SystemColors::Window;
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 20;
			this->listBox->Location = System::Drawing::Point(588, 351);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(380, 264);
			this->listBox->TabIndex = 19;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Administration::listBox1_SelectedIndexChanged);
			// 
			// grpbx_add_eddit_delete
			// 
			this->grpbx_add_eddit_delete->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->grpbx_add_eddit_delete->Controls->Add(this->txt_departure_time);
			this->grpbx_add_eddit_delete->Controls->Add(this->lbl_departure);
			this->grpbx_add_eddit_delete->Controls->Add(this->btn_delete_grpbx);
			this->grpbx_add_eddit_delete->Controls->Add(this->btn_edit_grpbx);
			this->grpbx_add_eddit_delete->Controls->Add(this->btn_add_grpbx);
			this->grpbx_add_eddit_delete->Controls->Add(this->txt_train_number);
			this->grpbx_add_eddit_delete->Controls->Add(this->txt_no_of_pasengers);
			this->grpbx_add_eddit_delete->Controls->Add(this->txt_price);
			this->grpbx_add_eddit_delete->Controls->Add(this->txt_time);
			this->grpbx_add_eddit_delete->Controls->Add(this->lbl_tme);
			this->grpbx_add_eddit_delete->Controls->Add(this->lbl_tiket_price);
			this->grpbx_add_eddit_delete->Controls->Add(this->lbl_no_of_seat);
			this->grpbx_add_eddit_delete->Controls->Add(this->lbl_destination);
			this->grpbx_add_eddit_delete->Controls->Add(this->lbl_source);
			this->grpbx_add_eddit_delete->Controls->Add(this->lbl_train_number);
			this->grpbx_add_eddit_delete->Controls->Add(this->txt_source);
			this->grpbx_add_eddit_delete->Controls->Add(this->txtdestination);
			this->grpbx_add_eddit_delete->Location = System::Drawing::Point(159, 145);
			this->grpbx_add_eddit_delete->Name = L"grpbx_add_eddit_delete";
			this->grpbx_add_eddit_delete->Size = System::Drawing::Size(423, 480);
			this->grpbx_add_eddit_delete->TabIndex = 17;
			this->grpbx_add_eddit_delete->TabStop = false;
			// 
			// txt_departure_time
			// 
			this->txt_departure_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_departure_time->Location = System::Drawing::Point(25, 220);
			this->txt_departure_time->Multiline = true;
			this->txt_departure_time->Name = L"txt_departure_time";
			this->txt_departure_time->Size = System::Drawing::Size(142, 33);
			this->txt_departure_time->TabIndex = 25;
			this->txt_departure_time->Text = L"00:00:00";
			this->txt_departure_time->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lbl_departure
			// 
			this->lbl_departure->BackColor = System::Drawing::Color::Transparent;
			this->lbl_departure->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_departure->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_departure->Location = System::Drawing::Point(21, 177);
			this->lbl_departure->Name = L"lbl_departure";
			this->lbl_departure->Size = System::Drawing::Size(175, 26);
			this->lbl_departure->TabIndex = 24;
			this->lbl_departure->Text = L"Departure Time";
			// 
			// txt_source
			// 
			this->txt_source->Location = System::Drawing::Point(236, 72);
			this->txt_source->Multiline = true;
			this->txt_source->Name = L"txt_source";
			this->txt_source->Size = System::Drawing::Size(160, 33);
			this->txt_source->TabIndex = 20;
			this->txt_source->TextChanged += gcnew System::EventHandler(this, &Administration::txt_source_TextChanged);
			// 
			// txtdestination
			// 
			this->txtdestination->Location = System::Drawing::Point(236, 123);
			this->txtdestination->Multiline = true;
			this->txtdestination->Name = L"txtdestination";
			this->txtdestination->Size = System::Drawing::Size(160, 33);
			this->txtdestination->TabIndex = 22;
			// 
			// grpbx_new_user
			// 
			this->grpbx_new_user->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->grpbx_new_user->Controls->Add(this->label1);
			this->grpbx_new_user->Controls->Add(this->btn_user_add);
			this->grpbx_new_user->Controls->Add(this->txt_password);
			this->grpbx_new_user->Controls->Add(this->txt_user_name);
			this->grpbx_new_user->Controls->Add(this->txt_last_name);
			this->grpbx_new_user->Controls->Add(this->txt_first_name);
			this->grpbx_new_user->Controls->Add(this->lbl_password);
			this->grpbx_new_user->Controls->Add(this->lbl_user_name);
			this->grpbx_new_user->Controls->Add(this->lbl_last_name);
			this->grpbx_new_user->Controls->Add(this->lbl_first_name);
			this->grpbx_new_user->Location = System::Drawing::Point(398, 159);
			this->grpbx_new_user->Name = L"grpbx_new_user";
			this->grpbx_new_user->Size = System::Drawing::Size(404, 433);
			this->grpbx_new_user->TabIndex = 21;
			this->grpbx_new_user->TabStop = false;
			this->grpbx_new_user->Enter += gcnew System::EventHandler(this, &Administration::grpbx_new_user_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(128, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 22);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Admin Registration";
			// 
			// btn_user_add
			// 
			this->btn_user_add->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_user_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_user_add->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_user_add->Location = System::Drawing::Point(248, 326);
			this->btn_user_add->Name = L"btn_user_add";
			this->btn_user_add->Size = System::Drawing::Size(117, 35);
			this->btn_user_add->TabIndex = 20;
			this->btn_user_add->Text = L"Add";
			this->btn_user_add->UseVisualStyleBackColor = false;
			this->btn_user_add->Click += gcnew System::EventHandler(this, &Administration::btn_user_add_Click);
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(180, 269);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(122, 20);
			this->txt_password->TabIndex = 7;
			// 
			// txt_user_name
			// 
			this->txt_user_name->Location = System::Drawing::Point(180, 215);
			this->txt_user_name->Name = L"txt_user_name";
			this->txt_user_name->Size = System::Drawing::Size(122, 20);
			this->txt_user_name->TabIndex = 6;
			// 
			// txt_last_name
			// 
			this->txt_last_name->Location = System::Drawing::Point(180, 148);
			this->txt_last_name->Name = L"txt_last_name";
			this->txt_last_name->Size = System::Drawing::Size(122, 20);
			this->txt_last_name->TabIndex = 5;
			// 
			// txt_first_name
			// 
			this->txt_first_name->Location = System::Drawing::Point(180, 81);
			this->txt_first_name->Name = L"txt_first_name";
			this->txt_first_name->Size = System::Drawing::Size(122, 20);
			this->txt_first_name->TabIndex = 4;
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_password->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_password->Location = System::Drawing::Point(39, 269);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(78, 20);
			this->lbl_password->TabIndex = 3;
			this->lbl_password->Text = L"Password";
			// 
			// lbl_user_name
			// 
			this->lbl_user_name->AutoSize = true;
			this->lbl_user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_user_name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_user_name->Location = System::Drawing::Point(39, 215);
			this->lbl_user_name->Name = L"lbl_user_name";
			this->lbl_user_name->Size = System::Drawing::Size(87, 20);
			this->lbl_user_name->TabIndex = 2;
			this->lbl_user_name->Text = L"User name";
			// 
			// lbl_last_name
			// 
			this->lbl_last_name->AutoSize = true;
			this->lbl_last_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_last_name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_last_name->Location = System::Drawing::Point(39, 148);
			this->lbl_last_name->Name = L"lbl_last_name";
			this->lbl_last_name->Size = System::Drawing::Size(86, 20);
			this->lbl_last_name->TabIndex = 1;
			this->lbl_last_name->Text = L"Last Name";
			// 
			// lbl_first_name
			// 
			this->lbl_first_name->AutoSize = true;
			this->lbl_first_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_first_name->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_first_name->Location = System::Drawing::Point(39, 81);
			this->lbl_first_name->Name = L"lbl_first_name";
			this->lbl_first_name->Size = System::Drawing::Size(86, 20);
			this->lbl_first_name->TabIndex = 0;
			this->lbl_first_name->Text = L"First Name";
			// 
			// Administration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(980, 637);
			this->Controls->Add(this->grpbx_new_user);
			this->Controls->Add(this->btn_new_user);
			this->Controls->Add(this->btn_edit);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->lbl_railwy_ticketing_system);
			this->Controls->Add(this->grpbx_add_eddit_delete);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->grpbx_search);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Administration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administration";
			this->Load += gcnew System::EventHandler(this, &Administration::Administration_Load);
			this->grpbx_search->ResumeLayout(false);
			this->grpbx_add_eddit_delete->ResumeLayout(false);
			this->grpbx_add_eddit_delete->PerformLayout();
			this->grpbx_new_user->ResumeLayout(false);
			this->grpbx_new_user->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Administration_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //By usin this addbuttn administrator can add new train to the data base
		   //

	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		//Code for ADD butten
		grpbx_add_eddit_delete->Show();
		grpbx_search->Show();
		listBox->Show();
		grpbx_new_user->Hide();
		this->grpbx_add_eddit_delete->Enabled = true;
		this->grpbx_search->Enabled = false;
		this->listBox->Enabled = false;
		this->btn_edit_grpbx->Enabled = false;
		this->btn_add_grpbx->Enabled = true;
		this->btn_delete_grpbx->Enabled = false;
		this->txt_train_number->Clear();
		this->txt_source->Clear();
		this->txtdestination->Clear();
		this->txt_time->Clear();
		this->txt_departure_time->Clear();
		this->txt_no_of_pasengers->Clear();
		this->txt_price->Clear();
		this->listBox->Items->Clear();

	}
		   
	private: System::Void btn_edit_grpbx_Click(System::Object^ sender, System::EventArgs^ e) {
		//Update button in the group box is used to update an existing train

		String^ sourceval = txt_source->Text;		
		String^ destinationval = txtdestination->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);



		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update railway_ticketing_system_kelani_valley_line.train_detail set train_no='" + this->txt_train_number->Text + "',source='" + sourceval + "',destination='" + destinationval + "',time='" + this->txt_time->Text + "',departure_time='" + this->txt_departure_time->Text + "',passengers='" + this->txt_no_of_pasengers->Text + "' where train_no='" + this->txt_train_number->Text + "'  ;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			MessageBox::Show("Record is Updated");
			while (myReader->Read()) {


			}



		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		this->txt_train_number->Clear();
		this->txt_source->Clear();
		this->txtdestination->Clear();
		this->txt_time->Clear();
		this->txt_departure_time->Clear();
		this->txt_no_of_pasengers->Clear();
		this->txt_price->Clear();
	}

		   
	private: System::Void btn_add_grpbx_Click(System::Object^ sender, System::EventArgs^ e) {

		//Use Add  butten in the group box to Add new train time in to the database
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into railway_ticketing_system_kelani_valley_line.train_detail(train_no,source,destination,time,departure_time,passengers,ticket_price) values ('" + this->txt_train_number->Text + "','" + this->txt_source->Text + "','" + this->txtdestination->Text + "','" + this->txt_time->Text + "','" + this->txt_departure_time->Text + "','" + this->txt_no_of_pasengers->Text + "','" + this->txt_price->Text + "') ;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			MessageBox::Show("Sucssesfully added");
			



		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		this->txt_train_number->Clear();
		this->txt_source->ResetText();
		this->txtdestination->ResetText();
		this->txt_time->Clear();
		this->txt_departure_time->Clear();
		this->txt_no_of_pasengers->Clear();
		this->txt_price->Clear();


	}
	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e) {
		//Display the grpbx_add_eddit_delete and search box
		//Clear all the text boxes
		this->txt_train_number->Clear();
		this->txt_source->Clear();
		this->txtdestination->Clear();
		this->txt_time->Clear();
		this->txt_departure_time->Clear();
		this->txt_no_of_pasengers->Clear();
		this->txt_price->Clear();
		this->listBox->Items->Clear();
		grpbx_add_eddit_delete->Show();
		grpbx_search->Show();
		listBox->Show();
		grpbx_new_user->Hide();
		this->grpbx_add_eddit_delete->Enabled = false;
		this->grpbx_search->Enabled = true;
		this->btn_edit_grpbx->Enabled = true;
		this->btn_add_grpbx->Enabled = false;
		this->btn_delete_grpbx->Enabled = false;




	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		//Display the grpbx_add_eddit_delete and search box
		//Clear all the text boxes
		this->txt_train_number->Clear();
		this->txt_source->Clear();
		this->txtdestination->Clear();
		this->txt_time->Clear();
		this->txt_departure_time->Clear();
		this->txt_no_of_pasengers->Clear();
		this->txt_price->Clear();
		this->listBox->ClearSelected();
		this->listBox->Items->Clear();
		grpbx_search->Show();
		listBox->Show();
		grpbx_new_user->Hide();
		this->grpbx_add_eddit_delete->Enabled = false;
		this->grpbx_search->Enabled = true;
		this->btn_edit_grpbx->Enabled = false;
		this->btn_add_grpbx->Enabled = false;
		this->btn_delete_grpbx->Enabled = true;
		
	}
	private: System::Void cmbx_source_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmbx_sorce_grpbx_search_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void btn_search_grpbx_search_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//When click the list box automatically fill the text boxes
		String^ listBoxval = listBox->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select *from railway_ticketing_system_kelani_valley_line.train_detail where no='" + listBoxval + "';", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			if (myReader->Read()) {

				
				String^ train_no = myReader->GetString("train_no");
				txt_train_number->Text = train_no;
				String^ source = myReader->GetString("source");
				txt_source->Text=source;
				String^ destination = myReader->GetString("destination");
				txtdestination->Text = destination;
				String^ time = myReader->GetString("time");				
				txt_time->Text = time;
				String^ dep_time = myReader->GetString("departure_time");
				txt_departure_time->Text = dep_time;
				String^ passengers = myReader->GetString("passengers");
				txt_no_of_pasengers->Text = passengers;
				String^ price = myReader->GetString("ticket_price");
				txt_price->Text = price;


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

		   //user defined Function which is made by me for load the cobo box with source and destination which are available in the database table "train details"

	private:void Fillcombo(void) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("  SELECT distinct `train_detail`.`source` FROM `railway_ticketing_system_kelani_valley_line`.`train_detail`;", conDatabase);
		MySqlDataReader^ myReader;

		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();


			while (myReader->Read()) {

				String^ source = myReader->GetString("source");
				cmbx_source->Items->Add(source);			


			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}


private:void Fillcombo2(void) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("  SELECT distinct `train_detail`.`destination` FROM `railway_ticketing_system_kelani_valley_line`.`train_detail`;", conDatabase);
	MySqlDataReader^ myReader;

	try {
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();


		while (myReader->Read()) {			

			String^ destination = myReader->GetString("destination");
			cmbx_destination->Items->Add(destination);

		}



	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


	private: System::Void btn_delete_grpbx_Click(System::Object^ sender, System::EventArgs^ e) {
		//delete batten in the group box use to delete a record from database
		String^ sourceval = txt_source->Text;		
		String^ destinationval = txtdestination->Text;
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);


		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete  from railway_ticketing_system_kelani_valley_line.train_detail  where train_no='" + this->txt_train_number->Text + "'  ;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();

			
			while (myReader->Read()) {

				MessageBox::Show("Record is deleted");
			}



		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		this->txt_train_number->Clear();
		this->txt_source->ResetText();
		this->txtdestination->ResetText();
		this->txt_time->Clear();
		this->txt_departure_time->Clear();
		this->txt_no_of_pasengers->Clear();
		this->txt_price->Clear();



	}
	private: System::Void grpbx_search_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_sarch_Click(System::Object^ sender, System::EventArgs^ e) {
//SEARCH batten code

		this->grpbx_search->Enabled = true;
		this->listBox->Enabled = true;
		this->grpbx_add_eddit_delete->Enabled = true;
		this->btn_add_grpbx->Enabled = false;
		this->btn_delete_grpbx->Enabled = true;
		this->btn_delete->Enabled = true;
		this->btn_edit->Enabled = true;
		this->btn_add->Enabled = true;
		this->btn_new_user->Enabled = true;



		String^ sourceval = cmbx_source->Text;	//value of cmbobox"cmbx_sorce_grpbx_search" get to the variable called "sourceval"
		String^ destinationval = cmbx_destination->Text;	//value of cmbobox"cmbx_destination_grpbx_search" get to the variable called "destinationval"


		String^ constring = L"datasource=localhost;port=3306;username=root;password=root"; //connect to the mysql
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);

		//Search for the details of train in database, which are related with soures and destination selected from combo box

		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from railway_ticketing_system_kelani_valley_line.train_detail where  source='" + sourceval + "'and destination='" + destinationval + "';", conDatabase);
		MySqlDataReader^ myReader;

		this->cmbx_source->ResetText();
		this->cmbx_destination->ResetText();

		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();


			while (myReader->Read()) {				
							
				String^ train_no = myReader->GetString("train_no");
				String^ no = myReader->GetString("no");				
				String^ source = myReader->GetString("source");
				String^ destination = myReader->GetString("destination");
				
				
				for (int i = 0; i < 1; i++) {
					listBox->Items->Add(no+" "+train_no+" train from "+ source+" to "+destination);
					i++;
			}

								
			}

		}

		catch (Exception^ ex)
		{

			MessageBox::Show(ex->Message);

		}

	}
	private: System::Void btn_user_add_Click(System::Object^ sender, System::EventArgs^ e) {
//Add new administrator into the system 
		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);



		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into railway_ticketing_system_kelani_valley_line.user_login(first_name,last_name,user_name,password) values ('" + this->txt_first_name->Text + "','" + this->txt_last_name->Text + "','" + this->txt_user_name->Text + "','"+this->txt_password->Text+"') ;", conDatabase);
		MySqlDataReader^ myReader;
		try {
			conDatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Sucssesfully Registerd");

			
		}
		catch (Exception^ ex) {
			MessageBox::Show("Already exisist");
		}
		
		

	this->txt_first_name->Clear();
	this->txt_last_name->Clear();
	this->txt_user_name->Clear();
	this->txt_password->Clear();
	

}
private: System::Void btn_new_user_Click(System::Object^ sender, System::EventArgs^ e) {
	//Code for New user batten 
	this->txt_train_number->Clear();
	this->txt_source->Clear();
	this->txtdestination->Clear();
	this->txt_time->Clear();
	this->txt_departure_time->Clear();
	this->txt_no_of_pasengers->Clear();
	this->txt_price->Clear();
	this->listBox->Items->Clear();
	grpbx_new_user->Show();
	grpbx_add_eddit_delete->Hide();
	grpbx_search->Hide();
	listBox->Hide();
}
private: System::Void grpbx_new_user_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_source_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
	
}
private: System::Void lbl_tiket_price_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbx_source_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
