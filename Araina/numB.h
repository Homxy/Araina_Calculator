#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Araina {

	/// <summary>
	/// Summary for numB
	/// </summary>
	public ref class numB : public System::Windows::Forms::UserControl
	{
	public:
		numB(void)
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
		~numB()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ numdot;
	private: System::Windows::Forms::Button^ num0;
	private: System::Windows::Forms::Button^ numequal;
	protected:



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ numminus;

	private: System::Windows::Forms::Button^ num3;

	private: System::Windows::Forms::Button^ num2;

	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ nummulti;


	private: System::Windows::Forms::Button^ num6;

	private: System::Windows::Forms::Button^ num5;

	private: System::Windows::Forms::Button^ num4;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ num9;
	private: System::Windows::Forms::Button^ num8;


	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ numback;
	private: System::Windows::Forms::Button^ numclear;

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
			this->numdot = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->numequal = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numminus = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->nummulti = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->numback = (gcnew System::Windows::Forms::Button());
			this->numclear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// numdot
			// 
			this->numdot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->numdot->FlatAppearance->BorderSize = 0;
			this->numdot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numdot->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numdot->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->numdot->Location = System::Drawing::Point(28, 210);
			this->numdot->Name = L"numdot";
			this->numdot->Size = System::Drawing::Size(60, 60);
			this->numdot->TabIndex = 0;
			this->numdot->Text = L".";
			this->numdot->UseVisualStyleBackColor = false;
			this->numdot->Click += gcnew System::EventHandler(this, &numB::button1_Click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num0->FlatAppearance->BorderSize = 0;
			this->num0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num0->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num0->Location = System::Drawing::Point(94, 210);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(60, 60);
			this->num0->TabIndex = 1;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			// 
			// numequal
			// 
			this->numequal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numequal->FlatAppearance->BorderSize = 0;
			this->numequal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numequal->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numequal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numequal->Location = System::Drawing::Point(160, 210);
			this->numequal->Name = L"numequal";
			this->numequal->Size = System::Drawing::Size(60, 60);
			this->numequal->TabIndex = 2;
			this->numequal->Text = L"=";
			this->numequal->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button4->Location = System::Drawing::Point(226, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 3;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// numminus
			// 
			this->numminus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numminus->FlatAppearance->BorderSize = 0;
			this->numminus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numminus->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numminus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numminus->Location = System::Drawing::Point(226, 144);
			this->numminus->Name = L"numminus";
			this->numminus->Size = System::Drawing::Size(60, 60);
			this->numminus->TabIndex = 7;
			this->numminus->Text = L"-";
			this->numminus->UseVisualStyleBackColor = false;
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num3->DialogResult = System::Windows::Forms::DialogResult::No;
			this->num3->FlatAppearance->BorderSize = 0;
			this->num3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num3->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num3->Location = System::Drawing::Point(160, 144);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(60, 60);
			this->num3->TabIndex = 6;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num2->FlatAppearance->BorderSize = 0;
			this->num2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num2->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num2->Location = System::Drawing::Point(94, 144);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(60, 60);
			this->num2->TabIndex = 5;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num1->FlatAppearance->BorderSize = 0;
			this->num1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num1->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num1->Location = System::Drawing::Point(28, 144);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(60, 60);
			this->num1->TabIndex = 4;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			// 
			// nummulti
			// 
			this->nummulti->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->nummulti->FlatAppearance->BorderSize = 0;
			this->nummulti->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nummulti->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nummulti->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->nummulti->Location = System::Drawing::Point(226, 78);
			this->nummulti->Name = L"nummulti";
			this->nummulti->Size = System::Drawing::Size(60, 60);
			this->nummulti->TabIndex = 11;
			this->nummulti->Text = L"×";
			this->nummulti->UseVisualStyleBackColor = false;
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num6->FlatAppearance->BorderSize = 0;
			this->num6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num6->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num6->Location = System::Drawing::Point(160, 78);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(60, 60);
			this->num6->TabIndex = 10;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num5->FlatAppearance->BorderSize = 0;
			this->num5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num5->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num5->Location = System::Drawing::Point(94, 78);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(60, 60);
			this->num5->TabIndex = 9;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num4->FlatAppearance->BorderSize = 0;
			this->num4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num4->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num4->Location = System::Drawing::Point(28, 78);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(60, 60);
			this->num4->TabIndex = 8;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button13->Location = System::Drawing::Point(226, 12);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 60);
			this->button13->TabIndex = 15;
			this->button13->Text = L"÷";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num9->FlatAppearance->BorderSize = 0;
			this->num9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num9->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num9->Location = System::Drawing::Point(160, 12);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(60, 60);
			this->num9->TabIndex = 14;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num8->FlatAppearance->BorderSize = 0;
			this->num8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num8->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num8->Location = System::Drawing::Point(94, 12);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(60, 60);
			this->num8->TabIndex = 13;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->num7->FlatAppearance->BorderSize = 0;
			this->num7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->num7->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->num7->Location = System::Drawing::Point(28, 12);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(60, 60);
			this->num7->TabIndex = 12;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			// 
			// numback
			// 
			this->numback->AutoEllipsis = true;
			this->numback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->numback->FlatAppearance->BorderSize = 0;
			this->numback->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numback->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numback->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numback->Location = System::Drawing::Point(292, 12);
			this->numback->Name = L"numback";
			this->numback->Size = System::Drawing::Size(60, 60);
			this->numback->TabIndex = 16;
			this->numback->Text = L"<-";
			this->numback->UseVisualStyleBackColor = false;
			// 
			// numclear
			// 
			this->numclear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->numclear->FlatAppearance->BorderSize = 0;
			this->numclear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->numclear->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numclear->ForeColor = System::Drawing::Color::White;
			this->numclear->Location = System::Drawing::Point(292, 78);
			this->numclear->Name = L"numclear";
			this->numclear->Size = System::Drawing::Size(60, 192);
			this->numclear->TabIndex = 17;
			this->numclear->Text = L"C";
			this->numclear->UseVisualStyleBackColor = false;
			// 
			// numB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->Controls->Add(this->numclear);
			this->Controls->Add(this->numback);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->nummulti);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->numminus);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->numequal);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->numdot);
			this->Name = L"numB";
			this->Size = System::Drawing::Size(385, 285);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
