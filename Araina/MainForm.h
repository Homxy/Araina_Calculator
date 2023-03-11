#pragma once
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
namespace Araina {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Select_Num;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Select_Fx;
	private: System::Windows::Forms::Button^ Select_Alpha;
	private: System::Windows::Forms::Panel^ panel2;

	private: ClassLibrary1::AlphabetPanel^ alphabetPanel1;


	private: System::Windows::Forms::Label^ label1;
	private: ClassLibrary1::AlphabetPanel^ alphabetPanel2;
	private: ClassLibrary1::FxPanel^ fxPanel1;
	private: ClassLibrary1::NumPanel^ numPanel1;
	private: System::Windows::Forms::Button^ Button_Calculate;
	private: System::Windows::Forms::Label^ label2;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Select_Num = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Button_Calculate = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->alphabetPanel1 = (gcnew ClassLibrary1::AlphabetPanel());
			this->Select_Fx = (gcnew System::Windows::Forms::Button());
			this->Select_Alpha = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->alphabetPanel2 = (gcnew ClassLibrary1::AlphabetPanel());
			this->fxPanel1 = (gcnew ClassLibrary1::FxPanel());
			this->numPanel1 = (gcnew ClassLibrary1::NumPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(0, 1);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(383, 106);
			this->textBox1->TabIndex = 0;
			// 
			// Select_Num
			// 
			this->Select_Num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Select_Num->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->Select_Num->FlatAppearance->BorderSize = 0;
			this->Select_Num->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Select_Num->Font = (gcnew System::Drawing::Font(L"Ebrima", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select_Num->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Select_Num->Location = System::Drawing::Point(95, 0);
			this->Select_Num->Name = L"Select_Num";
			this->Select_Num->Size = System::Drawing::Size(60, 50);
			this->Select_Num->TabIndex = 1;
			this->Select_Num->Text = L"1 2\r\n+ -\r\n";
			this->Select_Num->UseVisualStyleBackColor = false;
			this->Select_Num->Click += gcnew System::EventHandler(this, &MainForm::Select_Num_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->panel1->Controls->Add(this->Button_Calculate);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->Select_Fx);
			this->panel1->Controls->Add(this->Select_Alpha);
			this->panel1->Controls->Add(this->Select_Num);
			this->panel1->Location = System::Drawing::Point(0, 104);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 50);
			this->panel1->TabIndex = 2;
			// 
			// Button_Calculate
			// 
			this->Button_Calculate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Button_Calculate->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->Button_Calculate->FlatAppearance->BorderSize = 0;
			this->Button_Calculate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_Calculate->Font = (gcnew System::Drawing::Font(L"Ebrima", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Calculate->ForeColor = System::Drawing::Color::White;
			this->Button_Calculate->Location = System::Drawing::Point(227, 0);
			this->Button_Calculate->Name = L"Button_Calculate";
			this->Button_Calculate->Size = System::Drawing::Size(60, 50);
			this->Button_Calculate->TabIndex = 4;
			this->Button_Calculate->Text = L"Cal\r\n";
			this->Button_Calculate->UseVisualStyleBackColor = false;
			this->Button_Calculate->Click += gcnew System::EventHandler(this, &MainForm::Button_Calculate_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->alphabetPanel1);
			this->panel2->Location = System::Drawing::Point(0, 47);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(383, 310);
			this->panel2->TabIndex = 3;
			// 
			// alphabetPanel1
			// 
			this->alphabetPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->alphabetPanel1->Location = System::Drawing::Point(0, 0);
			this->alphabetPanel1->Name = L"alphabetPanel1";
			this->alphabetPanel1->Size = System::Drawing::Size(383, 310);
			this->alphabetPanel1->TabIndex = 0;
			// 
			// Select_Fx
			// 
			this->Select_Fx->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Select_Fx->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->Select_Fx->FlatAppearance->BorderSize = 0;
			this->Select_Fx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Select_Fx->Font = (gcnew System::Drawing::Font(L"Ebrima", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select_Fx->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Select_Fx->Location = System::Drawing::Point(29, 0);
			this->Select_Fx->Name = L"Select_Fx";
			this->Select_Fx->Size = System::Drawing::Size(60, 50);
			this->Select_Fx->TabIndex = 3;
			this->Select_Fx->Text = L"f(x)\r\nπ";
			this->Select_Fx->UseVisualStyleBackColor = false;
			this->Select_Fx->Click += gcnew System::EventHandler(this, &MainForm::Select_Fx_Click);
			// 
			// Select_Alpha
			// 
			this->Select_Alpha->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Select_Alpha->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->Select_Alpha->FlatAppearance->BorderSize = 0;
			this->Select_Alpha->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Select_Alpha->Font = (gcnew System::Drawing::Font(L"Ebrima", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select_Alpha->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Select_Alpha->Location = System::Drawing::Point(161, 0);
			this->Select_Alpha->Name = L"Select_Alpha";
			this->Select_Alpha->Size = System::Drawing::Size(60, 50);
			this->Select_Alpha->TabIndex = 2;
			this->Select_Alpha->Text = L"A B\r\nX Y\r\n\r\n";
			this->Select_Alpha->UseVisualStyleBackColor = false;
			this->Select_Alpha->Click += gcnew System::EventHandler(this, &MainForm::Select_Alpha_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ebrima", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 30);
			this->label1->TabIndex = 5;
			// 
			// alphabetPanel2
			// 
			this->alphabetPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->alphabetPanel2->Location = System::Drawing::Point(0, 151);
			this->alphabetPanel2->Name = L"alphabetPanel2";
			this->alphabetPanel2->Size = System::Drawing::Size(383, 310);
			this->alphabetPanel2->TabIndex = 6;
			// 
			// fxPanel1
			// 
			this->fxPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->fxPanel1->Location = System::Drawing::Point(0, 151);
			this->fxPanel1->Name = L"fxPanel1";
			this->fxPanel1->Size = System::Drawing::Size(383, 310);
			this->fxPanel1->TabIndex = 7;
			// 
			// numPanel1
			// 
			this->numPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->numPanel1->Font = (gcnew System::Drawing::Font(L"Ebrima", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numPanel1->Location = System::Drawing::Point(0, 151);
			this->numPanel1->Name = L"numPanel1";
			this->numPanel1->Size = System::Drawing::Size(383, 310);
			this->numPanel1->TabIndex = 8;
			this->numPanel1->ValueChanged += gcnew System::EventHandler(this, &MainForm::numPanel1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ebrima", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(308, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 30);
			this->label2->TabIndex = 9;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(384, 461);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numPanel1);
			this->Controls->Add(this->fxPanel1);
			this->Controls->Add(this->alphabetPanel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	public: void eval(String^ textin) {
		double result = 0;
		int j = 0;
		char op = '+';
		String^ ftext = "";
		double num = 0;
		std::vector<double> n;
		std::vector<char> c;
		for (int i = 0; i < textin->Length;) {
			if (textin[i] >= '.' && textin[i] <= '9' && textin[i] != '/') {
				ftext = "";
				while (i < textin->Length && textin[i] >= '.' && textin[i] <= '9' && textin[i] != '/') {
					ftext += textin[i];
					i++;
				}
				num = Convert::ToDouble(ftext);
				n.push_back(num);
			}
			else if (textin[i] == '+' || textin[i] == '-' || textin[i] == '*' || textin[i] == '/') {
				op = textin[i];
				c.push_back(op);
				i++;
			}
		}

		for (int k = c.size(); k > 0; k--) {
			char op = c[k - 1];
			if (op == '*') {
				double num1 = n[k - 1];
				double num2 = n[k];
				n.erase(n.begin() + k);
				n.erase(n.begin() + k - 1);
				c.erase(c.begin() + k - 1);
				n.push_back(num1 * num2);

			}
			else if (op == '/') {
				double num1 = n[k - 1];
				double num2 = n[k];
				n.erase(n.begin() + k);
				n.erase(n.begin() + k - 1);
				c.erase(c.begin() + k - 1);
				n.push_back(num1 / num2);
			}
		}

		result = n[0];
		for (int j = 1; j < n.size(); j++) {
			if (c[j-1] == '+') {
				result += n[j];
			}
			else if (c[j-1] == '-') {
				result -= n[j];
			}
			
		}
		
			
		label2->Text = Convert::ToString(result);
	}




	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		numPanel1->BringToFront();
	}
	
	private: System::Void Select_Num_Click(System::Object^ sender, System::EventArgs^ e) {
		numPanel1->BringToFront();
	}
	private: System::Void Select_Alpha_Click(System::Object^ sender, System::EventArgs^ e) {
		alphabetPanel2->BringToFront();
	}
	private: System::Void Select_Fx_Click(System::Object^ sender, System::EventArgs^ e) {
		fxPanel1->BringToFront();
	}
		 
	private: System::Void numPanel1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = numPanel1->SendTotal();
	}

	private: System::Void Button_Calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		eval(numPanel1->Sendcal());

	}
};
}
