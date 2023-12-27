#pragma once
#include "lib.h"
#include <iostream>
#define _CRT_SECURITYCRITICAL_ATTRIBUTE
namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//поточний файл
		char* curentFile;
		std::vector<Mark>* marks;
		std::vector<Exam>* exams;
		std::vector<Applicant>* applicants;
		std::vector<Teacher>* teachers;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	public:
		std::vector<Faculty>* facultys;

		MyForm(void)
		{
			InitializeComponent();
			curentFile = ".txt";
			marks = new std::vector<Mark>;
			exams = new std::vector<Exam>;
			applicants = new std::vector<Applicant>;
			teachers = new std::vector<Teacher>;
			facultys = new std::vector<Faculty>;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete curentFile;
			delete marks;
			delete exams;
			delete applicants;
			delete teachers;
			delete facultys;
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;

	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox14;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox21;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TabPage^ tabPage6;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(373, 310);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->numericUpDown5);
			this->tabPage1->Controls->Add(this->numericUpDown4);
			this->tabPage1->Controls->Add(this->numericUpDown3);
			this->tabPage1->Controls->Add(this->numericUpDown2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(472, 347);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Mark";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(135, 77);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(100, 20);
			this->numericUpDown5->TabIndex = 29;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(135, 27);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(100, 20);
			this->numericUpDown4->TabIndex = 28;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 34, 0, 0, 0 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(11, 77);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(100, 20);
			this->numericUpDown3->TabIndex = 27;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(6, 27);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(100, 20);
			this->numericUpDown2->TabIndex = 26;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 68);
			this->button1->TabIndex = 8;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(135, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"year";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"month";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(140, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"day";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"subjectID";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->numericUpDown8);
			this->tabPage2->Controls->Add(this->numericUpDown7);
			this->tabPage2->Controls->Add(this->numericUpDown6);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(472, 347);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Exam";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(137, 32);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(100, 20);
			this->numericUpDown8->TabIndex = 28;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(10, 80);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(100, 20);
			this->numericUpDown7->TabIndex = 27;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(10, 32);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(100, 20);
			this->numericUpDown6->TabIndex = 26;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 28, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(243, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 68);
			this->button2->TabIndex = 17;
			this->button2->Text = L"SAVE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"year";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(137, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"month";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"day";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->checkBox2);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->textBox7);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(472, 347);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Applicant";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(136, 133);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(59, 17);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->Text = L"gender";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 111);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"phone number";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(9, 131);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(137, 60);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"email";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(136, 80);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 19;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(243, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 117);
			this->button3->TabIndex = 17;
			this->button3->Text = L"SAVE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"first name";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(10, 32);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(137, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"last name";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(136, 32);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"father name";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(9, 80);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 9;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->numericUpDown9);
			this->tabPage4->Controls->Add(this->checkBox1);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->textBox13);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->textBox14);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->textBox15);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->textBox16);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->textBox17);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(472, 284);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Teacher";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(136, 132);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(100, 20);
			this->numericUpDown9->TabIndex = 26;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(13, 167);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 17);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"gender";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(137, 111);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 13);
			this->label18->TabIndex = 24;
			this->label18->Text = L"subjectID";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(10, 111);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(75, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"phone number";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(9, 131);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(137, 60);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"email";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(136, 80);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(242, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 119);
			this->button4->TabIndex = 17;
			this->button4->Text = L"SAVE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(11, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(52, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"first name";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(10, 32);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 15;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(137, 12);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(52, 13);
			this->label16->TabIndex = 14;
			this->label16->Text = L"last name";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(136, 32);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 13;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(7, 60);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 13);
			this->label17->TabIndex = 12;
			this->label17->Text = L"father name";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(9, 80);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 9;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->numericUpDown1);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label20);
			this->tabPage5->Controls->Add(this->textBox20);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->textBox21);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->textBox22);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->textBox23);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->textBox24);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(365, 284);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Faculty";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(136, 132);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(100, 20);
			this->numericUpDown1->TabIndex = 25;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1980, 0, 0, 0 });
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(137, 111);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 13);
			this->label19->TabIndex = 24;
			this->label19->Text = L"foundation year";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(10, 111);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 13);
			this->label20->TabIndex = 22;
			this->label20->Text = L"dean father name";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(9, 131);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 21;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(137, 60);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(79, 13);
			this->label21->TabIndex = 20;
			this->label21->Text = L"dean last name";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(136, 80);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 19;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(242, 32);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 119);
			this->button5->TabIndex = 17;
			this->button5->Text = L"SAVE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(11, 12);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(33, 13);
			this->label22->TabIndex = 16;
			this->label22->Text = L"name";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(10, 32);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 15;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(137, 12);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(31, 13);
			this->label23->TabIndex = 14;
			this->label23->Text = L"code";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(136, 32);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 13;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(7, 60);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(79, 13);
			this->label24->TabIndex = 12;
			this->label24->Text = L"dean first name";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(9, 80);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 9;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->richTextBox1);
			this->tabPage6->Controls->Add(this->button6);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(365, 284);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Read from file";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(9, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(308, 226);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 238);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 31);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Read from file";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 314);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"OOP LR8";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Mark m = Mark(Decimal::ToInt32(this->numericUpDown2->Value), Decimal::ToInt32(this->numericUpDown4->Value), Decimal::ToInt32(this->numericUpDown3->Value), Decimal::ToInt32(this->numericUpDown5->Value));

		size_t originalLength = std::strlen(curentFile);
		size_t newLength = std::strlen("1") + originalLength + 1; // 1 for the null terminator

		// Allocate memory for the new string
		char* newString = new char[newLength];

		// Copy the prefix
		std::strcpy(newString, "1");

		// Copy the original string after the prefix
		std::strcpy(newString + std::strlen("1"), curentFile);
		curentFile = newString;

		m.toFile(curentFile);

		Mark m1 = Mark();
		m1.fromFile(curentFile);

		marks->push_back(m1);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Text = "";

		for (auto it = marks->begin(); it != marks->end(); ++it) {
			this->richTextBox1->Text += "Mark\n";
			this->richTextBox1->Text += "ID " + it->getsubjectID() + "\n";
			this->richTextBox1->Text += "day" + it->getday() + "\n";
			this->richTextBox1->Text += "month " + it->getmonth() + "\n";
			this->richTextBox1->Text += "year " + it->getyear() + "\n";
			this->richTextBox1->Text += "\n";
		}

		for (auto it = exams->begin(); it != exams->end(); ++it) {
			this->richTextBox1->Text += "Exam\n";
			this->richTextBox1->Text += "day" + it->getMathematics().getday() + "\n";
			this->richTextBox1->Text += "month " + it->getMathematics().getmonth() + "\n";
			this->richTextBox1->Text += "year " + it->getMathematics().getyear() + "\n";
			this->richTextBox1->Text += "\n";
		}

		for (auto it = applicants->begin(); it != applicants->end(); ++it) {
			this->richTextBox1->Text += "Applicant\n";
			this->richTextBox1->Text += "first name " + gcnew String(it->getFirstName()) + "\n";
			this->richTextBox1->Text += "last name " + gcnew String(it->getLastName()) + "\n";
			this->richTextBox1->Text += "father name " + gcnew String(it->getFatherName()) + "\n";
			if(it->getGender())
				this->richTextBox1->Text += "Man \n";
			else
				this->richTextBox1->Text += "Woman \n";
			this->richTextBox1->Text += "email " + gcnew String(it->email) + "\n";
			this->richTextBox1->Text += "phone number " + gcnew String(it->phone_number) + "\n";
			this->richTextBox1->Text += "\n";
		}

		for (auto it = teachers->begin(); it != teachers->end(); ++it) {
			this->richTextBox1->Text += "Teacher\n";
			this->richTextBox1->Text += "first name " + gcnew String(it->getFirstName()) + "\n";
			this->richTextBox1->Text += "last name " + gcnew String(it->getLastName()) + "\n";
			this->richTextBox1->Text += "father name " + gcnew String(it->getFatherName()) + "\n";
			if (it->getGender())
				this->richTextBox1->Text += "Man \n";
			else
				this->richTextBox1->Text += "Woman \n";
			this->richTextBox1->Text += "email " + gcnew String(it->email) + "\n";
			this->richTextBox1->Text += "phone number " + gcnew String(it->phone_number) + "\n";
			this->richTextBox1->Text += "ID " + it->subjectID + "\n";
			this->richTextBox1->Text += "\n";
		}

		for (auto it = facultys->begin(); it != facultys->end(); ++it) {
			this->richTextBox1->Text += "Faculty\n";
			this->richTextBox1->Text += "name " + gcnew String(it->getName()) + "\n";
			this->richTextBox1->Text += "code " + gcnew String(it->getCode()) + "\n";
			this->richTextBox1->Text += "dean first name " + gcnew String(it->dean_first_name) + "\n";
			this->richTextBox1->Text += "dean last name " + gcnew String(it->dean_last_name) + "\n";
			this->richTextBox1->Text += "dean father name " + gcnew String(it->dean_father_name) + "\n";
			this->richTextBox1->Text += "foundation year " + it->getFoundationYear() + "\n";
			this->richTextBox1->Text += "\n";
		}

		this->richTextBox1->Refresh();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Exam m = Exam(Decimal::ToInt32(this->numericUpDown6->Value), Decimal::ToInt32(this->numericUpDown8->Value), Decimal::ToInt32(this->numericUpDown7->Value));

		size_t originalLength = std::strlen(curentFile);
		size_t newLength = std::strlen("1") + originalLength + 1; // 1 for the null terminator

		// Allocate memory for the new string
		char* newString = new char[newLength];

		// Copy the prefix
		std::strcpy(newString, "1");

		// Copy the original string after the prefix
		std::strcpy(newString + std::strlen("1"), curentFile);
		curentFile = newString;

		m.toFile(curentFile);

		Exam m1 = Exam();
		m1.fromFile(curentFile);

		exams->push_back(m1);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		IntPtr p = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox7->Text);
		char* fn = static_cast<char*>(p.ToPointer());
		IntPtr p1 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox9->Text);
		char* ln = static_cast<char*>(p1.ToPointer());
		IntPtr p2 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox10->Text);
		char* dn = static_cast<char*>(p2.ToPointer());
		IntPtr p3 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox11->Text);
		char* em = static_cast<char*>(p3.ToPointer());
		IntPtr p4 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox12->Text);
		char* ph = static_cast<char*>(p4.ToPointer());

		Applicant m = Applicant(fn,ln,dn,this->checkBox2->Checked,em,ph);

		System::Runtime::InteropServices::Marshal::FreeHGlobal(p);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p1);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p2);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p3);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p4);

		size_t originalLength = std::strlen(curentFile);
		size_t newLength = std::strlen("1") + originalLength + 1; // 1 for the null terminator

		// Allocate memory for the new string
		char* newString = new char[newLength];

		// Copy the prefix
		std::strcpy(newString, "1");

		// Copy the original string after the prefix
		std::strcpy(newString + std::strlen("1"), curentFile);
		curentFile = newString;

		m.toFile(curentFile);

		Applicant m1 = Applicant();
		m1.fromFile(curentFile);

		applicants->push_back(m1);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		IntPtr p = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox15->Text);
		char* fn = static_cast<char*>(p.ToPointer());
		IntPtr p1 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox16->Text);
		char* ln = static_cast<char*>(p1.ToPointer());
		IntPtr p2 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox17->Text);
		char* dn = static_cast<char*>(p2.ToPointer());
		IntPtr p3 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox14->Text);
		char* em = static_cast<char*>(p3.ToPointer());
		IntPtr p4 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox13->Text);
		char* ph = static_cast<char*>(p4.ToPointer());

		Teacher m = Teacher(fn, ln, dn, this->checkBox1->Checked, em, ph, Decimal::ToInt32(this->numericUpDown9->Value));

		System::Runtime::InteropServices::Marshal::FreeHGlobal(p);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p1);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p2);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p3);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p4);

		size_t originalLength = std::strlen(curentFile);
		size_t newLength = std::strlen("1") + originalLength + 1; // 1 for the null terminator

		// Allocate memory for the new string
		char* newString = new char[newLength];

		// Copy the prefix
		std::strcpy(newString, "1");

		// Copy the original string after the prefix
		std::strcpy(newString + std::strlen("1"), curentFile);
		curentFile = newString;

		m.toFile(curentFile);

		Teacher m1 = Teacher();
		m1.fromFile(curentFile);

		teachers->push_back(m1);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		IntPtr p = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox22->Text);
		char* n = static_cast<char*>(p.ToPointer());
		IntPtr p1 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox23->Text);
		char* c = static_cast<char*>(p1.ToPointer());
		IntPtr p2 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox24->Text);
		char* dfn = static_cast<char*>(p2.ToPointer());
		IntPtr p3 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox21->Text);
		char* dln = static_cast<char*>(p3.ToPointer());
		IntPtr p4 = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBox20->Text);
		char* ddn = static_cast<char*>(p4.ToPointer());

		Faculty m = Faculty(n, c, dfn, dln, ddn, Decimal::ToInt32(this->numericUpDown1->Value));

		System::Runtime::InteropServices::Marshal::FreeHGlobal(p);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p1);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p2);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p3);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(p4);

		size_t originalLength = std::strlen(curentFile);
		size_t newLength = std::strlen("1") + originalLength + 1; // 1 for the null terminator

		// Allocate memory for the new string
		char* newString = new char[newLength];

		// Copy the prefix
		std::strcpy(newString, "1");

		// Copy the original string after the prefix
		std::strcpy(newString + std::strlen("1"), curentFile);
		curentFile = newString;

		m.toFile(curentFile);

		facultys->push_back(m);
	}
};
}
