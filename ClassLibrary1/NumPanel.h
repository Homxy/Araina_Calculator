#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ClassLibrary1 {

	/// <summary>
	/// Summary for NumPanel
	/// </summary>
	public ref class NumPanel : public System::Windows::Forms::UserControl
	{
	public:
		NumPanel(void)
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
		~NumPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ numDot;
	private: System::Windows::Forms::Button^ num0;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ numPlus;


	private: System::Windows::Forms::Button^ numMinus;

	private: System::Windows::Forms::Button^ num3;

	private: System::Windows::Forms::Button^ num2;

	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ numMulti;


	private: System::Windows::Forms::Button^ num6;

	private: System::Windows::Forms::Button^ num5;

	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ numDivide;


	private: System::Windows::Forms::Button^ num9;

	private: System::Windows::Forms::Button^ num8;

	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ numBack;
	private: System::Windows::Forms::Button^ numClear;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;



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
			this->numDot = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numPlus = (gcnew System::Windows::Forms::Button());
			this->numMinus = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->numMulti = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->numDivide = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->numBack = (gcnew System::Windows::Forms::Button());
			this->numClear = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// numDot
			// 
			this->numDot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->numDot->FlatAppearance->BorderSize = 0;
			this->numDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numDot->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDot->ForeColor = System::Drawing::Color::White;
			this->numDot->Location = System::Drawing::Point(35, 267);
			this->numDot->Margin = System::Windows::Forms::Padding(4);
			this->numDot->Name = L"numDot";
			this->numDot->Size = System::Drawing::Size(80, 74);
			this->numDot->TabIndex = 0;
			this->numDot->Text = L".";
			this->numDot->UseVisualStyleBackColor = false;
			this->numDot->Click += gcnew System::EventHandler(this, &NumPanel::numDot_Click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num0->Cursor = System::Windows::Forms::Cursors::Default;
			this->num0->FlatAppearance->BorderSize = 0;
			this->num0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num0->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->ForeColor = System::Drawing::Color::White;
			this->num0->Location = System::Drawing::Point(123, 267);
			this->num0->Margin = System::Windows::Forms::Padding(4);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(80, 74);
			this->num0->TabIndex = 1;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &NumPanel::num0_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button3->Location = System::Drawing::Point(211, 267);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 74);
			this->button3->TabIndex = 2;
			this->button3->Text = L"=";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// numPlus
			// 
			this->numPlus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numPlus->FlatAppearance->BorderSize = 0;
			this->numPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numPlus->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPlus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numPlus->Location = System::Drawing::Point(299, 267);
			this->numPlus->Margin = System::Windows::Forms::Padding(4);
			this->numPlus->Name = L"numPlus";
			this->numPlus->Size = System::Drawing::Size(80, 74);
			this->numPlus->TabIndex = 3;
			this->numPlus->Text = L"+";
			this->numPlus->UseVisualStyleBackColor = false;
			this->numPlus->Click += gcnew System::EventHandler(this, &NumPanel::numPlus_Click);
			// 
			// numMinus
			// 
			this->numMinus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numMinus->FlatAppearance->BorderSize = 0;
			this->numMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numMinus->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMinus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numMinus->Location = System::Drawing::Point(299, 186);
			this->numMinus->Margin = System::Windows::Forms::Padding(4);
			this->numMinus->Name = L"numMinus";
			this->numMinus->Size = System::Drawing::Size(80, 74);
			this->numMinus->TabIndex = 7;
			this->numMinus->Text = L"-";
			this->numMinus->UseVisualStyleBackColor = false;
			this->numMinus->Click += gcnew System::EventHandler(this, &NumPanel::numMinus_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num3->FlatAppearance->BorderSize = 0;
			this->num3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num3->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->ForeColor = System::Drawing::Color::White;
			this->num3->Location = System::Drawing::Point(211, 186);
			this->num3->Margin = System::Windows::Forms::Padding(4);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(80, 74);
			this->num3->TabIndex = 6;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &NumPanel::num3_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num2->Cursor = System::Windows::Forms::Cursors::Default;
			this->num2->FlatAppearance->BorderSize = 0;
			this->num2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num2->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->ForeColor = System::Drawing::Color::White;
			this->num2->Location = System::Drawing::Point(123, 186);
			this->num2->Margin = System::Windows::Forms::Padding(4);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(80, 74);
			this->num2->TabIndex = 5;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &NumPanel::num2_Click);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num1->FlatAppearance->BorderSize = 0;
			this->num1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num1->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->ForeColor = System::Drawing::Color::White;
			this->num1->Location = System::Drawing::Point(35, 186);
			this->num1->Margin = System::Windows::Forms::Padding(4);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(80, 74);
			this->num1->TabIndex = 4;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &NumPanel::num1_Click);
			// 
			// numMulti
			// 
			this->numMulti->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numMulti->FlatAppearance->BorderSize = 0;
			this->numMulti->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numMulti->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numMulti->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numMulti->Location = System::Drawing::Point(299, 105);
			this->numMulti->Margin = System::Windows::Forms::Padding(4);
			this->numMulti->Name = L"numMulti";
			this->numMulti->Size = System::Drawing::Size(80, 74);
			this->numMulti->TabIndex = 11;
			this->numMulti->Text = L"x";
			this->numMulti->UseVisualStyleBackColor = false;
			this->numMulti->Click += gcnew System::EventHandler(this, &NumPanel::numMulti_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num6->FlatAppearance->BorderSize = 0;
			this->num6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num6->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->ForeColor = System::Drawing::Color::White;
			this->num6->Location = System::Drawing::Point(211, 105);
			this->num6->Margin = System::Windows::Forms::Padding(4);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(80, 74);
			this->num6->TabIndex = 10;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &NumPanel::num6_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num5->FlatAppearance->BorderSize = 0;
			this->num5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num5->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->ForeColor = System::Drawing::Color::White;
			this->num5->Location = System::Drawing::Point(123, 105);
			this->num5->Margin = System::Windows::Forms::Padding(4);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(80, 74);
			this->num5->TabIndex = 9;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &NumPanel::num5_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num4->FlatAppearance->BorderSize = 0;
			this->num4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num4->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->ForeColor = System::Drawing::Color::White;
			this->num4->Location = System::Drawing::Point(35, 105);
			this->num4->Margin = System::Windows::Forms::Padding(4);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(80, 74);
			this->num4->TabIndex = 8;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &NumPanel::num4_Click);
			// 
			// numDivide
			// 
			this->numDivide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numDivide->FlatAppearance->BorderSize = 0;
			this->numDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numDivide->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numDivide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numDivide->Location = System::Drawing::Point(299, 23);
			this->numDivide->Margin = System::Windows::Forms::Padding(4);
			this->numDivide->Name = L"numDivide";
			this->numDivide->Size = System::Drawing::Size(80, 74);
			this->numDivide->TabIndex = 15;
			this->numDivide->Text = L"/";
			this->numDivide->UseVisualStyleBackColor = false;
			this->numDivide->Click += gcnew System::EventHandler(this, &NumPanel::numDivide_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num9->FlatAppearance->BorderSize = 0;
			this->num9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num9->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->ForeColor = System::Drawing::Color::White;
			this->num9->Location = System::Drawing::Point(211, 23);
			this->num9->Margin = System::Windows::Forms::Padding(4);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(80, 74);
			this->num9->TabIndex = 14;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &NumPanel::num9_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num8->FlatAppearance->BorderSize = 0;
			this->num8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num8->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->ForeColor = System::Drawing::Color::White;
			this->num8->Location = System::Drawing::Point(123, 23);
			this->num8->Margin = System::Windows::Forms::Padding(4);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(80, 74);
			this->num8->TabIndex = 13;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &NumPanel::num8_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num7->FlatAppearance->BorderSize = 0;
			this->num7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num7->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->ForeColor = System::Drawing::Color::White;
			this->num7->Location = System::Drawing::Point(35, 23);
			this->num7->Margin = System::Windows::Forms::Padding(4);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(80, 74);
			this->num7->TabIndex = 12;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &NumPanel::num7_Click);
			// 
			// numBack
			// 
			this->numBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numBack->FlatAppearance->BorderSize = 0;
			this->numBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numBack->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numBack->Location = System::Drawing::Point(387, 23);
			this->numBack->Margin = System::Windows::Forms::Padding(4);
			this->numBack->Name = L"numBack";
			this->numBack->Size = System::Drawing::Size(80, 74);
			this->numBack->TabIndex = 16;
			this->numBack->Text = L"<-";
			this->numBack->UseVisualStyleBackColor = false;
			this->numBack->Click += gcnew System::EventHandler(this, &NumPanel::numBack_Click);
			// 
			// numClear
			// 
			this->numClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numClear->FlatAppearance->BorderSize = 0;
			this->numClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numClear->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numClear->ForeColor = System::Drawing::Color::White;
			this->numClear->Location = System::Drawing::Point(387, 267);
			this->numClear->Margin = System::Windows::Forms::Padding(4);
			this->numClear->Name = L"numClear";
			this->numClear->Size = System::Drawing::Size(80, 74);
			this->numClear->TabIndex = 17;
			this->numClear->Text = L"C";
			this->numClear->UseVisualStyleBackColor = false;
			this->numClear->Click += gcnew System::EventHandler(this, &NumPanel::numClear_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button1->Location = System::Drawing::Point(387, 105);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 74);
			this->button1->TabIndex = 18;
			this->button1->Text = L"(";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &NumPanel::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Ebrima", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button2->Location = System::Drawing::Point(387, 186);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 74);
			this->button2->TabIndex = 19;
			this->button2->Text = L")";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &NumPanel::button2_Click);
			// 
			// NumPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numClear);
			this->Controls->Add(this->numBack);
			this->Controls->Add(this->numDivide);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->numMulti);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->numMinus);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->numPlus);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->numDot);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"NumPanel";
			this->Size = System::Drawing::Size(511, 382);
			this->Load += gcnew System::EventHandler(this, &NumPanel::NumPanel_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		public: String^ total= gcnew String("");
		public: String^ cal = gcnew String("");
	public: String^ SendTotal() {
		return total;
	}
	public: String^ Sendcal() {
		return cal;
	}
	
	public: event EventHandler^ ValueChanged;

	private: System::Void num0_Click(System::Object^ sender, System::EventArgs^ e) {
		total += num0->Text;
		cal += "0";
		
		ValueChanged(this, EventArgs::Empty);
		
	}

	private: System::Void num1_Click(System::Object^ sender, System::EventArgs^ e) {
		total += "1";
		cal += "1";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num2_Click(System::Object^ sender, System::EventArgs^ e) {
		total += "2";
		cal += "2";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num3_Click(System::Object^ sender, System::EventArgs^ e) {
		total += "3";
		cal += "3";
		ValueChanged(this, EventArgs::Empty);
	}

	private: System::Void numDot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (total!="") {
			total += numDot->Text;
			cal += ".";
		}
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num4_Click(System::Object^ sender, System::EventArgs^ e) {
		total += num4->Text;
		cal += "4";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num5_Click(System::Object^ sender, System::EventArgs^ e) {
		total += num5->Text;
		cal += "5";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num6_Click(System::Object^ sender, System::EventArgs^ e) {
		total += num6->Text;
		cal += "6";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num7_Click(System::Object^ sender, System::EventArgs^ e) {
		total += num7->Text;
		cal += "7";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num8_Click(System::Object^ sender, System::EventArgs^ e) {
		total += num8->Text;
		cal += "8";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void num9_Click(System::Object^ sender, System::EventArgs^ e) {
		total += num9->Text;
		cal += "9";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void numPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (total!="") {
			total += numPlus->Text;
			cal += "+";
		}
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void numMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		total += numMinus->Text;
		cal += "-";
		
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void numMulti_Click(System::Object^ sender, System::EventArgs^ e) {
		if (total != "") {
			total += numMulti->Text;
			cal += "*";
		}
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void numDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		if (total != "") {
			total += numDivide->Text;
			cal += "/";
		}
		
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void numBack_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = total->Length;
		if (total != "") {
			index--;
			total = total->Remove(index);
			cal = cal->Remove(index);
		}
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void numClear_Click(System::Object^ sender, System::EventArgs^ e) {
		total = "";
		cal = "";
		ValueChanged(this, EventArgs::Empty);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		total += "(";
		cal += "(";
		ValueChanged(this, EventArgs::Empty);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		total += ")";
		cal += ")";
		ValueChanged(this, EventArgs::Empty);
	}
private: System::Void NumPanel_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
