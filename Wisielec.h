#pragma once
#include "Slowa.h"

namespace Project1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	Slowa s;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Wisielec : public System::Windows::Forms::Form
	{
	public:
		
		Wisielec(void)
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
		~Wisielec()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;

	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Label^ label1;






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
		/// 
		void InitializeComponent()
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(73, 78);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(289, 336);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			pictureBox1->Image = Image::FromFile("s" + s.bledy + ".png");
			
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(136, 541);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 66);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Wyjscie";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Wisielec::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(12, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"A";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(43, 446);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 30);
			this->button3->TabIndex = 5;
			this->button3->Text = L"B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(74, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 30);
			this->button4->TabIndex = 6;
			this->button4->Text = L"C";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(105, 446);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 30);
			this->button5->TabIndex = 7;
			this->button5->Text = L"D";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(136, 446);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(30, 30);
			this->button6->TabIndex = 8;
			this->button6->Text = L"E";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(167, 446);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(30, 30);
			this->button7->TabIndex = 9;
			this->button7->Text = L"F";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(198, 446);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 30);
			this->button8->TabIndex = 10;
			this->button8->Text = L"G";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(228, 446);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(30, 30);
			this->button9->TabIndex = 11;
			this->button9->Text = L"H";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(259, 446);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(30, 30);
			this->button10->TabIndex = 12;
			this->button10->Text = L"I";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(290, 446);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(30, 30);
			this->button12->TabIndex = 14;
			this->button12->Text = L"J";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(321, 446);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(30, 30);
			this->button13->TabIndex = 15;
			this->button13->Text = L"K";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(352, 446);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(30, 30);
			this->button14->TabIndex = 16;
			this->button14->Text = L"L";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(383, 446);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(30, 30);
			this->button15->TabIndex = 17;
			this->button15->Text = L"M";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(383, 477);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(30, 30);
			this->button16->TabIndex = 31;
			this->button16->Text = L"Z";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(352, 477);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(30, 30);
			this->button17->TabIndex = 30;
			this->button17->Text = L"Y";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(321, 477);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(30, 30);
			this->button18->TabIndex = 29;
			this->button18->Text = L"X";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(290, 477);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(30, 30);
			this->button19->TabIndex = 28;
			this->button19->Text = L"W";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(259, 477);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(30, 30);
			this->button20->TabIndex = 27;
			this->button20->Text = L"V";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(228, 477);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(30, 30);
			this->button21->TabIndex = 26;
			this->button21->Text = L"U";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(198, 477);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(30, 30);
			this->button22->TabIndex = 25;
			this->button22->Text = L"T";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(166, 477);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(30, 30);
			this->button23->TabIndex = 24;
			this->button23->Text = L"S";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(135, 477);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(30, 30);
			this->button24->TabIndex = 23;
			this->button24->Text = L"R";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->Location = System::Drawing::Point(104, 477);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(30, 30);
			this->button25->TabIndex = 22;
			this->button25->Text = L"Q";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->Location = System::Drawing::Point(73, 477);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(30, 30);
			this->button26->TabIndex = 21;
			this->button26->Text = L"P";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->Location = System::Drawing::Point(43, 477);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(30, 30);
			this->button28->TabIndex = 19;
			this->button28->Text = L"O";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button29->Location = System::Drawing::Point(12, 477);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(30, 30);
			this->button29->TabIndex = 18;
			this->button29->Text = L"N";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Wisielec::wybranyznak);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F));
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(398, 32);
			this->label1->TabIndex = 32;
			s.tworzeniegwiazd();
			String^ name = gcnew String(s.wisielec.c_str());
			this->label1->Text = name;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Wisielec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 621);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Wisielec";
			this->Text = L"Wisielec";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void wybranyznak(System::Object^ sender, System::EventArgs^ e) {
		Button^ znaki = safe_cast<Button^>(sender);
		System::String^ dziwny = znaki->Text;
		std::string zwykly = msclr::interop::marshal_as<std::string>(dziwny);
		char znak[1];
		string d;
		znak[0] = dziwny[0];
		if (strstr(s.doc.c_str(), zwykly.c_str()))
		{
			for (int i = 0; i < s.doc.length(); i++)
			{
				if (s.doc.at(i) == znak[0])
					s.wisielec[i] = znak[0];
			}
			String^ name = gcnew String(s.wisielec.c_str());
			label1->Text = name;
			znaki->BackColor = System::Drawing::Color::LightGreen;
			znaki->Enabled = false;
			if (s.doc == s.wisielec)
			{
				String^ haslo = gcnew String(s.doc.c_str());
				String^ message = "Twoim haslem bylo\" " + haslo + " \" Czy chcesz grac dalej ?";
				String^ caption = "Wygrales!!!";
				System::Windows::Forms::MessageBoxButtons buttons = System::Windows::Forms::MessageBoxButtons::YesNo;
				System::Windows::Forms::DialogResult result;
				result = System::Windows::Forms::MessageBox::Show(this, message, caption, buttons);
				if (result == System::Windows::Forms::DialogResult::Yes)
					Application::Restart();
				else
					exit(0);
			}
		}
		else
		{
			s.bledy++;
			pictureBox1->Image = Image::FromFile("s" + s.bledy + ".png");
			znaki->BackColor = System::Drawing::Color::LightCoral;
			znaki->Enabled = false;
			if (s.bledy >= 6) {
				String^ haslo = gcnew String(s.doc.c_str());
				String^ message = "Twoim haslem bylo\" "+haslo+" \" Czy chcesz grac dalej ?";
				String^ caption = "Przegrales!!!";
				System::Windows::Forms::MessageBoxButtons buttons = System::Windows::Forms::MessageBoxButtons::YesNo;
				System::Windows::Forms::DialogResult result;
				result = System::Windows::Forms::MessageBox::Show(this, message, caption, buttons);
				if (result == System::Windows::Forms::DialogResult::Yes)
					Application::Restart();
				else
					exit(0);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
}
};
}
