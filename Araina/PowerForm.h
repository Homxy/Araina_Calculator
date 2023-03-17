#pragma once

namespace Araina {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PowerForm
	/// </summary>
	public ref class PowerForm : public System::Windows::Forms::Form
	{
	public:
		PowerForm(void)
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
		~PowerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(80, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(165, 28);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(266, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calculator";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PowerForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(266, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PowerForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(10, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Result X^X      = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(10, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Result X^X^X  =";
			this->label2->Click += gcnew System::EventHandler(this, &PowerForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(161, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 24);
			this->label3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(161, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 8;
			// 
			// PowerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(359, 228);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"PowerForm";
			this->Text = L"PowerForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: bool isNumber(System::String^ text) {
	double result;
	return System::Double::TryParse(text, result);
}

private: void settoone() {
		   if (!isNumber(textBox1->Text)) textBox1->Text = "1";
		   if (!isNumber(textBox2->Text)) textBox2->Text = "1";
		   if (!isNumber(textBox3->Text)) textBox3->Text = "1";
}

private: void check() {
	int count = 0;
	if (isNumber(textBox1->Text)) count++;
	if (isNumber(textBox2->Text)) count++;
	if (isNumber(textBox3->Text)) count++;
	if (count < 2) {
		MessageBox::Show("Too less information please Input again!");
	}
	else if (count < 3) {
		textBox3->Text = "1";
	}
	else if (count == 2 || count == 3) {
		if (isNumber(textBox1->Text) && isNumber(textBox2->Text) && isNumber(textBox3->Text)) {
			calpow();
		}else {
			settoone();
			MessageBox::Show("Invalid Format!""If that pow = 1 we'll Input 1!");
		}
}
}

private: void calpow() {
	double Values1;
	double Values2;
	double Values3;

	Values1 = Convert::ToDouble(textBox1->Text);
	Values2 = Convert::ToDouble(textBox2->Text);
	Values3 = Convert::ToDouble(textBox3->Text);
	

	double calpow = pow(Values1, Values2);
	double caltripplepow = tripplepower(Values1, Values2, Values3);

	label3->Text = Convert::ToString(calpow);
	label4->Text = Convert::ToString(caltripplepow);

}

public:	double power(double base, double exponent) {
		   if (exponent == 0) {
			   return 1;
		   }
		   else if (exponent < 0) {
			   double convertexpo = exponent * -1;
			   double result = 1 / (pow(base, convertexpo));
			   return result;
		   }
		   else if (exponent > 0) {
			   double result = pow(base, exponent);
			   return result;
		   }
	   }

public: double tripplepower(double base, double exponent, double upperexponent) {
		   if (exponent == 0 && upperexponent == 0) {
			   MessageBox::Show("cannot find");
		   }
		   else if (exponent == 0 && upperexponent > 0) {
			   return 1;
		   }
		   else if (exponent > 0 && upperexponent == 1) {
			   double result = pow(base, exponent);
			   return result;
		   }
		   else if (exponent < 0 && upperexponent == 1) {
			   double convertexpo = exponent * -1;
			   double resultexpo = 1 / pow(base, convertexpo);
			   return resultexpo;
		   }
		   else if (exponent < 0 && upperexponent == 0) {
			   double result = 1 / base;
			   return result;
		   }
		   else if (exponent == 1 && (upperexponent > 0 || upperexponent < 0)) {
			   return base;
		   }
		   else if (upperexponent == 0 && exponent > 0) {
			   return base;
		   }
		   else if (upperexponent < 0 && exponent == 0) {
			   MessageBox::Show("cannot find");
		   }
		   else if (exponent < 0 && upperexponent < 0) {
			   double convertexpo = exponent * -1;
			   double convertupperexpo = upperexponent * -1;
			   double under = 1 / pow(convertexpo, convertupperexpo);
			   double result = 1 / pow(2, under);
			   return result;
		   }
		   else {
			   double result = pow(base, pow(exponent, upperexponent));
			   return result;
		   }
	   }

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	check();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
}
};
}
