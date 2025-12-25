#include <cstdlib>
#include <ctime>
#include <locale.h>
#pragma once

namespace MemoryGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;


	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripNewGame;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolStripOptions;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripScore;




	private: System::Windows::Forms::ToolStripTextBox^ toolStripMoves;
	private: System::Windows::Forms::ToolStripMenuItem^ OptionsDifficulty;
	private: System::Windows::Forms::ToolStripMenuItem^ OptionsSound;

	private: System::Windows::Forms::ToolStripMenuItem^ DifficultyEasy;
	private: System::Windows::Forms::ToolStripMenuItem^ DifficultyNormal;
	private: System::Windows::Forms::ToolStripMenuItem^ DifficultyHard;
	private: System::Windows::Forms::ToolStripMenuItem^ DifficultyHarder;
	private: System::Windows::Forms::ToolStripMenuItem^ SoundLoudness;








	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;




	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox16;





	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::PictureBox^ pictureBox17;

	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;




	


	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripNewGame = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripOptions = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->OptionsDifficulty = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DifficultyEasy = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DifficultyNormal = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DifficultyHard = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DifficultyHarder = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OptionsSound = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SoundLoudness = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripScore = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMoves = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->flowLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			this->flowLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripNewGame,
					this->toolStripOptions, this->toolStripScore, this->toolStripMoves, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1264, 30);
			this->toolStrip1->Stretch = true;
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripNewGame
			// 
			this->toolStripNewGame->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripNewGame->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripNewGame->Name = L"toolStripNewGame";
			this->toolStripNewGame->Size = System::Drawing::Size(68, 27);
			this->toolStripNewGame->Text = L"New game";
			this->toolStripNewGame->Click += gcnew System::EventHandler(this, &Form1::toolStripNewGame_Click);
			// 
			// toolStripOptions
			// 
			this->toolStripOptions->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripOptions->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->OptionsDifficulty,
					this->OptionsSound
			});
			this->toolStripOptions->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripOptions->Name = L"toolStripOptions";
			this->toolStripOptions->Size = System::Drawing::Size(62, 27);
			this->toolStripOptions->Text = L"Settings";
			// 
			// OptionsDifficulty
			// 
			this->OptionsDifficulty->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->DifficultyEasy,
					this->DifficultyNormal, this->DifficultyHard, this->DifficultyHarder
			});
			this->OptionsDifficulty->Name = L"OptionsDifficulty";
			this->OptionsDifficulty->Size = System::Drawing::Size(180, 22);
			this->OptionsDifficulty->Text = L"Сложность";
			// 
			// DifficultyEasy
			// 
			this->DifficultyEasy->Name = L"DifficultyEasy";
			this->DifficultyEasy->Size = System::Drawing::Size(180, 22);
			this->DifficultyEasy->Text = L"Легко";
			this->DifficultyEasy->Click += gcnew System::EventHandler(this, &Form1::DifficultyEasy_Click);
			// 
			// DifficultyNormal
			// 
			this->DifficultyNormal->Name = L"DifficultyNormal";
			this->DifficultyNormal->Size = System::Drawing::Size(180, 22);
			this->DifficultyNormal->Text = L"Нормально";
			this->DifficultyNormal->Click += gcnew System::EventHandler(this, &Form1::DifficultyNormal_Click);
			// 
			// DifficultyHard
			// 
			this->DifficultyHard->Name = L"DifficultyHard";
			this->DifficultyHard->Size = System::Drawing::Size(180, 22);
			this->DifficultyHard->Text = L"Сложно";
			this->DifficultyHard->Click += gcnew System::EventHandler(this, &Form1::DifficultyHard_Click);
			// 
			// DifficultyHarder
			// 
			this->DifficultyHarder->Name = L"DifficultyHarder";
			this->DifficultyHarder->Size = System::Drawing::Size(180, 22);
			this->DifficultyHarder->Text = L"Тяжело";
			this->DifficultyHarder->Click += gcnew System::EventHandler(this, &Form1::DifficultyHarder_Click);
			// 
			// OptionsSound
			// 
			this->OptionsSound->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->SoundLoudness });
			this->OptionsSound->Name = L"OptionsSound";
			this->OptionsSound->Size = System::Drawing::Size(180, 22);
			this->OptionsSound->Text = L"Звук";
			// 
			// SoundLoudness
			// 
			this->SoundLoudness->Name = L"SoundLoudness";
			this->SoundLoudness->Size = System::Drawing::Size(180, 22);
			this->SoundLoudness->Text = L"Громкость звука";
			// 
			// toolStripScore
			// 
			this->toolStripScore->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripScore->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripScore->Name = L"toolStripScore";
			this->toolStripScore->ReadOnly = true;
			this->toolStripScore->Size = System::Drawing::Size(100, 30);
			// 
			// toolStripMoves
			// 
			this->toolStripMoves->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripMoves->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripMoves->Name = L"toolStripMoves";
			this->toolStripMoves->ReadOnly = true;
			this->toolStripMoves->Size = System::Drawing::Size(100, 30);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->Controls->Add(this->pictureBox14);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox15);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox23);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox18);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox4);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox7);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox8);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(8, 40);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(2502, 242);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(1095, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 230);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(939, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 230);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(627, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 230);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(627, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 230);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(939, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(150, 230);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(783, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(150, 230);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(783, 3);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(150, 230);
			this->pictureBox7->TabIndex = 12;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(939, 3);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(150, 230);
			this->pictureBox8->TabIndex = 13;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoSize = true;
			this->flowLayoutPanel2->Controls->Add(this->pictureBox16);
			this->flowLayoutPanel2->Controls->Add(this->pictureBox12);
			this->flowLayoutPanel2->Controls->Add(this->pictureBox20);
			this->flowLayoutPanel2->Controls->Add(this->pictureBox21);
			this->flowLayoutPanel2->Controls->Add(this->pictureBox22);
			this->flowLayoutPanel2->Controls->Add(this->pictureBox6);
			this->flowLayoutPanel2->Controls->Add(this->pictureBox5);
			this->flowLayoutPanel2->Controls->Add(this->pictureBox10);
			this->flowLayoutPanel2->Location = System::Drawing::Point(8, 288);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(2502, 242);
			this->flowLayoutPanel2->TabIndex = 14;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(783, 3);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(150, 230);
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Location = System::Drawing::Point(1095, 3);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(150, 230);
			this->pictureBox10->TabIndex = 2;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &Form1::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Location = System::Drawing::Point(315, 3);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(150, 230);
			this->pictureBox11->TabIndex = 3;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &Form1::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->Location = System::Drawing::Point(159, 3);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(150, 230);
			this->pictureBox12->TabIndex = 4;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &Form1::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->Location = System::Drawing::Point(3, 3);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(150, 230);
			this->pictureBox13->TabIndex = 5;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &Form1::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->Location = System::Drawing::Point(3, 3);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(150, 230);
			this->pictureBox14->TabIndex = 12;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &Form1::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->Location = System::Drawing::Point(159, 3);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(150, 230);
			this->pictureBox15->TabIndex = 13;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &Form1::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Location = System::Drawing::Point(3, 3);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(150, 230);
			this->pictureBox16->TabIndex = 14;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &Form1::pictureBox16_Click);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoSize = true;
			this->flowLayoutPanel3->Controls->Add(this->pictureBox13);
			this->flowLayoutPanel3->Controls->Add(this->pictureBox19);
			this->flowLayoutPanel3->Controls->Add(this->pictureBox11);
			this->flowLayoutPanel3->Controls->Add(this->pictureBox17);
			this->flowLayoutPanel3->Controls->Add(this->pictureBox3);
			this->flowLayoutPanel3->Controls->Add(this->pictureBox9);
			this->flowLayoutPanel3->Controls->Add(this->pictureBox2);
			this->flowLayoutPanel3->Controls->Add(this->pictureBox24);
			this->flowLayoutPanel3->Location = System::Drawing::Point(8, 536);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(2502, 242);
			this->flowLayoutPanel3->TabIndex = 15;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Location = System::Drawing::Point(471, 3);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(150, 230);
			this->pictureBox17->TabIndex = 1;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &Form1::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Location = System::Drawing::Point(471, 3);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(150, 230);
			this->pictureBox18->TabIndex = 2;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &Form1::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->Location = System::Drawing::Point(159, 3);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(150, 230);
			this->pictureBox19->TabIndex = 3;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &Form1::pictureBox19_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->Location = System::Drawing::Point(315, 3);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(150, 230);
			this->pictureBox20->TabIndex = 4;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &Form1::pictureBox20_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->Location = System::Drawing::Point(471, 3);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(150, 230);
			this->pictureBox21->TabIndex = 5;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &Form1::pictureBox21_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->Location = System::Drawing::Point(627, 3);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(150, 230);
			this->pictureBox22->TabIndex = 12;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &Form1::pictureBox22_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->Location = System::Drawing::Point(315, 3);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(150, 230);
			this->pictureBox23->TabIndex = 13;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &Form1::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->Location = System::Drawing::Point(1095, 3);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(150, 230);
			this->pictureBox24->TabIndex = 14;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &Form1::pictureBox24_Click);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->AutoSize = true;
			this->flowLayoutPanel4->Controls->Add(this->pictureBox25);
			this->flowLayoutPanel4->Controls->Add(this->pictureBox26);
			this->flowLayoutPanel4->Controls->Add(this->pictureBox27);
			this->flowLayoutPanel4->Controls->Add(this->pictureBox28);
			this->flowLayoutPanel4->Controls->Add(this->pictureBox29);
			this->flowLayoutPanel4->Controls->Add(this->pictureBox30);
			this->flowLayoutPanel4->Controls->Add(this->pictureBox31);
			this->flowLayoutPanel4->Controls->Add(this->pictureBox32);
			this->flowLayoutPanel4->Location = System::Drawing::Point(8, 784);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(1248, 236);
			this->flowLayoutPanel4->TabIndex = 16;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->Location = System::Drawing::Point(3, 3);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(150, 230);
			this->pictureBox25->TabIndex = 1;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &Form1::pictureBox25_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->Location = System::Drawing::Point(159, 3);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(150, 230);
			this->pictureBox26->TabIndex = 2;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &Form1::pictureBox26_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->Location = System::Drawing::Point(315, 3);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(150, 230);
			this->pictureBox27->TabIndex = 3;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &Form1::pictureBox27_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->Location = System::Drawing::Point(471, 3);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(150, 230);
			this->pictureBox28->TabIndex = 4;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &Form1::pictureBox28_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(627, 3);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(150, 230);
			this->pictureBox29->TabIndex = 5;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &Form1::pictureBox29_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(783, 3);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(150, 230);
			this->pictureBox30->TabIndex = 12;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &Form1::pictureBox30_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(939, 3);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(150, 230);
			this->pictureBox31->TabIndex = 13;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &Form1::pictureBox31_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(1095, 3);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(150, 230);
			this->pictureBox32->TabIndex = 14;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &Form1::pictureBox32_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 27);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1264, 1041);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Name = L"Form1";
			this->Text = L"Memory Game";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->flowLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			this->flowLayoutPanel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Вот сюда надо писать функции

	private: void PlaySound(String^ soundFile) {
		SoundPlayer^ player = gcnew SoundPlayer(soundFile);
		player->Play();
	}

	public: System::Void changePicture(int num, System::String^ url) //Тестовая функция 
	{
		switch (num)
		{
		default: break;
		case 1: this->pictureBox1->Load(url); break;
		case 2: this->pictureBox2->Load(url); break;
		case 3: this->pictureBox3->Load(url); break;
		case 4: this->pictureBox4->Load(url); break;
		case 5: this->pictureBox5->Load(url); break;
		case 6: this->pictureBox6->Load(url); break;
		case 7: this->pictureBox7->Load(url); break;
		case 8: this->pictureBox8->Load(url); break;


		case 9: this->pictureBox9->Load(url); break;
		case 10: this->pictureBox10->Load(url); break;
		case 11: this->pictureBox11->Load(url); break;
		case 12: this->pictureBox12->Load(url); break;
		case 13: this->pictureBox13->Load(url); break;
		case 14: this->pictureBox14->Load(url); break;
		case 15: this->pictureBox15->Load(url); break;
		case 16: this->pictureBox16->Load(url); break;



		case 17: this->pictureBox17->Load(url); break;
		case 18: this->pictureBox18->Load(url); break;
		case 19: this->pictureBox19->Load(url); break;
		case 20: this->pictureBox20->Load(url); break;
		case 21: this->pictureBox21->Load(url); break;
		case 22: this->pictureBox22->Load(url); break;
		case 23: this->pictureBox23->Load(url); break;
		case 24: this->pictureBox24->Load(url); break;


		case 25: this->pictureBox25->Load(url); break;
		case 26: this->pictureBox26->Load(url); break;
		case 27: this->pictureBox27->Load(url); break;
		case 28: this->pictureBox28->Load(url); break;
		case 29: this->pictureBox29->Load(url); break;
		case 30: this->pictureBox30->Load(url); break;
		case 31: this->pictureBox31->Load(url); break;
		case 32: this->pictureBox32->Load(url); break;
		}
	}

	public: System::Void hideDeck()
	{
		this->pictureBox1->Load("Resourses/backside1.png");
		this->pictureBox2->Load("Resourses/backside1.png");
		this->pictureBox3->Load("Resourses/backside1.png");
		this->pictureBox4->Load("Resourses/backside1.png");
		this->pictureBox5->Load("Resourses/backside1.png");
		this->pictureBox6->Load("Resourses/backside1.png");
		this->pictureBox7->Load("Resourses/backside1.png");
		this->pictureBox8->Load("Resourses/backside1.png");

		this->pictureBox9->Load("Resourses/backside1.png");
		this->pictureBox10->Load("Resourses/backside1.png");
		this->pictureBox11->Load("Resourses/backside1.png");
		this->pictureBox12->Load("Resourses/backside1.png");
		this->pictureBox13->Load("Resourses/backside1.png");
		this->pictureBox14->Load("Resourses/backside1.png");
		this->pictureBox15->Load("Resourses/backside1.png");
		this->pictureBox16->Load("Resourses/backside1.png");

		this->pictureBox17->Load("Resourses/backside1.png");
		this->pictureBox18->Load("Resourses/backside1.png");
		this->pictureBox19->Load("Resourses/backside1.png");
		this->pictureBox20->Load("Resourses/backside1.png");
		this->pictureBox21->Load("Resourses/backside1.png");
		this->pictureBox22->Load("Resourses/backside1.png");
		this->pictureBox23->Load("Resourses/backside1.png");
		this->pictureBox24->Load("Resourses/backside1.png");

		this->pictureBox25->Load("Resourses/backside1.png");
		this->pictureBox26->Load("Resourses/backside1.png");
		this->pictureBox27->Load("Resourses/backside1.png");
		this->pictureBox28->Load("Resourses/backside1.png");
		this->pictureBox29->Load("Resourses/backside1.png");
		this->pictureBox30->Load("Resourses/backside1.png");
		this->pictureBox31->Load("Resourses/backside1.png");
		this->pictureBox32->Load("Resourses/backside1.png");
	}

	int moves;
	int score;

	public: System::Void newGame() //"Новая игра" (тестовая)
	{
		this->toolStripMoves->Text = "42";
		this->toolStripScore->Text = "0";

		moves = 42;
		score = 0;
		createDeck();
		hideDeck();//Можешь убрать чтобы проверить генерацию
		setDifficulty(4);
	}

	public: System::Void setDifficulty(int num) //"Установить сложность". (тестовая)
	{
		switch (num)
		{
			default: break;
			case 1:
			{
				this->pictureBox1->Visible = true;
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = true;
				this->pictureBox5->Visible = true;
				this->pictureBox6->Visible = true;
				this->pictureBox7->Visible = true;
				this->pictureBox8->Visible = true;

				this->pictureBox9->Visible = false;
				this->pictureBox10->Visible = false;
				this->pictureBox11->Visible = false;
				this->pictureBox12->Visible = false;
				this->pictureBox13->Visible = false;
				this->pictureBox14->Visible = false;
				this->pictureBox15->Visible = false;
				this->pictureBox16->Visible = false;

				this->pictureBox17->Visible = false;
				this->pictureBox18->Visible = false;
				this->pictureBox19->Visible = false;
				this->pictureBox20->Visible = false;
				this->pictureBox21->Visible = false;
				this->pictureBox22->Visible = false;
				this->pictureBox23->Visible = false;
				this->pictureBox24->Visible = false;

				this->pictureBox25->Visible = false;
				this->pictureBox26->Visible = false;
				this->pictureBox27->Visible = false;
				this->pictureBox28->Visible = false;
				this->pictureBox29->Visible = false;
				this->pictureBox30->Visible = false;
				this->pictureBox31->Visible = false;
				this->pictureBox32->Visible = false;
			}
			case 2:
			{
				this->pictureBox1->Visible = true;
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = true;
				this->pictureBox5->Visible = true;
				this->pictureBox6->Visible = true;
				this->pictureBox7->Visible = true;
				this->pictureBox8->Visible = true;

				this->pictureBox9->Visible = true;
				this->pictureBox10->Visible = true;
				this->pictureBox11->Visible = true;
				this->pictureBox12->Visible = true;
				this->pictureBox13->Visible = true;
				this->pictureBox14->Visible = true;
				this->pictureBox15->Visible = true;
				this->pictureBox16->Visible = true;

				this->pictureBox17->Visible = false;
				this->pictureBox18->Visible = false;
				this->pictureBox19->Visible = false;
				this->pictureBox20->Visible = false;
				this->pictureBox21->Visible = false;
				this->pictureBox22->Visible = false;
				this->pictureBox23->Visible = false;
				this->pictureBox24->Visible = false;

				this->pictureBox25->Visible = false;
				this->pictureBox26->Visible = false;
				this->pictureBox27->Visible = false;
				this->pictureBox28->Visible = false;
				this->pictureBox29->Visible = false;
				this->pictureBox30->Visible = false;
				this->pictureBox31->Visible = false;
				this->pictureBox32->Visible = false;
			}
			case 3:
			{
				this->pictureBox1->Visible = true;
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = true;
				this->pictureBox5->Visible = true;
				this->pictureBox6->Visible = true;
				this->pictureBox7->Visible = true;
				this->pictureBox8->Visible = true;

				this->pictureBox9->Visible = true;
				this->pictureBox10->Visible = true;
				this->pictureBox11->Visible = true;
				this->pictureBox12->Visible = true;
				this->pictureBox13->Visible = true;
				this->pictureBox14->Visible = true;
				this->pictureBox15->Visible = true;
				this->pictureBox16->Visible = true;

				this->pictureBox17->Visible = true;
				this->pictureBox18->Visible = true;
				this->pictureBox19->Visible = true;
				this->pictureBox20->Visible = true;
				this->pictureBox21->Visible = true;
				this->pictureBox22->Visible = true;
				this->pictureBox23->Visible = true;
				this->pictureBox24->Visible = true;

				this->pictureBox25->Visible = false;
				this->pictureBox26->Visible = false;
				this->pictureBox27->Visible = false;
				this->pictureBox28->Visible = false;
				this->pictureBox29->Visible = false;
				this->pictureBox30->Visible = false;
				this->pictureBox31->Visible = false;
				this->pictureBox32->Visible = false;
			}
			case 4:
			{
				this->pictureBox1->Visible = true;
				this->pictureBox2->Visible = true;
				this->pictureBox3->Visible = true;
				this->pictureBox4->Visible = true;
				this->pictureBox5->Visible = true;
				this->pictureBox6->Visible = true;
				this->pictureBox7->Visible = true;
				this->pictureBox8->Visible = true;

				this->pictureBox9->Visible = true;
				this->pictureBox10->Visible = true;
				this->pictureBox11->Visible = true;
				this->pictureBox12->Visible = true;
				this->pictureBox13->Visible = true;
				this->pictureBox14->Visible = true;
				this->pictureBox15->Visible = true;
				this->pictureBox16->Visible = true;

				this->pictureBox17->Visible = true;
				this->pictureBox18->Visible = true;
				this->pictureBox19->Visible = true;
				this->pictureBox20->Visible = true;
				this->pictureBox21->Visible = true;
				this->pictureBox22->Visible = true;
				this->pictureBox23->Visible = true;
				this->pictureBox24->Visible = true;

				this->pictureBox25->Visible = true;
				this->pictureBox26->Visible = true;
				this->pictureBox27->Visible = true;
				this->pictureBox28->Visible = true;
				this->pictureBox29->Visible = true;
				this->pictureBox30->Visible = true;
				this->pictureBox31->Visible = true;
				this->pictureBox32->Visible = true;
			}

		}
	}

	ref class Card
	{
	public:
		char* name;
		int id;
		System::String^ url;

		Card() 
		{
			this->name = "unknown";
			this->id = 0;
			this->url = "Resourses/empty2.png";
		}

		Card(char* name, int id, System::String^ url)
		{
			this->name = name;
			this->id = id;
			this->url = url;
		}

	};

	int randomize(int i)
	{
		srand((unsigned)time(NULL) + i);
		int rnd = 100 + (rand() % 2);
		return rnd;
	}

	//Карты

	Card^ card1 = gcnew Card("Pawn", 1, "Resourses/A1.png");
	Card^ card2 = gcnew Card("Snail", 2, "Resourses/B1.png");
	Card^ card3 = gcnew Card("Duck", 3, "Resourses/C1.png");
	Card^ card4 = gcnew Card("Oleg", 4, "Resourses/D1.png");

	Card^ card5 = gcnew Card("Shroom", 5, "Resourses/E1.png");
	Card^ card6 = gcnew Card("Boris", 6, "Resourses/F1.png");
	Card^ card7 = gcnew Card("Norm", 7, "Resourses/G1.png");
	Card^ card8 = gcnew Card("Dinosaur", 8, "Resourses/H1.png");

	Card^ card9 = gcnew Card("11.5 Oz", 9, "Resourses/I1.png");
	Card^ card10 = gcnew Card("Bike", 10, "Resourses/J1.png");
	Card^ card11 = gcnew Card("Will", 11, "Resourses/K1.png");
	Card^ card12 = gcnew Card("Bacon", 12, "Resourses/L1.png");

	Card^ card13 = gcnew Card("Tofu", 13, "Resourses/M1.png");
	Card^ card14 = gcnew Card("Thick", 14, "Resourses/N1.png");
	Card^ card15 = gcnew Card("Dragon", 15, "Resourses/O1.png");
	Card^ card16 = gcnew Card("Anykey", 16, "Resourses/P1.png");

	//	array<Card^>^ cards = gcnew array<Card^>{gcnew Card(), gcnew Card(), gcnew Card()};

	int* arrId = new int [32] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32 };
	bool* foundId = new bool [32];

	private: System::Void createDeck()
	{
		int rndArr[32];
		int size = 32;
		int j, i, t;
		for (int k = 0; k < 10; k++)
		{
			for (i = 0; i < size; i++)
			{
				int rnd = randomize(i) % 11;
				rndArr[i] = randomize(rnd);
			}
			for (i = 0; i < size - 1; i++)
			{
				if (rndArr[0] > rndArr[size - 1] || rndArr[0] < rndArr[size / 2 + 2])
				{
					t = arrId[size - 1];
					arrId[size - 1] = arrId[0];
					arrId[0] = t;
				}
				if (rndArr[0] < rndArr[size - 1] || rndArr[0] > rndArr[size / 2 - 1])
				{
					t = arrId[0];
					arrId[0] = arrId[size - 1];
					arrId[size - 1] = t;
				}
				if (rndArr[i] > rndArr[i + k])
				{
					for (j = 0; j < i; j++)
					{
						t = arrId[j];
						arrId[j] = arrId[j + 1];
						arrId[j + 1] = t;
					}
				}
				if (rndArr[i] < rndArr[i + k])
				{
					for (j = size - 1; j > i; j--)
					{
						t = arrId[j];
						arrId[j] = arrId[j - 1];
						arrId[j - 1] = t;
					}
				}
			}
		}
		for (i = 0; i < 32; i++)
		{
			switch (arrId[i])
			{
			case 1: changePicture(i + 1, card1->url); break;
			case 2: changePicture(i + 1, card2->url); break;
			case 3: changePicture(i + 1, card3->url); break;
			case 4: changePicture(i + 1, card4->url); break;

			case 5: changePicture(i + 1, card5->url); break;
			case 6: changePicture(i + 1, card6->url); break;
			case 7: changePicture(i + 1, card7->url); break;
			case 8: changePicture(i + 1, card8->url); break;

			case 9: changePicture(i + 1, card9->url); break;
			case 10: changePicture(i + 1, card10->url); break;
			case 11: changePicture(i + 1, card11->url); break;
			case 12: changePicture(i + 1, card12->url); break;

			case 13: changePicture(i + 1, card13->url); break;
			case 14: changePicture(i + 1, card14->url); break;
			case 15: changePicture(i + 1, card15->url); break;
			case 16: changePicture(i + 1, card16->url); break;


			case 17: changePicture(i + 1, card1->url); break;
			case 18: changePicture(i + 1, card2->url); break;
			case 19: changePicture(i + 1, card3->url); break;
			case 20: changePicture(i + 1, card4->url); break;

			case 21: changePicture(i + 1, card5->url); break;
			case 22: changePicture(i + 1, card6->url); break;
			case 23: changePicture(i + 1, card7->url); break;
			case 24: changePicture(i + 1, card8->url); break;

			case 25: changePicture(i + 1, card9->url); break;
			case 26: changePicture(i + 1, card10->url); break;
			case 27: changePicture(i + 1, card11->url); break;
			case 28: changePicture(i + 1, card12->url); break;

			case 29: changePicture(i + 1, card13->url); break;
			case 30: changePicture(i + 1, card14->url); break;
			case 31: changePicture(i + 1, card15->url); break;
			case 32: changePicture(i + 1, card16->url); break;
			}
		}
	}

	public: System::Void checkCards(int num1, int num2)
	{
		System::String^ cardTC1;
		System::String^ cardTC2;
		switch (num1)
		{
			default: break;
			case 1: cardTC1 = this->pictureBox1->ImageLocation; break;
			case 2: cardTC1 = this->pictureBox2->ImageLocation; break;
			case 3: cardTC1 = this->pictureBox3->ImageLocation; break;
			case 4: cardTC1 = this->pictureBox4->ImageLocation; break;
			case 5: cardTC1 = this->pictureBox5->ImageLocation; break;
			case 6: cardTC1 = this->pictureBox6->ImageLocation; break;
			case 7: cardTC1 = this->pictureBox7->ImageLocation; break;
			case 8: cardTC1 = this->pictureBox8->ImageLocation; break;

			case 9: cardTC1 = this->pictureBox9->ImageLocation; break;
			case 10: cardTC1 = this->pictureBox10->ImageLocation; break;
			case 11: cardTC1 = this->pictureBox11->ImageLocation; break;
			case 12: cardTC1 = this->pictureBox12->ImageLocation; break;
			case 13: cardTC1 = this->pictureBox13->ImageLocation; break;
			case 14: cardTC1 = this->pictureBox14->ImageLocation; break;
			case 15: cardTC1 = this->pictureBox15->ImageLocation; break;
			case 16: cardTC1 = this->pictureBox16->ImageLocation; break;

			case 17: cardTC1 = this->pictureBox17->ImageLocation; break;
			case 18: cardTC1 = this->pictureBox18->ImageLocation; break;
			case 19: cardTC1 = this->pictureBox19->ImageLocation; break;
			case 20: cardTC1 = this->pictureBox20->ImageLocation; break;
			case 21: cardTC1 = this->pictureBox21->ImageLocation; break;
			case 22: cardTC1 = this->pictureBox22->ImageLocation; break;
			case 23: cardTC1 = this->pictureBox23->ImageLocation; break;
			case 24: cardTC1 = this->pictureBox24->ImageLocation; break;

			case 25: cardTC1 = this->pictureBox25->ImageLocation; break;
			case 26: cardTC1 = this->pictureBox26->ImageLocation; break;
			case 27: cardTC1 = this->pictureBox27->ImageLocation; break;
			case 28: cardTC1 = this->pictureBox28->ImageLocation; break;
			case 29: cardTC1 = this->pictureBox29->ImageLocation; break;
			case 30: cardTC1 = this->pictureBox30->ImageLocation; break;
			case 31: cardTC1 = this->pictureBox31->ImageLocation; break;
			case 32: cardTC1 = this->pictureBox32->ImageLocation; break;
		}

		switch (num2)
		{
			default: break;
			case 1: cardTC2 = this->pictureBox1->ImageLocation; break;
			case 2: cardTC2 = this->pictureBox2->ImageLocation; break;
			case 3: cardTC2 = this->pictureBox3->ImageLocation; break;
			case 4: cardTC2 = this->pictureBox4->ImageLocation; break;
			case 5: cardTC2 = this->pictureBox5->ImageLocation; break;
			case 6: cardTC2 = this->pictureBox6->ImageLocation; break;
			case 7: cardTC2 = this->pictureBox7->ImageLocation; break;
			case 8: cardTC2 = this->pictureBox8->ImageLocation; break;

			case 9: cardTC2 = this->pictureBox9->ImageLocation; break;
			case 10: cardTC2 = this->pictureBox10->ImageLocation; break;
			case 11: cardTC2 = this->pictureBox11->ImageLocation; break;
			case 12: cardTC2 = this->pictureBox12->ImageLocation; break;
			case 13: cardTC2 = this->pictureBox13->ImageLocation; break;
			case 14: cardTC2 = this->pictureBox14->ImageLocation; break;
			case 15: cardTC2 = this->pictureBox15->ImageLocation; break;
			case 16: cardTC2 = this->pictureBox16->ImageLocation; break;

			case 17: cardTC2 = this->pictureBox17->ImageLocation; break;
			case 18: cardTC2 = this->pictureBox18->ImageLocation; break;
			case 19: cardTC2 = this->pictureBox19->ImageLocation; break;
			case 20: cardTC2 = this->pictureBox20->ImageLocation; break;
			case 21: cardTC2 = this->pictureBox21->ImageLocation; break;
			case 22: cardTC2 = this->pictureBox22->ImageLocation; break;
			case 23: cardTC2 = this->pictureBox23->ImageLocation; break;
			case 24: cardTC2 = this->pictureBox24->ImageLocation; break;

			case 25: cardTC2 = this->pictureBox25->ImageLocation; break;
			case 26: cardTC2 = this->pictureBox26->ImageLocation; break;
			case 27: cardTC2 = this->pictureBox27->ImageLocation; break;
			case 28: cardTC2 = this->pictureBox28->ImageLocation; break;
			case 29: cardTC2 = this->pictureBox29->ImageLocation; break;
			case 30: cardTC2 = this->pictureBox30->ImageLocation; break;
			case 31: cardTC2 = this->pictureBox31->ImageLocation; break;
			case 32: cardTC2 = this->pictureBox32->ImageLocation; break;
		}
		if (cardTC1==cardTC2 && cardTC1)
		{
			switch (num1)
			{
				default: break;
				case 1: this->pictureBox1->Visible = false; foundId[num1 - 1] = true;  break;
				case 2: this->pictureBox2->Visible = false; foundId[num1 - 1] = true;  break;
				case 3: this->pictureBox3->Visible = false; foundId[num1 - 1] = true;  break;
				case 4: this->pictureBox4->Visible = false; foundId[num1 - 1] = true;  break;
				case 5: this->pictureBox5->Visible = false; foundId[num1 - 1] = true;  break;
				case 6: this->pictureBox6->Visible = false; foundId[num1 - 1] = true;  break;
				case 7: this->pictureBox7->Visible = false; foundId[num1 - 1] = true;  break;
				case 8: this->pictureBox8->Visible = false; foundId[num1 - 1] = true;  break;


				case 9: this->pictureBox9->Visible = false; foundId[num1 - 1] = true;  break;
				case 10: this->pictureBox10->Visible = false; foundId[num1 - 1] = true;  break;
				case 11: this->pictureBox11->Visible = false; foundId[num1 - 1] = true;  break;
				case 12: this->pictureBox12->Visible = false; foundId[num1 - 1] = true;  break;
				case 13: this->pictureBox13->Visible = false; foundId[num1 - 1] = true;  break;
				case 14: this->pictureBox14->Visible = false; foundId[num1 - 1] = true;  break;
				case 15: this->pictureBox15->Visible = false; foundId[num1 - 1] = true;  break;
				case 16: this->pictureBox16->Visible = false; foundId[num1 - 1] = true;  break;


				case 17: this->pictureBox17->Visible = false; foundId[num1 - 1] = true;  break;
				case 18: this->pictureBox18->Visible = false; foundId[num1 - 1] = true;  break;
				case 19: this->pictureBox19->Visible = false; foundId[num1 - 1] = true;  break;
				case 20: this->pictureBox20->Visible = false; foundId[num1 - 1] = true;  break;
				case 21: this->pictureBox21->Visible = false; foundId[num1 - 1] = true;  break;
				case 22: this->pictureBox22->Visible = false; foundId[num1 - 1] = true;  break;
				case 23: this->pictureBox23->Visible = false; foundId[num1 - 1] = true;  break;
				case 24: this->pictureBox24->Visible = false; foundId[num1 - 1] = true;  break;


				case 25: this->pictureBox25->Visible = false; foundId[num1 - 1] = true;  break;
				case 26: this->pictureBox26->Visible = false; foundId[num1 - 1] = true;  break;
				case 27: this->pictureBox27->Visible = false; foundId[num1 - 1] = true;  break;
				case 28: this->pictureBox28->Visible = false; foundId[num1 - 1] = true;  break;
				case 29: this->pictureBox29->Visible = false; foundId[num1 - 1] = true;  break;
				case 30: this->pictureBox30->Visible = false; foundId[num1 - 1] = true;  break;
				case 31: this->pictureBox31->Visible = false; foundId[num1 - 1] = true;  break;
				case 32: this->pictureBox32->Visible = false; foundId[num1 - 1] = true;  break;
			}

			switch (num2)
			{
				default: break;
				case 1: this->pictureBox1->Visible = false; foundId[num2 - 1] = true;  break;
				case 2: this->pictureBox2->Visible = false; foundId[num2 - 1] = true;  break;
				case 3: this->pictureBox3->Visible = false; foundId[num2 - 1] = true;  break;
				case 4: this->pictureBox4->Visible = false; foundId[num2 - 1] = true;  break;
				case 5: this->pictureBox5->Visible = false; foundId[num2 - 1] = true;  break;
				case 6: this->pictureBox6->Visible = false; foundId[num2 - 1] = true;  break;
				case 7: this->pictureBox7->Visible = false; foundId[num2 - 1] = true;  break;
				case 8: this->pictureBox8->Visible = false; foundId[num2 - 1] = true;  break;


				case 9: this->pictureBox9->Visible = false; foundId[num2 - 1] = true;  break;
				case 10: this->pictureBox10->Visible = false; foundId[num2 - 1] = true;  break;
				case 11: this->pictureBox11->Visible = false; foundId[num2 - 1] = true;  break;
				case 12: this->pictureBox12->Visible = false; foundId[num2 - 1] = true;  break;
				case 13: this->pictureBox13->Visible = false; foundId[num2 - 1] = true;  break;
				case 14: this->pictureBox14->Visible = false; foundId[num2 - 1] = true;  break;
				case 15: this->pictureBox15->Visible = false; foundId[num2 - 1] = true;  break;
				case 16: this->pictureBox16->Visible = false; foundId[num2 - 1] = true;  break;



				case 17: this->pictureBox17->Visible = false; foundId[num2 - 1] = true;  break;
				case 18: this->pictureBox18->Visible = false; foundId[num2 - 1] = true;  break;
				case 19: this->pictureBox19->Visible = false; foundId[num2 - 1] = true;  break;
				case 20: this->pictureBox20->Visible = false; foundId[num2 - 1] = true;  break;
				case 21: this->pictureBox21->Visible = false; foundId[num2 - 1] = true;  break;
				case 22: this->pictureBox22->Visible = false; foundId[num2 - 1] = true;  break;
				case 23: this->pictureBox23->Visible = false; foundId[num2 - 1] = true;  break;
				case 24: this->pictureBox24->Visible = false; foundId[num2 - 1] = true;  break;


				case 25: this->pictureBox25->Visible = false; foundId[num2 - 1] = true;  break;
				case 26: this->pictureBox26->Visible = false; foundId[num2 - 1] = true;  break;
				case 27: this->pictureBox27->Visible = false; foundId[num2 - 1] = true;  break;
				case 28: this->pictureBox28->Visible = false; foundId[num2 - 1] = true;  break;
				case 29: this->pictureBox29->Visible = false; foundId[num2 - 1] = true;  break;
				case 30: this->pictureBox30->Visible = false; foundId[num2 - 1] = true;  break;
				case 31: this->pictureBox31->Visible = false; foundId[num2 - 1] = true;  break;
				case 32: this->pictureBox32->Visible = false; foundId[num2 - 1] = true;  break;
			}
			score += 100;
		}
		else
		{
			score -= 15;
		}
	}


	
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		newGame();
	}
	
	bool check = false;
	int num1 = -1;
	int num2 = -2;

	public: System::Void onClick(int num) //При щелчке
	{
		if (moves <= 0)
		{
			newGame();
			PlaySound("..\\Sounds\\bad.wav");
			PlaySound("..\\Sounds\\bad.wav");
			PlaySound("..\\Sounds\\bad.wav");
		}
		if (!check)
		{
			hideDeck();
		}
		switch (arrId[num-1])
		{
		case 1: changePicture(num, card1->url); break;
		case 2: changePicture(num, card2->url); break;
		case 3: changePicture(num, card3->url); break;
		case 4: changePicture(num, card4->url); break;

		case 5: changePicture(num, card5->url); break;
		case 6: changePicture(num, card6->url); break;
		case 7: changePicture(num, card7->url); break;
		case 8: changePicture(num, card8->url); break;

		case 9: changePicture(num, card9->url); break;
		case 10: changePicture(num, card10->url); break;
		case 11: changePicture(num, card11->url); break;
		case 12: changePicture(num, card12->url); break;

		case 13: changePicture(num, card13->url); break;
		case 14: changePicture(num, card14->url); break;
		case 15: changePicture(num, card15->url); break;
		case 16: changePicture(num, card16->url); break;


		case 17: changePicture(num, card1->url); break;
		case 18: changePicture(num, card2->url); break;
		case 19: changePicture(num, card3->url); break;
		case 20: changePicture(num, card4->url); break;

		case 21: changePicture(num, card5->url); break;
		case 22: changePicture(num, card6->url); break;
		case 23: changePicture(num, card7->url); break;
		case 24: changePicture(num, card8->url); break;

		case 25: changePicture(num, card9->url); break;
		case 26: changePicture(num, card10->url); break;
		case 27: changePicture(num, card11->url); break;
		case 28: changePicture(num, card12->url); break;

		case 29: changePicture(num, card13->url); break;
		case 30: changePicture(num, card14->url); break;
		case 31: changePicture(num, card15->url); break;
		case 32: changePicture(num, card16->url); break;
		}
		if (!check)
		{
			num1 = num;
			check = !check;
			moves--;
			this->toolStripMoves->Text = moves + "";
			this->toolStripScore->Text = score + "";
		}
		else
		{
			check = !check;
			num2 = num;
			if (num1 != num2)
			{
				checkCards(num1, num2);
			}
		}
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(1);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(2);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(3);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(4);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(5);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(6);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(7);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(8);
		PlaySound("..\\Sounds\\tap.wav");
	}

	// 1 - 8

	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(9);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(10);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(11);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(12);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(13);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox14_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(14);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox15_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(15);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox16_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(16);
		PlaySound("..\\Sounds\\tap.wav");
	}

	// 2 - 16

	private: System::Void pictureBox17_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(17);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(18);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(19);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(20);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(21);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(22);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(23);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox24_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(24);
		PlaySound("..\\Sounds\\tap.wav");
	}

	// 3 - 24

	private: System::Void pictureBox25_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(25);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox26_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(26);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox27_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(27);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox28_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(28);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox29_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(29);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(30);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox31_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		onClick(31);
		PlaySound("..\\Sounds\\tap.wav");
	}

	private: System::Void pictureBox32_Click(System::Object^ sender, System::EventArgs^ e)
	{
		onClick(32);
		PlaySound("..\\Sounds\\tap.wav");
	}

	// 4 - 32


	private: System::Void toolStripNewGame_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		newGame();
	}

	private: System::Void DifficultyEasy_Click(System::Object^ sender, System::EventArgs^ e)
	{
		setDifficulty(1);
	}


	private: System::Void DifficultyNormal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		setDifficulty(2);
	}


	private: System::Void DifficultyHard_Click(System::Object^ sender, System::EventArgs^ e)
	{
		setDifficulty(3);
	}


	private: System::Void DifficultyHarder_Click(System::Object^ sender, System::EventArgs^ e)
	{
		setDifficulty(4);
	}
	
};
}
