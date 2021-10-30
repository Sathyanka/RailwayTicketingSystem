#pragma once
#include "Login.h"

namespace RaiwayTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Dashboard
	
	//This is the main dashboard form
	//There are two button used to open  resvation form  and administration form

	/// </summary>
	
	public delegate void FavaDelegate();
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		delegate void FavaDelegate();
		event FavaDelegate^ FavaEvent;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		
	}

	private: System::Windows::Forms::Label^ lbl_railwy_ticketing_system;
	private: System::Windows::Forms::Button^ btn_issu_ticket;







	private: System::Windows::Forms::Button^ btn_administration;
	private: System::Windows::Forms::Label^ lbl_issu_ticket;
	private: System::Windows::Forms::Label^ lbl_adminstration;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->lbl_railwy_ticketing_system = (gcnew System::Windows::Forms::Label());
			this->btn_issu_ticket = (gcnew System::Windows::Forms::Button());
			this->btn_administration = (gcnew System::Windows::Forms::Button());
			this->lbl_issu_ticket = (gcnew System::Windows::Forms::Label());
			this->lbl_adminstration = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_railwy_ticketing_system
			// 
			this->lbl_railwy_ticketing_system->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbl_railwy_ticketing_system->BackColor = System::Drawing::Color::Transparent;
			this->lbl_railwy_ticketing_system->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_railwy_ticketing_system->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_railwy_ticketing_system->ForeColor = System::Drawing::Color::BurlyWood;
			this->lbl_railwy_ticketing_system->Location = System::Drawing::Point(182, 9);
			this->lbl_railwy_ticketing_system->Name = L"lbl_railwy_ticketing_system";
			this->lbl_railwy_ticketing_system->Size = System::Drawing::Size(647, 125);
			this->lbl_railwy_ticketing_system->TabIndex = 0;
			this->lbl_railwy_ticketing_system->Text = L"  Railway Ticketing System\r\n       Kelani Valley Line";
			this->lbl_railwy_ticketing_system->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_railwy_ticketing_system->Click += gcnew System::EventHandler(this, &Dashboard::label1_Click);
			// 
			// btn_issu_ticket
			// 
			this->btn_issu_ticket->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_issu_ticket->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_issu_ticket->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_issu_ticket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_issu_ticket->ForeColor = System::Drawing::SystemColors::Menu;
			this->btn_issu_ticket->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_issu_ticket.Image")));
			this->btn_issu_ticket->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btn_issu_ticket->Location = System::Drawing::Point(450, 243);
			this->btn_issu_ticket->Name = L"btn_issu_ticket";
			this->btn_issu_ticket->Size = System::Drawing::Size(292, 72);
			this->btn_issu_ticket->TabIndex = 1;
			this->btn_issu_ticket->Text = L"Issu Tickets";
			this->btn_issu_ticket->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_issu_ticket->UseVisualStyleBackColor = false;
			this->btn_issu_ticket->Click += gcnew System::EventHandler(this, &Dashboard::btn_issu_ticket_Click);
			// 
			// btn_administration
			// 
			this->btn_administration->BackColor = System::Drawing::Color::RosyBrown;
			this->btn_administration->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_administration->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_administration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_administration->ForeColor = System::Drawing::SystemColors::Menu;
			this->btn_administration->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_administration.Image")));
			this->btn_administration->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_administration->Location = System::Drawing::Point(450, 435);
			this->btn_administration->Name = L"btn_administration";
			this->btn_administration->Size = System::Drawing::Size(292, 69);
			this->btn_administration->TabIndex = 1;
			this->btn_administration->Text = L"Administration";
			this->btn_administration->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_administration->UseVisualStyleBackColor = false;
			this->btn_administration->Click += gcnew System::EventHandler(this, &Dashboard::btn_administration_Click);
			// 
			// lbl_issu_ticket
			// 
			this->lbl_issu_ticket->BackColor = System::Drawing::Color::Transparent;
			this->lbl_issu_ticket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_issu_ticket->ForeColor = System::Drawing::Color::Bisque;
			this->lbl_issu_ticket->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_issu_ticket.Image")));
			this->lbl_issu_ticket->Location = System::Drawing::Point(215, 198);
			this->lbl_issu_ticket->Name = L"lbl_issu_ticket";
			this->lbl_issu_ticket->Size = System::Drawing::Size(116, 136);
			this->lbl_issu_ticket->TabIndex = 9;
			this->lbl_issu_ticket->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_adminstration
			// 
			this->lbl_adminstration->BackColor = System::Drawing::Color::Transparent;
			this->lbl_adminstration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_adminstration->ForeColor = System::Drawing::Color::Bisque;
			this->lbl_adminstration->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_adminstration.Image")));
			this->lbl_adminstration->Location = System::Drawing::Point(205, 393);
			this->lbl_adminstration->Name = L"lbl_adminstration";
			this->lbl_adminstration->Size = System::Drawing::Size(126, 123);
			this->lbl_adminstration->TabIndex = 10;
			this->lbl_adminstration->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(980, 607);
			this->Controls->Add(this->lbl_adminstration);
			this->Controls->Add(this->lbl_issu_ticket);
			this->Controls->Add(this->btn_administration);
			this->Controls->Add(this->btn_issu_ticket);
			this->Controls->Add(this->lbl_railwy_ticketing_system);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {

		
	
		
		
	}
private: System::Void grbx_issu_tickets_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
	   //This "btn_issu_ticket" butten is used to open the reservation form
private: System::Void btn_issu_ticket_Click(System::Object^ sender, System::EventArgs^ e) {

	
	RaiwayTicketingSystem::Reservation Form;
	Form.ShowDialog();
	
	
}
private: System::Void btn_find_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   //This btn_administration butten is used to open the admin login form
private: System::Void btn_administration_Click(System::Object^ sender, System::EventArgs^ e) {
	
	RaiwayTicketingSystem::Login Form;
	Form.ShowDialog();
	

}
};
}
