#pragma once

namespace RaiwayTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;
	using namespace System::Drawing::Printing;

	/// <summary>
	/// Summary for Reservation
	///This is the page which is used to issu tickets.
	///User can serch for destination using the comboboxes
	/// Ther is two comboboxes which are load the all station that available in database. Aftre the selection os source and destination,
	///all the trains availbles ara displied on the list box with the time. when user select the train which is want to issu tickets ,
	///ditals automatically swich in to the form in rightsid and then user has to enter the number of ticket want to issu wen submit it atomatcally calculate the total price.
	///The click the butten "print" to print the ticket
	///
	/// </summary>
	public ref class Reservation : public System::Windows::Forms::Form
	{
	public:
		Reservation(void)
		{
			InitializeComponent();
			Fillcombo();
			Fillcombo2();
			this->grpbx_issu_ticket->Enabled = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Reservation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_railwy_ticketing_system;
	private: System::Windows::Forms::GroupBox^ grpbx_search;
	private: System::Windows::Forms::Button^ btn_sarch;
	private: System::Windows::Forms::ComboBox^ cmbx_destination;

	private: System::Windows::Forms::ComboBox^ cmbx_source;

	private: System::Windows::Forms::Label^ lbl_destination_grpbx_search;
	private: System::Windows::Forms::Label^ lbl_search_grpbx_search;
	private: System::Windows::Forms::ListBox^ listBox;
	private: System::Windows::Forms::GroupBox^ grpbx_issu_ticket;

	private: System::Windows::Forms::Button^ btn_print;

	private: System::Windows::Forms::TextBox^ txt_no_of_ticket;




	private: System::Windows::Forms::Label^ ibl_time;
	private: System::Windows::Forms::Label^ lbl_no_of_ticket;
	private: System::Windows::Forms::Label^ lbl_destnation;

	private: System::Windows::Forms::Label^ lbl_source;
	private: System::Windows::Forms::Label^ lbl_total;

	private: System::Windows::Forms::Button^ btn_apply;
	private: System::Windows::Forms::Label^ lbl_price;
	private: System::Windows::Forms::Label^ lbl_time;
	private: System::Windows::Forms::Label^ lbl_destination_value;
	private: System::Windows::Forms::Label^ lbl_sourse_value;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::Label^ lbl_arrival_time;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbl_arrival;











	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reservation::typeid));
			this->lbl_railwy_ticketing_system = (gcnew System::Windows::Forms::Label());
			this->grpbx_search = (gcnew System::Windows::Forms::GroupBox());
			this->btn_sarch = (gcnew System::Windows::Forms::Button());
			this->cmbx_destination = (gcnew System::Windows::Forms::ComboBox());
			this->cmbx_source = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_destination_grpbx_search = (gcnew System::Windows::Forms::Label());
			this->lbl_search_grpbx_search = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->grpbx_issu_ticket = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_arrival = (gcnew System::Windows::Forms::Label());
			this->lbl_arrival_time = (gcnew System::Windows::Forms::Label());
			this->lbl_time = (gcnew System::Windows::Forms::Label());
			this->lbl_destination_value = (gcnew System::Windows::Forms::Label());
			this->lbl_sourse_value = (gcnew System::Windows::Forms::Label());
			this->lbl_price = (gcnew System::Windows::Forms::Label());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->btn_apply = (gcnew System::Windows::Forms::Button());
			this->btn_print = (gcnew System::Windows::Forms::Button());
			this->txt_no_of_ticket = (gcnew System::Windows::Forms::TextBox());
			this->ibl_time = (gcnew System::Windows::Forms::Label());
			this->lbl_no_of_ticket = (gcnew System::Windows::Forms::Label());
			this->lbl_destnation = (gcnew System::Windows::Forms::Label());
			this->lbl_source = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->grpbx_search->SuspendLayout();
			this->grpbx_issu_ticket->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_railwy_ticketing_system
			// 
			this->lbl_railwy_ticketing_system->BackColor = System::Drawing::Color::Transparent;
			this->lbl_railwy_ticketing_system->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_railwy_ticketing_system->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold));
			this->lbl_railwy_ticketing_system->ForeColor = System::Drawing::Color::BurlyWood;
			this->lbl_railwy_ticketing_system->Location = System::Drawing::Point(298, 18);
			this->lbl_railwy_ticketing_system->Name = L"lbl_railwy_ticketing_system";
			this->lbl_railwy_ticketing_system->Size = System::Drawing::Size(466, 100);
			this->lbl_railwy_ticketing_system->TabIndex = 0;
			this->lbl_railwy_ticketing_system->Text = L"  Railway Ticketing System \r\n       Kelani Valley Line\r\n\r\n";
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
			this->grpbx_search->Location = System::Drawing::Point(12, 146);
			this->grpbx_search->Name = L"grpbx_search";
			this->grpbx_search->Size = System::Drawing::Size(518, 199);
			this->grpbx_search->TabIndex = 19;
			this->grpbx_search->TabStop = false;
			// 
			// btn_sarch
			// 
			this->btn_sarch->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_sarch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sarch->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_sarch->Location = System::Drawing::Point(301, 144);
			this->btn_sarch->Name = L"btn_sarch";
			this->btn_sarch->Size = System::Drawing::Size(117, 35);
			this->btn_sarch->TabIndex = 20;
			this->btn_sarch->Text = L"Search";
			this->btn_sarch->UseVisualStyleBackColor = false;
			this->btn_sarch->Click += gcnew System::EventHandler(this, &Reservation::btn_sarch_Click);
			// 
			// cmbx_destination
			// 
			this->cmbx_destination->FormattingEnabled = true;
			this->cmbx_destination->Location = System::Drawing::Point(258, 86);
			this->cmbx_destination->Name = L"cmbx_destination";
			this->cmbx_destination->Size = System::Drawing::Size(160, 21);
			this->cmbx_destination->TabIndex = 12;
			this->cmbx_destination->Text = L"<Select Destination>";
			this->cmbx_destination->SelectedIndexChanged += gcnew System::EventHandler(this, &Reservation::cmbx_destination_SelectedIndexChanged);
			// 
			// cmbx_source
			// 
			this->cmbx_source->FormattingEnabled = true;
			this->cmbx_source->Location = System::Drawing::Point(258, 32);
			this->cmbx_source->Name = L"cmbx_source";
			this->cmbx_source->Size = System::Drawing::Size(160, 21);
			this->cmbx_source->TabIndex = 11;
			this->cmbx_source->Text = L"<select source>";
			this->cmbx_source->SelectedIndexChanged += gcnew System::EventHandler(this, &Reservation::cmbx_source_SelectedIndexChanged);
			// 
			// lbl_destination_grpbx_search
			// 
			this->lbl_destination_grpbx_search->BackColor = System::Drawing::Color::Transparent;
			this->lbl_destination_grpbx_search->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_destination_grpbx_search->ForeColor = System::Drawing::SystemColors::Menu;
			this->lbl_destination_grpbx_search->Location = System::Drawing::Point(40, 90);
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
			this->lbl_search_grpbx_search->Location = System::Drawing::Point(31, 27);
			this->lbl_search_grpbx_search->Name = L"lbl_search_grpbx_search";
			this->lbl_search_grpbx_search->Size = System::Drawing::Size(127, 26);
			this->lbl_search_grpbx_search->TabIndex = 6;
			this->lbl_search_grpbx_search->Text = L"Source";
			// 
			// listBox
			// 
			this->listBox->AccessibleRole = System::Windows::Forms::AccessibleRole::ScrollBar;
			this->listBox->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->listBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox->ForeColor = System::Drawing::SystemColors::Window;
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 20;
			this->listBox->Location = System::Drawing::Point(12, 351);
			this->listBox->Name = L"listBox";
			this->listBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->listBox->ScrollAlwaysVisible = true;
			this->listBox->Size = System::Drawing::Size(518, 264);
			this->listBox->TabIndex = 20;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Reservation::listBox_SelectedIndexChanged);
			// 
			// grpbx_issu_ticket
			// 
			this->grpbx_issu_ticket->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->grpbx_issu_ticket->Controls->Add(this->label1);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_arrival);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_arrival_time);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_time);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_destination_value);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_sourse_value);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_price);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_total);
			this->grpbx_issu_ticket->Controls->Add(this->btn_apply);
			this->grpbx_issu_ticket->Controls->Add(this->btn_print);
			this->grpbx_issu_ticket->Controls->Add(this->txt_no_of_ticket);
			this->grpbx_issu_ticket->Controls->Add(this->ibl_time);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_no_of_ticket);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_destnation);
			this->grpbx_issu_ticket->Controls->Add(this->lbl_source);
			this->grpbx_issu_ticket->Location = System::Drawing::Point(536, 146);
			this->grpbx_issu_ticket->Name = L"grpbx_issu_ticket";
			this->grpbx_issu_ticket->Size = System::Drawing::Size(404, 449);
			this->grpbx_issu_ticket->TabIndex = 22;
			this->grpbx_issu_ticket->TabStop = false;
			this->grpbx_issu_ticket->Enter += gcnew System::EventHandler(this, &Reservation::grpbx_issu_ticket_Enter);
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(29, 247);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 29);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Ticket Price:";
			// 
			// lbl_arrival
			// 
			this->lbl_arrival->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbl_arrival->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_arrival->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_arrival->Location = System::Drawing::Point(214, 150);
			this->lbl_arrival->Name = L"lbl_arrival";
			this->lbl_arrival->Size = System::Drawing::Size(129, 30);
			this->lbl_arrival->TabIndex = 28;
			// 
			// lbl_arrival_time
			// 
			this->lbl_arrival_time->AutoSize = true;
			this->lbl_arrival_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_arrival_time->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_arrival_time->Location = System::Drawing::Point(219, 130);
			this->lbl_arrival_time->Name = L"lbl_arrival_time";
			this->lbl_arrival_time->Size = System::Drawing::Size(124, 20);
			this->lbl_arrival_time->TabIndex = 27;
			this->lbl_arrival_time->Text = L"Arrival TimeTime";
			// 
			// lbl_time
			// 
			this->lbl_time->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbl_time->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_time->Location = System::Drawing::Point(42, 150);
			this->lbl_time->Name = L"lbl_time";
			this->lbl_time->Size = System::Drawing::Size(129, 30);
			this->lbl_time->TabIndex = 26;
			// 
			// lbl_destination_value
			// 
			this->lbl_destination_value->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbl_destination_value->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_destination_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_destination_value->Location = System::Drawing::Point(172, 86);
			this->lbl_destination_value->Name = L"lbl_destination_value";
			this->lbl_destination_value->Size = System::Drawing::Size(171, 30);
			this->lbl_destination_value->TabIndex = 25;
			// 
			// lbl_sourse_value
			// 
			this->lbl_sourse_value->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lbl_sourse_value->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_sourse_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_sourse_value->Location = System::Drawing::Point(172, 37);
			this->lbl_sourse_value->Name = L"lbl_sourse_value";
			this->lbl_sourse_value->Size = System::Drawing::Size(171, 30);
			this->lbl_sourse_value->TabIndex = 24;
			// 
			// lbl_price
			// 
			this->lbl_price->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_price->Location = System::Drawing::Point(29, 276);
			this->lbl_price->Name = L"lbl_price";
			this->lbl_price->Size = System::Drawing::Size(163, 50);
			this->lbl_price->TabIndex = 23;
			this->lbl_price->Click += gcnew System::EventHandler(this, &Reservation::lbl_price_Click);
			// 
			// lbl_total
			// 
			this->lbl_total->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_total->Location = System::Drawing::Point(29, 349);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(175, 60);
			this->lbl_total->TabIndex = 22;
			this->lbl_total->Text = L"Total:";
			this->lbl_total->Click += gcnew System::EventHandler(this, &Reservation::label1_Click);
			// 
			// btn_apply
			// 
			this->btn_apply->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_apply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_apply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_apply->Location = System::Drawing::Point(246, 269);
			this->btn_apply->Name = L"btn_apply";
			this->btn_apply->Size = System::Drawing::Size(117, 35);
			this->btn_apply->TabIndex = 21;
			this->btn_apply->Text = L"Calc";
			this->btn_apply->UseVisualStyleBackColor = false;
			this->btn_apply->Click += gcnew System::EventHandler(this, &Reservation::btn_apply_Click);
			// 
			// btn_print
			// 
			this->btn_print->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_print->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_print->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_print->Location = System::Drawing::Point(246, 349);
			this->btn_print->Name = L"btn_print";
			this->btn_print->Size = System::Drawing::Size(117, 35);
			this->btn_print->TabIndex = 20;
			this->btn_print->Text = L"Print";
			this->btn_print->UseVisualStyleBackColor = false;
			this->btn_print->Click += gcnew System::EventHandler(this, &Reservation::btn_print_Click);
			// 
			// txt_no_of_ticket
			// 
			this->txt_no_of_ticket->Location = System::Drawing::Point(214, 205);
			this->txt_no_of_ticket->Name = L"txt_no_of_ticket";
			this->txt_no_of_ticket->Size = System::Drawing::Size(122, 20);
			this->txt_no_of_ticket->TabIndex = 6;
			this->txt_no_of_ticket->TextChanged += gcnew System::EventHandler(this, &Reservation::txt_no_of_ticket_TextChanged);
			// 
			// ibl_time
			// 
			this->ibl_time->AutoSize = true;
			this->ibl_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ibl_time->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->ibl_time->Location = System::Drawing::Point(39, 130);
			this->ibl_time->Name = L"ibl_time";
			this->ibl_time->Size = System::Drawing::Size(119, 20);
			this->ibl_time->TabIndex = 3;
			this->ibl_time->Text = L"Departure Time";
			this->ibl_time->Click += gcnew System::EventHandler(this, &Reservation::ibl_time_Click);
			// 
			// lbl_no_of_ticket
			// 
			this->lbl_no_of_ticket->AutoSize = true;
			this->lbl_no_of_ticket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_no_of_ticket->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_no_of_ticket->Location = System::Drawing::Point(39, 205);
			this->lbl_no_of_ticket->Name = L"lbl_no_of_ticket";
			this->lbl_no_of_ticket->Size = System::Drawing::Size(89, 20);
			this->lbl_no_of_ticket->TabIndex = 2;
			this->lbl_no_of_ticket->Text = L"No of ticket";
			// 
			// lbl_destnation
			// 
			this->lbl_destnation->AutoSize = true;
			this->lbl_destnation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_destnation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_destnation->Location = System::Drawing::Point(38, 89);
			this->lbl_destnation->Name = L"lbl_destnation";
			this->lbl_destnation->Size = System::Drawing::Size(90, 20);
			this->lbl_destnation->TabIndex = 1;
			this->lbl_destnation->Text = L"Destination";
			// 
			// lbl_source
			// 
			this->lbl_source->AutoSize = true;
			this->lbl_source->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_source->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_source->Location = System::Drawing::Point(39, 33);
			this->lbl_source->Name = L"lbl_source";
			this->lbl_source->Size = System::Drawing::Size(60, 20);
			this->lbl_source->TabIndex = 0;
			this->lbl_source->Text = L"Source";
			this->lbl_source->Click += gcnew System::EventHandler(this, &Reservation::lbl_source_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Reservation::printDocument1_PrintPage);
			// 
			// Reservation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(980, 637);
			this->Controls->Add(this->grpbx_issu_ticket);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->grpbx_search);
			this->Controls->Add(this->lbl_railwy_ticketing_system);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Reservation";
			this->Text = L"Reservation";
			this->Load += gcnew System::EventHandler(this, &Reservation::Reservation_Load);
			this->grpbx_search->ResumeLayout(false);
			this->grpbx_issu_ticket->ResumeLayout(false);
			this->grpbx_issu_ticket->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sarch_Click(System::Object^ sender, System::EventArgs^ e) {
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
				String^ time = myReader->GetString("time");

				//Display the train details in list box
				for (int i = 0; i < 1; i++) {
					listBox->Items->Add(no + " AT " +time+"  from " + source + " to " + destination);
					i++;
				}


			}

		}

		catch (Exception^ ex)
		{

			MessageBox::Show(ex->Message);

		}

	}
