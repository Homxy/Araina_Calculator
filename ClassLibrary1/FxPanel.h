#pragma once
#include "NumPanel.h"
#include "../Araina/VectorForm.h"
#include "../Araina/PowerForm.h"
#include<cmath>
#include<iostream>
#include <cmath>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Diagnostics;
using namespace System::Xml;


namespace ClassLibrary1 {

	/// <summary>
	/// Summary for FxPanel
	/// </summary>
	public ref class FxPanel : public System::Windows::Forms::UserControl
	{
	public:
		FxPanel(void)
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
		~FxPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;










	private: System::Windows::Forms::Button^ button16;




	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button1;





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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(47, 17);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 89);
			this->button4->TabIndex = 3;
			this->button4->Text = L"POWERFX";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FxPanel::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(293, 17);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(175, 89);
			this->button5->TabIndex = 4;
			this->button5->Text = L"SQRT";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FxPanel::button5_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(293, 145);
			this->button16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(175, 79);
			this->button16->TabIndex = 19;
			this->button16->Text = L"VECTOR";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &FxPanel::button16_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(47, 145);
			this->button19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(181, 79);
			this->button19->TabIndex = 16;
			this->button19->Text = L"TRIGONE";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &FxPanel::button19_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ebrima", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(173, 252);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 79);
			this->button1->TabIndex = 20;
			this->button1->Text = L"MATRIX";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FxPanel::button1_Click_1);
			// 
			// FxPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FxPanel";
			this->Size = System::Drawing::Size(511, 382);
			this->Load += gcnew System::EventHandler(this, &FxPanel::FxPanel_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String^ total = gcnew String("");
		public: String^ cal = gcnew String("");
	public: String^ SendTotala() {
		return total;
	}
	public: String^ SendFxcal() {
		return cal;
	}

	private: event EventHandler^ ValueChanged;
	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	total += "^";
	cal += "pow(";
	ValueChanged(this, EventArgs::Empty);
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	Araina::VectorForm^ VecForm = gcnew Araina::VectorForm();
	VecForm->ShowDialog();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void FxPanel_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Araina::PowerForm^ PowForm = gcnew Araina::PowerForm();
	PowForm->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ FilePath = "D:/Workkk/Com-pro_project/Cal/Araina/sqrt.exe";
	Process::Start(FilePath);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FilePath = "D:/Workkk/Com-pro_project/Cal/Araina/trigon.exe";
		Process::Start(FilePath);
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ FilePath = "D:/Workkk/Com-pro_project/Cal/Araina/matrix.exe";
	Process::Start(FilePath);
}
};
}
