#pragma once

namespace OPP12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::GroupBox^ groupBox4;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::ComboBox^ comboBox13;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::ComboBox^ comboBox14;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;



























	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(755, 535);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox8);
			this->tabPage1->Controls->Add(this->groupBox7);
			this->tabPage1->Controls->Add(this->groupBox6);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(747, 506);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Положение";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(747, 506);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Обтекание текстом";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(747, 506);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Размер";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(636, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сброс";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Location = System::Drawing::Point(7, 397);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(735, 59);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Исходный размер";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(484, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 17);
			this->label9->TabIndex = 14;
			this->label9->Text = L"29,77 см";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(381, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 17);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Ширина:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(138, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"27,26 см";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Высота:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox2);
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Controls->Add(this->numericUpDown7);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->numericUpDown6);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(6, 270);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(735, 120);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Масштаб";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(9, 89);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(252, 21);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"относительно исходного размера";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(9, 62);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(173, 21);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"сохранить пропорции";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(488, 29);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(98, 22);
			this->numericUpDown7->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(382, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ширина";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(141, 29);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(98, 22);
			this->numericUpDown6->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Высота";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(6, 204);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(735, 60);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Поворот";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(141, 26);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(98, 22);
			this->numericUpDown5->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Поворот";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->AutoSize = true;
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox2->Location = System::Drawing::Point(6, 105);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(735, 93);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ширина";
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox2->Location = System::Drawing::Point(488, 48);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->Text = L"Страницы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Location = System::Drawing::Point(382, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"относительно";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(141, 50);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(98, 22);
			this->numericUpDown3->TabIndex = 3;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(141, 20);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(98, 22);
			this->numericUpDown4->TabIndex = 2;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Enabled = false;
			this->radioButton3->Location = System::Drawing::Point(6, 49);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(129, 21);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->Text = L"относительная";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton4->Checked = true;
			this->radioButton4->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton4->Location = System::Drawing::Point(6, 21);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(109, 21);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"абсолютная";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(735, 94);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Высота";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter_1);
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox1->Location = System::Drawing::Point(488, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"Страницы";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Location = System::Drawing::Point(382, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"относительно";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(141, 50);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(98, 22);
			this->numericUpDown2->TabIndex = 3;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(141, 20);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(98, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Location = System::Drawing::Point(6, 49);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(129, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"относительная";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton1->Checked = true;
			this->radioButton1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton1->Location = System::Drawing::Point(6, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(109, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"абсолютная";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged_4);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(652, 553);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 36);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(531, 553);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 36);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Ок";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->numericUpDown9);
			this->groupBox6->Controls->Add(this->comboBox8);
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->radioButton8);
			this->groupBox6->Controls->Add(this->numericUpDown8);
			this->groupBox6->Controls->Add(this->comboBox7);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->radioButton7);
			this->groupBox6->Controls->Add(this->comboBox5);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->comboBox6);
			this->groupBox6->Controls->Add(this->radioButton6);
			this->groupBox6->Controls->Add(this->comboBox4);
			this->groupBox6->Controls->Add(this->label10);
			this->groupBox6->Controls->Add(this->comboBox3);
			this->groupBox6->Controls->Add(this->radioButton5);
			this->groupBox6->Location = System::Drawing::Point(6, 6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(735, 148);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"По горизонтали";
			this->groupBox6->Enter += gcnew System::EventHandler(this, &MyForm::groupBox6_Enter);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton5->Enabled = false;
			this->radioButton5->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton5->Location = System::Drawing::Point(6, 21);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(124, 21);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->Text = L"выравнивание";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged_1);
			// 
			// comboBox3
			// 
			this->comboBox3->Enabled = false;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"По левому краю" });
			this->comboBox3->Location = System::Drawing::Point(216, 18);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(169, 24);
			this->comboBox3->TabIndex = 7;
			this->comboBox3->Text = L"По левому краю";
			// 
			// comboBox4
			// 
			this->comboBox4->Enabled = false;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox4->Location = System::Drawing::Point(547, 21);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(164, 24);
			this->comboBox4->TabIndex = 9;
			this->comboBox4->Text = L"Колонны";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->Location = System::Drawing::Point(441, 23);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 17);
			this->label10->TabIndex = 8;
			this->label10->Text = L"относительно";
			// 
			// comboBox5
			// 
			this->comboBox5->Enabled = false;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox5->Location = System::Drawing::Point(547, 50);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(164, 24);
			this->comboBox5->TabIndex = 13;
			this->comboBox5->Text = L"Поля";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Enabled = false;
			this->label11->Location = System::Drawing::Point(441, 53);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 17);
			this->label11->TabIndex = 12;
			this->label11->Text = L"относительно";
			// 
			// comboBox6
			// 
			this->comboBox6->Enabled = false;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"По левому краю" });
			this->comboBox6->Location = System::Drawing::Point(216, 50);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(169, 24);
			this->comboBox6->TabIndex = 11;
			this->comboBox6->Text = L"Внутри";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton6->Enabled = false;
			this->radioButton6->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton6->Location = System::Drawing::Point(6, 51);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(76, 21);
			this->radioButton6->TabIndex = 10;
			this->radioButton6->Text = L"в книге";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->Enabled = false;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox7->Location = System::Drawing::Point(547, 80);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(164, 24);
			this->comboBox7->TabIndex = 17;
			this->comboBox7->Text = L"Колонны";
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Enabled = false;
			this->label12->Location = System::Drawing::Point(441, 83);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 17);
			this->label12->TabIndex = 16;
			this->label12->Text = L"правее";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton7->Checked = true;
			this->radioButton7->Enabled = false;
			this->radioButton7->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton7->Location = System::Drawing::Point(6, 81);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(102, 21);
			this->radioButton7->TabIndex = 14;
			this->radioButton7->Text = L"положение";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Enabled = false;
			this->numericUpDown8->Location = System::Drawing::Point(216, 81);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(169, 22);
			this->numericUpDown8->TabIndex = 18;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown8_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Enabled = false;
			this->numericUpDown9->Location = System::Drawing::Point(216, 110);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(169, 22);
			this->numericUpDown9->TabIndex = 22;
			// 
			// comboBox8
			// 
			this->comboBox8->Enabled = false;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox8->Location = System::Drawing::Point(547, 109);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(164, 24);
			this->comboBox8->TabIndex = 21;
			this->comboBox8->Text = L"Страницы";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Enabled = false;
			this->label13->Location = System::Drawing::Point(441, 112);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 17);
			this->label13->TabIndex = 20;
			this->label13->Text = L"относительно";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton8->Enabled = false;
			this->radioButton8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton8->Location = System::Drawing::Point(6, 110);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(206, 21);
			this->radioButton8->TabIndex = 19;
			this->radioButton8->Text = L"относительное положение";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->numericUpDown10);
			this->groupBox7->Controls->Add(this->comboBox9);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Controls->Add(this->radioButton9);
			this->groupBox7->Controls->Add(this->numericUpDown11);
			this->groupBox7->Controls->Add(this->comboBox10);
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Controls->Add(this->radioButton10);
			this->groupBox7->Controls->Add(this->comboBox13);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->comboBox14);
			this->groupBox7->Controls->Add(this->radioButton12);
			this->groupBox7->Enabled = false;
			this->groupBox7->Location = System::Drawing::Point(6, 160);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(735, 116);
			this->groupBox7->TabIndex = 1;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"По вертикали";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(216, 77);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(169, 22);
			this->numericUpDown10->TabIndex = 22;
			// 
			// comboBox9
			// 
			this->comboBox9->Enabled = false;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox9->Location = System::Drawing::Point(547, 76);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(164, 24);
			this->comboBox9->TabIndex = 21;
			this->comboBox9->Text = L"Страницы";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Enabled = false;
			this->label14->Location = System::Drawing::Point(441, 79);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 17);
			this->label14->TabIndex = 20;
			this->label14->Text = L"относительно";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton9->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton9->Location = System::Drawing::Point(6, 77);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(206, 21);
			this->radioButton9->TabIndex = 19;
			this->radioButton9->Text = L"относительное положение";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_CheckedChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(216, 50);
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(169, 22);
			this->numericUpDown11->TabIndex = 18;
			// 
			// comboBox10
			// 
			this->comboBox10->Enabled = false;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox10->Location = System::Drawing::Point(547, 49);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(164, 24);
			this->comboBox10->TabIndex = 17;
			this->comboBox10->Text = L"Абзаца";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Enabled = false;
			this->label15->Location = System::Drawing::Point(441, 52);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 17);
			this->label15->TabIndex = 16;
			this->label15->Text = L"ниже";
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton10->Checked = true;
			this->radioButton10->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton10->Location = System::Drawing::Point(6, 50);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(102, 21);
			this->radioButton10->TabIndex = 14;
			this->radioButton10->Text = L"положение";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_CheckedChanged);
			// 
			// comboBox13
			// 
			this->comboBox13->Enabled = false;
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Страницы" });
			this->comboBox13->Location = System::Drawing::Point(547, 21);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(164, 24);
			this->comboBox13->TabIndex = 9;
			this->comboBox13->Text = L"Страницы";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Enabled = false;
			this->label17->Location = System::Drawing::Point(441, 23);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 17);
			this->label17->TabIndex = 8;
			this->label17->Text = L"относительно";
			// 
			// comboBox14
			// 
			this->comboBox14->Enabled = false;
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"По левому краю" });
			this->comboBox14->Location = System::Drawing::Point(216, 18);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(169, 24);
			this->comboBox14->TabIndex = 7;
			this->comboBox14->Text = L"По левому краю";
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->CheckAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton12->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->radioButton12->Location = System::Drawing::Point(6, 21);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(124, 21);
			this->radioButton12->TabIndex = 1;
			this->radioButton12->Text = L"выравнивание";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->checkBox6);
			this->groupBox8->Controls->Add(this->checkBox5);
			this->groupBox8->Controls->Add(this->checkBox4);
			this->groupBox8->Controls->Add(this->checkBox3);
			this->groupBox8->Enabled = false;
			this->groupBox8->Location = System::Drawing::Point(6, 282);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(735, 100);
			this->groupBox8->TabIndex = 2;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Параметры";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(6, 21);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(230, 21);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"перемещать вместе с текстом";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(6, 48);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(168, 21);
			this->checkBox4->TabIndex = 1;
			this->checkBox4->Text = L"установить привязку";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(354, 21);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(186, 21);
			this->checkBox5->TabIndex = 2;
			this->checkBox5->Text = L"разрешить перекрытие";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Checked = true;
			this->checkBox6->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox6->Location = System::Drawing::Point(354, 48);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(215, 21);
			this->checkBox6->TabIndex = 3;
			this->checkBox6->Text = L"разметка в ячейке таблицы";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AcceptButton = this->button3;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(800, 598);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Макет";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged_4(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton5_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
