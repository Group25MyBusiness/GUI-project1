#pragma once
#include "HomePage.h"

namespace Group25MyBusinessProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->bunifuThinButton21);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->bunifuCustomLabel1);
			this->panel1->ForeColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(184, 37);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(320, 375);
			this->panel1->TabIndex = 0;
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"SIGN UP";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::Black;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(76, 256);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(169, 51);
			this->bunifuThinButton21->TabIndex = 9;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &RegisterForm::bunifuThinButton21_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(134, 202);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(135, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(135, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(135, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(134, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(19, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Phone No   ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(21, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email             ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(21, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password     ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(21, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name   ";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"MS PGothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::White;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(72, 19);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(173, 24);
			this->bunifuCustomLabel1->TabIndex = 0;
			this->bunifuCustomLabel1->Text = L"SIGNUP HERE!";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(694, 486);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {
	bool has_upper = false;;
	bool has_lower = false;
	bool has_digit = false;
	bool has_symbol = false;

	String^ password = textBox2->Text;
	int len = password->Length;

	char letter;

	for (int i = 0; i < len; i++) // Check upper case
	{
		letter = password[i];
		if (letter >= 65 && letter <= 90) {
			has_upper = true;
			break;
		}
		else {
			has_upper = false;
		}
	}
	for (int i = 0; i < len; i++) // Check loewer case
	{
		letter = password[i];
		if (letter >= 97 && letter <= 122) {
			has_lower = true;
			break;
		}
		else {
			has_lower = false;
		}
	}
	for (int i = 0; i < len; i++) // Check digit
	{
		letter = password[i];
		if (letter >= 48 && letter <= 57) {
			has_digit = true;
			break;
		}
		else {
			has_digit = false;
		}
	}
	for (int i = 0; i < len; i++) // Check symbol
	{
		letter = password[i];
		if (letter >= 32 && letter <= 47 || letter >= 58 && letter <= 64) {
			has_symbol = true;
			break;
		}
		else {
			has_symbol = false;
		}
	}

	if (len >= 8 && has_upper && has_lower && has_digit && has_symbol)
	{
		MessageBox::Show("success", "", MessageBoxButtons::OK);
		HomePage obj;
		this->Hide();
		obj.ShowDialog();
	}
	else {
		MessageBox::Show("Error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
