#pragma once
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
#define _CRT_SECURE_NO_WARNINGS

namespace Araina {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for VectorForm
	/// </summary>
	public ref class VectorForm : public System::Windows::Forms::Form
	{
	public:
		VectorForm(void)
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
		~VectorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;




	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->button1->Location = System::Drawing::Point(150, 120);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &VectorForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->button2->Location = System::Drawing::Point(383, 251);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &VectorForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->button3->Location = System::Drawing::Point(383, 295);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &VectorForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(9, 22);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Vector1 :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(9, 76);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Vector2 :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(162, 22);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"I";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(266, 22);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"J";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(372, 22);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"K";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(162, 76);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 24);
			this->label6->TabIndex = 8;
			this->label6->Text = L"I";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(266, 76);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 24);
			this->label7->TabIndex = 9;
			this->label7->Text = L"J";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(373, 76);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 24);
			this->label8->TabIndex = 10;
			this->label8->Text = L"K";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox1->Location = System::Drawing::Point(119, 22);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(32, 26);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox2->Location = System::Drawing::Point(228, 22);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 26);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox3->Location = System::Drawing::Point(336, 22);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 26);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox4->Location = System::Drawing::Point(119, 73);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 26);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox5->Location = System::Drawing::Point(228, 73);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(32, 26);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->textBox6->Location = System::Drawing::Point(336, 73);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(32, 26);
			this->textBox6->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(8, 258);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 24);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Dot Product: ";
			this->label9->Click += gcnew System::EventHandler(this, &VectorForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(8, 297);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Angle Between Vectors:";
			this->label10->Click += gcnew System::EventHandler(this, &VectorForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(8, 170);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(138, 24);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Cross Product: ";
			this->label11->Click += gcnew System::EventHandler(this, &VectorForm::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(8, 210);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(175, 20);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Projection V2 onto V1:  ";
			this->label12->Click += gcnew System::EventHandler(this, &VectorForm::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label13->ForeColor = System::Drawing::SystemColors::Control;
			this->label13->Location = System::Drawing::Point(198, 174);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 18);
			this->label13->TabIndex = 25;
			this->label13->Click += gcnew System::EventHandler(this, &VectorForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label14->ForeColor = System::Drawing::SystemColors::Control;
			this->label14->Location = System::Drawing::Point(198, 213);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 18);
			this->label14->TabIndex = 26;
			this->label14->Click += gcnew System::EventHandler(this, &VectorForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label15->ForeColor = System::Drawing::SystemColors::Control;
			this->label15->Location = System::Drawing::Point(147, 260);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 18);
			this->label15->TabIndex = 27;
			this->label15->Click += gcnew System::EventHandler(this, &VectorForm::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label16->ForeColor = System::Drawing::SystemColors::Control;
			this->label16->Location = System::Drawing::Point(225, 300);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 18);
			this->label16->TabIndex = 28;
			this->label16->Click += gcnew System::EventHandler(this, &VectorForm::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->label17->ForeColor = System::Drawing::SystemColors::Control;
			this->label17->Location = System::Drawing::Point(294, 289);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 25);
			this->label17->TabIndex = 29;
			this->label17->Text = L"°";
			// 
			// VectorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(462, 336);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"VectorForm";
			this->Text = L"VectorForm";
			this->Load += gcnew System::EventHandler(this, &VectorForm::VectorForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	label13->Text = "";
	label14->Text = "";
	label15->Text = "";
	label16->Text = "";
	label17->Hide();
}

public: float dotProduct(vector<float>& x, vector<float>& y) {
	float sum = 0;
	for (unsigned int i = 0; i < x.size(); i++) sum += (x.at(i) * y.at(i));
	return sum;
}

public: string crossProduct(vector<float>& vec1, vector<float>& vec2) {
	int dim = vec1.size(); // get dimension of vectors
	string resultcross = "0";
	// check if both vectors have same dimension and it is either 2 or 3
	if (dim != vec2.size() || (dim != 2 && dim != 3)) {
		return resultcross;
	}

	// calculate cross product
	vector<float> cross(dim);
	
	if (dim == 2) { // 2D cross product
		cross[0] = 0;
		cross[1] = vec1[0] * vec2[1] - vec1[1] * vec2[0];
		resultcross = std::to_string(cross[0]) + ", " + std::to_string(cross[1]);
	}
	else { // 3D cross product
		cross[0] = vec1[1] * vec2[2] - vec1[2] * vec2[1];
		cross[1] = vec1[2] * vec2[0] - vec1[0] * vec2[2];
		cross[2] = vec1[0] * vec2[1] - vec1[1] * vec2[0];
		resultcross = std::to_string(cross[0]) + ", " + std::to_string(cross[1]) + ", " + std::to_string(cross[2]);
	}


	return resultcross;
}

public: string projectionvector(vector<float> v1, vector<float> v2) {

	/*proj v->u =   (u dot v) / sizeof v^2 * vector v */
	string projecresult = "";
	int n = v1.size(); // dimension of vectors

	// Compute the dot product of v1 and v2
	float dot = dotProduct(v1,v2);

	// Compute the sizeof v^2
	float magsquared = 0;
	for (int i = 0; i < n; i++) {
	   magsquared += (v2.at(i) * v2.at(i));
	}
	// Compute the projection vector
	vector<float> projecvector(n);
	for (int i = 0; i < n; i++) {
	   projecvector[i] = (dot / magsquared) * v2[i];
	}
	if (n == 2) { projecresult = std::to_string(projecvector[0]) + ", " + std::to_string(projecvector[1]); }
	else { projecresult = std::to_string(projecvector[0]) + ", " + std::to_string(projecvector[1]) + ", " + std::to_string(projecvector[2]); }
	return projecresult;
}

public: float angleBetweenvectors(vector<float> vec1, vector<float> vec2) {

	/* angle v->u =   (u dot v) = sizeof u * sizeof v * costheta */

	int dim = vec1.size();


	// calculate angle
	float dot = dotProduct(vec1, vec2);

	float magnitude1 = 0;
	for (int i = 0; i < dim; i++) {
		magnitude1 += vec1[i] * vec1[i];
	}
	magnitude1 = sqrt(magnitude1);

	float magnitude2 = 0;
	for (int j = 0; j < dim; j++) {
		magnitude2 += vec2[j] * vec2[j];
	}
	magnitude2 = sqrt(magnitude2);

	float cos_theta = dot / (magnitude1 * magnitude2);
	float theta = acos(cos_theta);
	theta *= 180 / (3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679);
	return theta;
}

public: bool isNumber(System::String^ text) {
		   double result;
		   return System::Double::TryParse(text, result);
}

public: void setzero() {
	if (!isNumber(textBox1->Text)) textBox1->Text = "0";
	if (!isNumber(textBox2->Text)) textBox2->Text = "0";
	if (!isNumber(textBox3->Text)) textBox3->Text = "0";
	if (!isNumber(textBox4->Text)) textBox4->Text = "0";
	if (!isNumber(textBox5->Text)) textBox5->Text = "0";
	if (!isNumber(textBox6->Text)) textBox6->Text = "0";
}
public: void checkvalid() {
	int count = 0;
	if (isNumber(textBox1->Text)) count++; 
	if (isNumber(textBox2->Text)) count++; 
	if (isNumber(textBox3->Text)) count++; 
	if (isNumber(textBox4->Text)) count++; 
	if (isNumber(textBox5->Text)) count++; 
	if (isNumber(textBox6->Text)) count++; 
	if (count < 4) {
		MessageBox::Show("Too less information!"); 
		
	}
	else if (count == 4 || count == 6) {
		if (isNumber(textBox1->Text) && isNumber(textBox2->Text) && isNumber(textBox3->Text)
			&& isNumber(textBox4->Text) && isNumber(textBox5->Text) && isNumber(textBox6->Text)) {
			calvec();
		}
		else if (isNumber(textBox1->Text) && isNumber(textBox2->Text) 
			&& isNumber(textBox4->Text) && isNumber(textBox5->Text) ) {
			calvec();
		}
		else {
			setzero();
			MessageBox::Show("Invalid Format!  "
				"If that Vector = 0 please Input 0!");
		}
		
	}
	else if (count == 5) {
		MessageBox::Show("2D cant calculate with 3D Vector!");
		setzero();
	}
	else {
		MessageBox::Show("Input needs to be a number!");
	}
}
public: void calvec() {
	vector<float> inputValues1;
	vector<float> inputValues2;

	inputValues1.push_back(System::Convert::ToDouble(textBox1->Text));
	inputValues1.push_back(System::Convert::ToDouble(textBox2->Text));
	if (isNumber(textBox3->Text)) {
		inputValues1.push_back(System::Convert::ToDouble(textBox3->Text));
	}
	

	inputValues2.push_back(System::Convert::ToDouble(textBox4->Text));
	inputValues2.push_back(System::Convert::ToDouble(textBox5->Text));
	if (isNumber(textBox6->Text)) {
		inputValues2.push_back(System::Convert::ToDouble(textBox6->Text));
	}

	string crossresult = crossProduct(inputValues1, inputValues2);
	string projectionresult = projectionvector(inputValues2, inputValues1);
	float dotresult = dotProduct(inputValues1, inputValues2);
	float angleresult = angleBetweenvectors(inputValues1, inputValues2);


	label13->Text = gcnew System::String(crossresult.c_str());			//cross
	label14->Text = gcnew System::String(projectionresult.c_str());		//proj
	label15->Text = System::Convert::ToString(dotresult);				//dot
	label16->Text = System::Convert::ToString(angleresult);				//angle
	label17->Show();													//degree symbol

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	checkvalid();
}
private: System::Void VectorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	label17->Hide();
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
