#pragma once

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
	private: ClassLibrary1::NumPanel^ numPanel1;




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
			this->Select_Fx = (gcnew System::Windows::Forms::Button());
			this->Select_Alpha = (gcnew System::Windows::Forms::Button());
			this->numPanel1 = (gcnew ClassLibrary1::NumPanel());
			this->panel1->SuspendLayout();
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
			this->Select_Num->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select_Num->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Select_Num->Location = System::Drawing::Point(164, 1);
			this->Select_Num->Name = L"Select_Num";
			this->Select_Num->Size = System::Drawing::Size(60, 50);
			this->Select_Num->TabIndex = 1;
			this->Select_Num->Text = L"1 2\r\n+ -\r\n";
			this->Select_Num->UseVisualStyleBackColor = false;
			this->Select_Num->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->panel1->Controls->Add(this->Select_Fx);
			this->panel1->Controls->Add(this->Select_Alpha);
			this->panel1->Controls->Add(this->Select_Num);
			this->panel1->Location = System::Drawing::Point(0, 104);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 50);
			this->panel1->TabIndex = 2;
			// 
			// Select_Fx
			// 
			this->Select_Fx->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Select_Fx->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->Select_Fx->FlatAppearance->BorderSize = 0;
			this->Select_Fx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Select_Fx->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select_Fx->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Select_Fx->Location = System::Drawing::Point(67, 1);
			this->Select_Fx->Name = L"Select_Fx";
			this->Select_Fx->Size = System::Drawing::Size(60, 50);
			this->Select_Fx->TabIndex = 3;
			this->Select_Fx->Text = L"f(x)\r\nπ";
			this->Select_Fx->UseVisualStyleBackColor = false;
			// 
			// Select_Alpha
			// 
			this->Select_Alpha->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Select_Alpha->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->Select_Alpha->FlatAppearance->BorderSize = 0;
			this->Select_Alpha->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Select_Alpha->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select_Alpha->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->Select_Alpha->Location = System::Drawing::Point(257, 1);
			this->Select_Alpha->Name = L"Select_Alpha";
			this->Select_Alpha->Size = System::Drawing::Size(60, 50);
			this->Select_Alpha->TabIndex = 2;
			this->Select_Alpha->Text = L"A B\r\nX Y\r\n";
			this->Select_Alpha->UseVisualStyleBackColor = false;
			// 
			// numPanel1
			// 
			this->numPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->numPanel1->Location = System::Drawing::Point(-1, 160);
			this->numPanel1->Name = L"numPanel1";
			this->numPanel1->Size = System::Drawing::Size(383, 310);
			this->numPanel1->TabIndex = 3;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(384, 461);
			this->Controls->Add(this->numPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