private: System::Void Reservation_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   //user defined Functions which are used load the cobo box with source and destination which are available in the database table "train details"

	private:void Fillcombo(void) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" SELECT distinct `train_detail`.`source` ,`train_detail`.`source` FROM `railway_ticketing_system_kelani_valley_line`.`train_detail`;", conDatabase);
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

private: System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//Selected train details of list display in thetexboxes
	this->grpbx_issu_ticket->Enabled = true;
	this->btn_apply->Enabled = true;

	String^ listBoxval = listBox->Text;
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select *from railway_ticketing_system_kelani_valley_line.train_detail where no='" + listBoxval + "';", conDatabase);
	MySqlDataReader^ myReader;

	try {
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {
			
			String^ source = myReader->GetString("source");
			lbl_sourse_value->Text = source;
			String^ destination = myReader->GetString("destination");
			lbl_destination_value->Text = destination;
			String^ time = myReader->GetString("time");
			lbl_time->Text = time;
			String^ time_depature = myReader->GetString("departure_time");
			lbl_arrival->Text = time_depature;
			String^ price = myReader->GetInt32("ticket_price").ToString();
			lbl_price->Text = price;				


		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_no_of_ticket_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btn_apply_Click(System::Object^ sender, System::EventArgs^ e) {
	//Calculate the total price of ticket
	this->btn_apply->Enabled = true;
	double number_of_ticket = Convert::ToDouble(txt_no_of_ticket->Text);
	double price = Convert::ToDouble(lbl_price->Text);
	double total;
	total = number_of_ticket * price;

	lbl_total->Text ="Total:" + Convert::ToString(total)+".00LKR";
	


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void btn_print_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PrintDialog^ dlgPrint = gcnew PrintDialog;
	PrintDocument^ docPrint = gcnew PrintDocument;
	dlgPrint->Document = printDocument1;
	dlgPrint->ShowDialog();
	
	
	
}
	  
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	String^ docPrint = grpbx_issu_ticket->Text;
	System::Drawing::Font^ drwFont = gcnew System::Drawing::Font("Arial", 20);
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
	PointF drawPoint = PointF(150.0F, 150.0F);
	e->Graphics->DrawString(docPrint, drwFont, drawBrush, drawPoint);
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbl_source_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ibl_time_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void grpbx_issu_ticket_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cmbx_source_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void cmbx_destination_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void lbl_price_Click(System::Object^ sender, System::EventArgs^ e) {
}
};


}

