#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ClassLibrary1 {

	/// <summary>
	/// Summary for AlphabetPanel
	/// </summary>
	public ref class AlphabetPanel : public System::Windows::Forms::UserControl
	{
	public:
		AlphabetPanel(void)
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
		~AlphabetPanel()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ text_Q;
    private: System::Windows::Forms::Button^ text_W;
    private: System::Windows::Forms::Button^ text_E;
    private: System::Windows::Forms::Button^ text_Y;

    protected:




    private: System::Windows::Forms::Button^ text_T;

    private: System::Windows::Forms::Button^ text_R;
    private: System::Windows::Forms::Button^ text_O;


    private: System::Windows::Forms::Button^ text_I;

    private: System::Windows::Forms::Button^ text_U;
    private: System::Windows::Forms::Button^ text_P;
    private: System::Windows::Forms::Button^ text_L;



    private: System::Windows::Forms::Button^ text_K;

    private: System::Windows::Forms::Button^ text_J;

    private: System::Windows::Forms::Button^ text_H;

    private: System::Windows::Forms::Button^ text_G;

    private: System::Windows::Forms::Button^ text_F;

    private: System::Windows::Forms::Button^ text_D;

    private: System::Windows::Forms::Button^ text_S;

    private: System::Windows::Forms::Button^ text_A;
    private: System::Windows::Forms::Button^ text_M;


    private: System::Windows::Forms::Button^ text_N;

    private: System::Windows::Forms::Button^ text_B;

    private: System::Windows::Forms::Button^ text_V;

    private: System::Windows::Forms::Button^ text_C;

    private: System::Windows::Forms::Button^ text_X;

    private: System::Windows::Forms::Button^ text_Z;

    private: System::Windows::Forms::Button^ text_Space;

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
            this->text_Q = (gcnew System::Windows::Forms::Button());
            this->text_W = (gcnew System::Windows::Forms::Button());
            this->text_E = (gcnew System::Windows::Forms::Button());
            this->text_Y = (gcnew System::Windows::Forms::Button());
            this->text_T = (gcnew System::Windows::Forms::Button());
            this->text_R = (gcnew System::Windows::Forms::Button());
            this->text_O = (gcnew System::Windows::Forms::Button());
            this->text_I = (gcnew System::Windows::Forms::Button());
            this->text_U = (gcnew System::Windows::Forms::Button());
            this->text_P = (gcnew System::Windows::Forms::Button());
            this->text_L = (gcnew System::Windows::Forms::Button());
            this->text_K = (gcnew System::Windows::Forms::Button());
            this->text_J = (gcnew System::Windows::Forms::Button());
            this->text_H = (gcnew System::Windows::Forms::Button());
            this->text_G = (gcnew System::Windows::Forms::Button());
            this->text_F = (gcnew System::Windows::Forms::Button());
            this->text_D = (gcnew System::Windows::Forms::Button());
            this->text_S = (gcnew System::Windows::Forms::Button());
            this->text_A = (gcnew System::Windows::Forms::Button());
            this->text_M = (gcnew System::Windows::Forms::Button());
            this->text_N = (gcnew System::Windows::Forms::Button());
            this->text_B = (gcnew System::Windows::Forms::Button());
            this->text_V = (gcnew System::Windows::Forms::Button());
            this->text_C = (gcnew System::Windows::Forms::Button());
            this->text_X = (gcnew System::Windows::Forms::Button());
            this->text_Z = (gcnew System::Windows::Forms::Button());
            this->text_Space = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // text_Q
            // 
            this->text_Q->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_Q->FlatAppearance->BorderSize = 0;
            this->text_Q->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_Q->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_Q->ForeColor = System::Drawing::Color::White;
            this->text_Q->Location = System::Drawing::Point(15, 64);
            this->text_Q->Name = L"text_Q";
            this->text_Q->Size = System::Drawing::Size(30, 40);
            this->text_Q->TabIndex = 0;
            this->text_Q->Text = L"q";
            this->text_Q->UseVisualStyleBackColor = false;
            // 
            // text_W
            // 
            this->text_W->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_W->FlatAppearance->BorderSize = 0;
            this->text_W->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_W->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_W->ForeColor = System::Drawing::Color::White;
            this->text_W->Location = System::Drawing::Point(51, 64);
            this->text_W->Name = L"text_W";
            this->text_W->Size = System::Drawing::Size(30, 40);
            this->text_W->TabIndex = 1;
            this->text_W->Text = L"w";
            this->text_W->UseVisualStyleBackColor = false;
            // 
            // text_E
            // 
            this->text_E->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_E->FlatAppearance->BorderSize = 0;
            this->text_E->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_E->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_E->ForeColor = System::Drawing::Color::White;
            this->text_E->Location = System::Drawing::Point(87, 64);
            this->text_E->Name = L"text_E";
            this->text_E->Size = System::Drawing::Size(30, 40);
            this->text_E->TabIndex = 2;
            this->text_E->Text = L"e";
            this->text_E->UseVisualStyleBackColor = false;
            // 
            // text_Y
            // 
            this->text_Y->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_Y->FlatAppearance->BorderSize = 0;
            this->text_Y->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_Y->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_Y->ForeColor = System::Drawing::Color::White;
            this->text_Y->Location = System::Drawing::Point(195, 64);
            this->text_Y->Name = L"text_Y";
            this->text_Y->Size = System::Drawing::Size(30, 40);
            this->text_Y->TabIndex = 5;
            this->text_Y->Text = L"y";
            this->text_Y->UseVisualStyleBackColor = false;
            // 
            // text_T
            // 
            this->text_T->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_T->FlatAppearance->BorderSize = 0;
            this->text_T->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_T->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_T->ForeColor = System::Drawing::Color::White;
            this->text_T->Location = System::Drawing::Point(159, 64);
            this->text_T->Name = L"text_T";
            this->text_T->Size = System::Drawing::Size(30, 40);
            this->text_T->TabIndex = 4;
            this->text_T->Text = L"t";
            this->text_T->UseVisualStyleBackColor = false;
            // 
            // text_R
            // 
            this->text_R->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_R->FlatAppearance->BorderSize = 0;
            this->text_R->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_R->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_R->ForeColor = System::Drawing::Color::White;
            this->text_R->Location = System::Drawing::Point(123, 64);
            this->text_R->Name = L"text_R";
            this->text_R->Size = System::Drawing::Size(30, 40);
            this->text_R->TabIndex = 3;
            this->text_R->Text = L"r";
            this->text_R->UseVisualStyleBackColor = false;
            // 
            // text_O
            // 
            this->text_O->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_O->FlatAppearance->BorderSize = 0;
            this->text_O->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_O->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_O->ForeColor = System::Drawing::Color::White;
            this->text_O->Location = System::Drawing::Point(303, 64);
            this->text_O->Name = L"text_O";
            this->text_O->Size = System::Drawing::Size(30, 40);
            this->text_O->TabIndex = 8;
            this->text_O->Text = L"o";
            this->text_O->UseVisualStyleBackColor = false;
            // 
            // text_I
            // 
            this->text_I->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_I->FlatAppearance->BorderSize = 0;
            this->text_I->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_I->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_I->ForeColor = System::Drawing::Color::White;
            this->text_I->Location = System::Drawing::Point(267, 64);
            this->text_I->Name = L"text_I";
            this->text_I->Size = System::Drawing::Size(30, 40);
            this->text_I->TabIndex = 7;
            this->text_I->Text = L"i";
            this->text_I->UseVisualStyleBackColor = false;
            // 
            // text_U
            // 
            this->text_U->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_U->FlatAppearance->BorderSize = 0;
            this->text_U->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_U->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_U->ForeColor = System::Drawing::Color::White;
            this->text_U->Location = System::Drawing::Point(231, 64);
            this->text_U->Name = L"text_U";
            this->text_U->Size = System::Drawing::Size(30, 40);
            this->text_U->TabIndex = 6;
            this->text_U->Text = L"u";
            this->text_U->UseVisualStyleBackColor = false;
            // 
            // text_P
            // 
            this->text_P->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_P->FlatAppearance->BorderSize = 0;
            this->text_P->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_P->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_P->ForeColor = System::Drawing::Color::White;
            this->text_P->Location = System::Drawing::Point(339, 64);
            this->text_P->Name = L"text_P";
            this->text_P->Size = System::Drawing::Size(30, 40);
            this->text_P->TabIndex = 9;
            this->text_P->Text = L"p";
            this->text_P->UseVisualStyleBackColor = false;
            // 
            // text_L
            // 
            this->text_L->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_L->FlatAppearance->BorderSize = 0;
            this->text_L->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_L->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_L->ForeColor = System::Drawing::Color::White;
            this->text_L->Location = System::Drawing::Point(321, 110);
            this->text_L->Name = L"text_L";
            this->text_L->Size = System::Drawing::Size(30, 40);
            this->text_L->TabIndex = 18;
            this->text_L->Text = L"l";
            this->text_L->UseVisualStyleBackColor = false;
            // 
            // text_K
            // 
            this->text_K->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_K->FlatAppearance->BorderSize = 0;
            this->text_K->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_K->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_K->ForeColor = System::Drawing::Color::White;
            this->text_K->Location = System::Drawing::Point(285, 110);
            this->text_K->Name = L"text_K";
            this->text_K->Size = System::Drawing::Size(30, 40);
            this->text_K->TabIndex = 17;
            this->text_K->Text = L"k";
            this->text_K->UseVisualStyleBackColor = false;
            // 
            // text_J
            // 
            this->text_J->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_J->FlatAppearance->BorderSize = 0;
            this->text_J->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_J->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_J->ForeColor = System::Drawing::Color::White;
            this->text_J->Location = System::Drawing::Point(249, 110);
            this->text_J->Name = L"text_J";
            this->text_J->Size = System::Drawing::Size(30, 40);
            this->text_J->TabIndex = 16;
            this->text_J->Text = L"j";
            this->text_J->UseVisualStyleBackColor = false;
            // 
            // text_H
            // 
            this->text_H->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_H->FlatAppearance->BorderSize = 0;
            this->text_H->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_H->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_H->ForeColor = System::Drawing::Color::White;
            this->text_H->Location = System::Drawing::Point(213, 110);
            this->text_H->Name = L"text_H";
            this->text_H->Size = System::Drawing::Size(30, 40);
            this->text_H->TabIndex = 15;
            this->text_H->Text = L"h";
            this->text_H->UseVisualStyleBackColor = false;
            // 
            // text_G
            // 
            this->text_G->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_G->FlatAppearance->BorderSize = 0;
            this->text_G->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_G->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_G->ForeColor = System::Drawing::Color::White;
            this->text_G->Location = System::Drawing::Point(177, 110);
            this->text_G->Name = L"text_G";
            this->text_G->Size = System::Drawing::Size(30, 40);
            this->text_G->TabIndex = 14;
            this->text_G->Text = L"g";
            this->text_G->UseVisualStyleBackColor = false;
            // 
            // text_F
            // 
            this->text_F->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_F->FlatAppearance->BorderSize = 0;
            this->text_F->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_F->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_F->ForeColor = System::Drawing::Color::White;
            this->text_F->Location = System::Drawing::Point(141, 110);
            this->text_F->Name = L"text_F";
            this->text_F->Size = System::Drawing::Size(30, 40);
            this->text_F->TabIndex = 13;
            this->text_F->Text = L"f";
            this->text_F->UseVisualStyleBackColor = false;
            // 
            // text_D
            // 
            this->text_D->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_D->FlatAppearance->BorderSize = 0;
            this->text_D->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_D->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_D->ForeColor = System::Drawing::Color::White;
            this->text_D->Location = System::Drawing::Point(105, 110);
            this->text_D->Name = L"text_D";
            this->text_D->Size = System::Drawing::Size(30, 40);
            this->text_D->TabIndex = 12;
            this->text_D->Text = L"d";
            this->text_D->UseVisualStyleBackColor = false;
            // 
            // text_S
            // 
            this->text_S->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_S->FlatAppearance->BorderSize = 0;
            this->text_S->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_S->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_S->ForeColor = System::Drawing::Color::White;
            this->text_S->Location = System::Drawing::Point(69, 110);
            this->text_S->Name = L"text_S";
            this->text_S->Size = System::Drawing::Size(30, 40);
            this->text_S->TabIndex = 11;
            this->text_S->Text = L"s";
            this->text_S->UseVisualStyleBackColor = false;
            // 
            // text_A
            // 
            this->text_A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_A->FlatAppearance->BorderSize = 0;
            this->text_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_A->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_A->ForeColor = System::Drawing::Color::White;
            this->text_A->Location = System::Drawing::Point(33, 110);
            this->text_A->Name = L"text_A";
            this->text_A->Size = System::Drawing::Size(30, 40);
            this->text_A->TabIndex = 10;
            this->text_A->Text = L"a";
            this->text_A->UseVisualStyleBackColor = false;
            // 
            // text_M
            // 
            this->text_M->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_M->FlatAppearance->BorderSize = 0;
            this->text_M->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_M->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_M->ForeColor = System::Drawing::Color::White;
            this->text_M->Location = System::Drawing::Point(285, 156);
            this->text_M->Name = L"text_M";
            this->text_M->Size = System::Drawing::Size(30, 40);
            this->text_M->TabIndex = 25;
            this->text_M->Text = L"m";
            this->text_M->UseVisualStyleBackColor = false;
            // 
            // text_N
            // 
            this->text_N->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_N->FlatAppearance->BorderSize = 0;
            this->text_N->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_N->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_N->ForeColor = System::Drawing::Color::White;
            this->text_N->Location = System::Drawing::Point(249, 156);
            this->text_N->Name = L"text_N";
            this->text_N->Size = System::Drawing::Size(30, 40);
            this->text_N->TabIndex = 24;
            this->text_N->Text = L"n";
            this->text_N->UseVisualStyleBackColor = false;
            // 
            // text_B
            // 
            this->text_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_B->FlatAppearance->BorderSize = 0;
            this->text_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_B->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_B->ForeColor = System::Drawing::Color::White;
            this->text_B->Location = System::Drawing::Point(213, 156);
            this->text_B->Name = L"text_B";
            this->text_B->Size = System::Drawing::Size(30, 40);
            this->text_B->TabIndex = 23;
            this->text_B->Text = L"b";
            this->text_B->UseVisualStyleBackColor = false;
            // 
            // text_V
            // 
            this->text_V->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_V->FlatAppearance->BorderSize = 0;
            this->text_V->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_V->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_V->ForeColor = System::Drawing::Color::White;
            this->text_V->Location = System::Drawing::Point(177, 156);
            this->text_V->Name = L"text_V";
            this->text_V->Size = System::Drawing::Size(30, 40);
            this->text_V->TabIndex = 22;
            this->text_V->Text = L"v";
            this->text_V->UseVisualStyleBackColor = false;
            // 
            // text_C
            // 
            this->text_C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_C->FlatAppearance->BorderSize = 0;
            this->text_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_C->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_C->ForeColor = System::Drawing::Color::White;
            this->text_C->Location = System::Drawing::Point(141, 156);
            this->text_C->Name = L"text_C";
            this->text_C->Size = System::Drawing::Size(30, 40);
            this->text_C->TabIndex = 21;
            this->text_C->Text = L"c";
            this->text_C->UseVisualStyleBackColor = false;
            // 
            // text_X
            // 
            this->text_X->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_X->FlatAppearance->BorderSize = 0;
            this->text_X->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_X->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_X->ForeColor = System::Drawing::Color::White;
            this->text_X->Location = System::Drawing::Point(105, 156);
            this->text_X->Name = L"text_X";
            this->text_X->Size = System::Drawing::Size(30, 40);
            this->text_X->TabIndex = 20;
            this->text_X->Text = L"x";
            this->text_X->UseVisualStyleBackColor = false;
            // 
            // text_Z
            // 
            this->text_Z->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_Z->FlatAppearance->BorderSize = 0;
            this->text_Z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_Z->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_Z->ForeColor = System::Drawing::Color::White;
            this->text_Z->Location = System::Drawing::Point(69, 156);
            this->text_Z->Name = L"text_Z";
            this->text_Z->Size = System::Drawing::Size(30, 40);
            this->text_Z->TabIndex = 19;
            this->text_Z->Text = L"z";
            this->text_Z->UseVisualStyleBackColor = false;
            // 
            // text_Space
            // 
            this->text_Space->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->text_Space->FlatAppearance->BorderSize = 0;
            this->text_Space->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->text_Space->Font = (gcnew System::Drawing::Font(L"PrintAble4U", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->text_Space->ForeColor = System::Drawing::Color::White;
            this->text_Space->Location = System::Drawing::Point(87, 202);
            this->text_Space->Name = L"text_Space";
            this->text_Space->Size = System::Drawing::Size(210, 40);
            this->text_Space->TabIndex = 26;
            this->text_Space->UseVisualStyleBackColor = false;
            // 
            // AlphabetPanel
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
                static_cast<System::Int32>(static_cast<System::Byte>(28)));
            this->Controls->Add(this->text_Space);
            this->Controls->Add(this->text_M);
            this->Controls->Add(this->text_N);
            this->Controls->Add(this->text_B);
            this->Controls->Add(this->text_V);
            this->Controls->Add(this->text_C);
            this->Controls->Add(this->text_X);
            this->Controls->Add(this->text_Z);
            this->Controls->Add(this->text_L);
            this->Controls->Add(this->text_K);
            this->Controls->Add(this->text_J);
            this->Controls->Add(this->text_H);
            this->Controls->Add(this->text_G);
            this->Controls->Add(this->text_F);
            this->Controls->Add(this->text_D);
            this->Controls->Add(this->text_S);
            this->Controls->Add(this->text_A);
            this->Controls->Add(this->text_P);
            this->Controls->Add(this->text_O);
            this->Controls->Add(this->text_I);
            this->Controls->Add(this->text_U);
            this->Controls->Add(this->text_Y);
            this->Controls->Add(this->text_T);
            this->Controls->Add(this->text_R);
            this->Controls->Add(this->text_E);
            this->Controls->Add(this->text_W);
            this->Controls->Add(this->text_Q);
            this->Name = L"AlphabetPanel";
            this->Size = System::Drawing::Size(383, 310);
            this->Load += gcnew System::EventHandler(this, &AlphabetPanel::AlphabetPanel_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void AlphabetPanel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
