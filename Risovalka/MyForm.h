﻿#pragma once

namespace Risovalka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class PaintForm : public System::Windows::Forms::Form
	{
	public:
		PaintForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PaintForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::MenuStrip^ TopMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ canvasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearCanvasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ soundModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ freeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stepsToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ OuterGroupBox;
	private: System::Windows::Forms::GroupBox^ InnerRightGroupBox;

	private: System::Windows::Forms::GroupBox^ InnerLeftGroupBox;
	private: System::Windows::Forms::GroupBox^ InnerCentralGroupBox;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::Button^ ButtonRed;
	private: System::Windows::Forms::Button^ ButtonBlue;

	private: System::Windows::Forms::Button^ ButtonCyan;

	private: System::Windows::Forms::Button^ ButtonGreen;

	private: System::Windows::Forms::Button^ ButtonYellow;

	private: System::Windows::Forms::Button^ ButtonOrange;
	private: System::Windows::Forms::Button^ ButtonPurple;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownBrushSize;
	private: System::Windows::Forms::Label^ labelBrushSize;
	private: System::Windows::Forms::RadioButton^ radioButtonErase;
	private: System::Windows::Forms::RadioButton^ radioButtonDraw;
	private: System::Windows::Forms::Label^ labelMode;
	private: System::Windows::Forms::PictureBox^ pictureBoxPalette;

	private: System::Windows::Forms::PictureBox^ pictureBoxCanvas;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLength;

	private: System::Windows::Forms::Label^ labelLength;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidth;




	private: System::Windows::Forms::Label^ labelWidth;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::ComboBox^ comboBoxInstruments;

	private: System::Windows::Forms::PictureBox^ pictureBoxInstrument;
	private: System::Windows::Forms::RadioButton^ radioButtonSquare;

	private: System::Windows::Forms::RadioButton^ radioButtonCircle;
	private: System::Windows::Forms::RadioButton^ radioButtonLine;
	private: System::Windows::Forms::RadioButton^ radioButtonTriangle;
	private: System::Windows::Forms::Label^ labelShape;
	private: System::Windows::Forms::GroupBox^ groupBoxCreateCanvas;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCreateHeight;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCreateWidth;
	private: System::Windows::Forms::Button^ buttonCreate;










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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->TopMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->canvasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearCanvasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soundModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->freeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stepsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OuterGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->InnerCentralGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->labelMode = (gcnew System::Windows::Forms::Label());
			this->radioButtonTriangle = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonErase = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLine = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDraw = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCircle = (gcnew System::Windows::Forms::RadioButton());
			this->labelBrushSize = (gcnew System::Windows::Forms::Label());
			this->radioButtonSquare = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDownBrushSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelShape = (gcnew System::Windows::Forms::Label());
			this->labelWidth = (gcnew System::Windows::Forms::Label());
			this->labelLength = (gcnew System::Windows::Forms::Label());
			this->numericUpDownWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLength = (gcnew System::Windows::Forms::NumericUpDown());
			this->InnerRightGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBoxPalette = (gcnew System::Windows::Forms::PictureBox());
			this->ButtonPurple = (gcnew System::Windows::Forms::Button());
			this->ButtonBlue = (gcnew System::Windows::Forms::Button());
			this->ButtonCyan = (gcnew System::Windows::Forms::Button());
			this->ButtonGreen = (gcnew System::Windows::Forms::Button());
			this->ButtonYellow = (gcnew System::Windows::Forms::Button());
			this->ButtonOrange = (gcnew System::Windows::Forms::Button());
			this->ButtonRed = (gcnew System::Windows::Forms::Button());
			this->InnerLeftGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->comboBoxInstruments = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBoxInstrument = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCanvas = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxCreateCanvas = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCreateHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownCreateWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->TopMenuStrip->SuspendLayout();
			this->OuterGroupBox->SuspendLayout();
			this->InnerCentralGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->BeginInit();
			this->InnerRightGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPalette))->BeginInit();
			this->InnerLeftGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInstrument))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCanvas))->BeginInit();
			this->groupBoxCreateCanvas->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateHeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateWidth))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// TopMenuStrip
			// 
			this->TopMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->canvasToolStripMenuItem,
					this->soundModeToolStripMenuItem
			});
			this->TopMenuStrip->Location = System::Drawing::Point(0, 0);
			this->TopMenuStrip->Name = L"TopMenuStrip";
			this->TopMenuStrip->Size = System::Drawing::Size(1010, 24);
			this->TopMenuStrip->TabIndex = 0;
			// 
			// canvasToolStripMenuItem
			// 
			this->canvasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->createToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->openFileToolStripMenuItem, this->clearCanvasToolStripMenuItem
			});
			this->canvasToolStripMenuItem->Name = L"canvasToolStripMenuItem";
			this->canvasToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->canvasToolStripMenuItem->Text = L"Canvas";
			this->canvasToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::canvasToolStripMenuItem_Click);
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->createToolStripMenuItem->Text = L"Create canvas";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::createToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::saveAsToolStripMenuItem_Click);
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openFileToolStripMenuItem->Text = L"Open file";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::openFileToolStripMenuItem_Click);
			// 
			// clearCanvasToolStripMenuItem
			// 
			this->clearCanvasToolStripMenuItem->Name = L"clearCanvasToolStripMenuItem";
			this->clearCanvasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->clearCanvasToolStripMenuItem->Text = L"Clear canvas";
			this->clearCanvasToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::clearCanvasToolStripMenuItem_Click);
			// 
			// soundModeToolStripMenuItem
			// 
			this->soundModeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->freeToolStripMenuItem,
					this->stepsToolStripMenuItem
			});
			this->soundModeToolStripMenuItem->Name = L"soundModeToolStripMenuItem";
			this->soundModeToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->soundModeToolStripMenuItem->Text = L"Sound mode";
			// 
			// freeToolStripMenuItem
			// 
			this->freeToolStripMenuItem->Name = L"freeToolStripMenuItem";
			this->freeToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->freeToolStripMenuItem->Text = L"Free";
			this->freeToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::freeToolStripMenuItem_Click);
			// 
			// stepsToolStripMenuItem
			// 
			this->stepsToolStripMenuItem->Name = L"stepsToolStripMenuItem";
			this->stepsToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->stepsToolStripMenuItem->Text = L"Steps";
			this->stepsToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::stepsToolStripMenuItem_Click);
			// 
			// OuterGroupBox
			// 
			this->OuterGroupBox->Controls->Add(this->InnerCentralGroupBox);
			this->OuterGroupBox->Controls->Add(this->InnerRightGroupBox);
			this->OuterGroupBox->Controls->Add(this->InnerLeftGroupBox);
			this->OuterGroupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->OuterGroupBox->Location = System::Drawing::Point(0, 24);
			this->OuterGroupBox->Name = L"OuterGroupBox";
			this->OuterGroupBox->Size = System::Drawing::Size(1010, 121);
			this->OuterGroupBox->TabIndex = 1;
			this->OuterGroupBox->TabStop = false;
			// 
			// InnerCentralGroupBox
			// 
			this->InnerCentralGroupBox->Controls->Add(this->splitContainer1);
			this->InnerCentralGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InnerCentralGroupBox->Location = System::Drawing::Point(203, 16);
			this->InnerCentralGroupBox->Name = L"InnerCentralGroupBox";
			this->InnerCentralGroupBox->Size = System::Drawing::Size(454, 102);
			this->InnerCentralGroupBox->TabIndex = 2;
			this->InnerCentralGroupBox->TabStop = false;
			this->InnerCentralGroupBox->Text = L"Brush / Shapes";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 16);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->labelMode);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonTriangle);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonErase);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonLine);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonDraw);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonCircle);
			this->splitContainer1->Panel1->Controls->Add(this->labelBrushSize);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonSquare);
			this->splitContainer1->Panel1->Controls->Add(this->numericUpDownBrushSize);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->labelShape);
			this->splitContainer1->Panel2->Controls->Add(this->labelWidth);
			this->splitContainer1->Panel2->Controls->Add(this->labelLength);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDownWidth);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDownLength);
			this->splitContainer1->Size = System::Drawing::Size(448, 83);
			this->splitContainer1->SplitterDistance = 284;
			this->splitContainer1->TabIndex = 0;
			// 
			// labelMode
			// 
			this->labelMode->AutoSize = true;
			this->labelMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelMode->Location = System::Drawing::Point(44, 29);
			this->labelMode->Name = L"labelMode";
			this->labelMode->Size = System::Drawing::Size(43, 15);
			this->labelMode->TabIndex = 4;
			this->labelMode->Text = L"Mode";
			this->labelMode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButtonTriangle
			// 
			this->radioButtonTriangle->AutoSize = true;
			this->radioButtonTriangle->Location = System::Drawing::Point(214, 53);
			this->radioButtonTriangle->Name = L"radioButtonTriangle";
			this->radioButtonTriangle->Size = System::Drawing::Size(63, 17);
			this->radioButtonTriangle->TabIndex = 10;
			this->radioButtonTriangle->Text = L"Triangle";
			this->radioButtonTriangle->UseVisualStyleBackColor = true;
			this->radioButtonTriangle->Visible = false;
			this->radioButtonTriangle->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonTriangle_CheckedChanged);
			// 
			// radioButtonErase
			// 
			this->radioButtonErase->AutoSize = true;
			this->radioButtonErase->Location = System::Drawing::Point(93, 53);
			this->radioButtonErase->Name = L"radioButtonErase";
			this->radioButtonErase->Size = System::Drawing::Size(52, 17);
			this->radioButtonErase->TabIndex = 3;
			this->radioButtonErase->Text = L"Erase";
			this->radioButtonErase->UseVisualStyleBackColor = true;
			this->radioButtonErase->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonErase_CheckedChanged);
			// 
			// radioButtonLine
			// 
			this->radioButtonLine->AutoSize = true;
			this->radioButtonLine->Location = System::Drawing::Point(214, 29);
			this->radioButtonLine->Name = L"radioButtonLine";
			this->radioButtonLine->Size = System::Drawing::Size(45, 17);
			this->radioButtonLine->TabIndex = 9;
			this->radioButtonLine->Text = L"Line";
			this->radioButtonLine->UseVisualStyleBackColor = true;
			this->radioButtonLine->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonLine_CheckedChanged);
			// 
			// radioButtonDraw
			// 
			this->radioButtonDraw->AutoSize = true;
			this->radioButtonDraw->Checked = true;
			this->radioButtonDraw->Location = System::Drawing::Point(93, 29);
			this->radioButtonDraw->Name = L"radioButtonDraw";
			this->radioButtonDraw->Size = System::Drawing::Size(50, 17);
			this->radioButtonDraw->TabIndex = 2;
			this->radioButtonDraw->TabStop = true;
			this->radioButtonDraw->Text = L"Draw";
			this->radioButtonDraw->UseVisualStyleBackColor = true;
			this->radioButtonDraw->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonDraw_CheckedChanged);
			// 
			// radioButtonCircle
			// 
			this->radioButtonCircle->AutoSize = true;
			this->radioButtonCircle->Location = System::Drawing::Point(149, 53);
			this->radioButtonCircle->Name = L"radioButtonCircle";
			this->radioButtonCircle->Size = System::Drawing::Size(51, 17);
			this->radioButtonCircle->TabIndex = 8;
			this->radioButtonCircle->Text = L"Circle";
			this->radioButtonCircle->UseVisualStyleBackColor = true;
			this->radioButtonCircle->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonCircle_CheckedChanged);
			// 
			// labelBrushSize
			// 
			this->labelBrushSize->AutoSize = true;
			this->labelBrushSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelBrushSize->Location = System::Drawing::Point(13, 4);
			this->labelBrushSize->Name = L"labelBrushSize";
			this->labelBrushSize->Size = System::Drawing::Size(74, 15);
			this->labelBrushSize->TabIndex = 1;
			this->labelBrushSize->Text = L"Brush size";
			this->labelBrushSize->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButtonSquare
			// 
			this->radioButtonSquare->AutoSize = true;
			this->radioButtonSquare->Location = System::Drawing::Point(149, 29);
			this->radioButtonSquare->Name = L"radioButtonSquare";
			this->radioButtonSquare->Size = System::Drawing::Size(59, 17);
			this->radioButtonSquare->TabIndex = 7;
			this->radioButtonSquare->Text = L"Square";
			this->radioButtonSquare->UseVisualStyleBackColor = true;
			this->radioButtonSquare->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonSquare_CheckedChanged);
			// 
			// numericUpDownBrushSize
			// 
			this->numericUpDownBrushSize->Location = System::Drawing::Point(93, 3);
			this->numericUpDownBrushSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownBrushSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownBrushSize->Name = L"numericUpDownBrushSize";
			this->numericUpDownBrushSize->Size = System::Drawing::Size(87, 20);
			this->numericUpDownBrushSize->TabIndex = 0;
			this->numericUpDownBrushSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownBrushSize->ValueChanged += gcnew System::EventHandler(this, &PaintForm::numericUpDownBrushSize_ValueChanged);
			// 
			// labelShape
			// 
			this->labelShape->AutoSize = true;
			this->labelShape->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelShape->Location = System::Drawing::Point(18, 8);
			this->labelShape->Name = L"labelShape";
			this->labelShape->Size = System::Drawing::Size(48, 15);
			this->labelShape->TabIndex = 5;
			this->labelShape->Text = L"Shape";
			this->labelShape->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWidth
			// 
			this->labelWidth->AutoSize = true;
			this->labelWidth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelWidth->Location = System::Drawing::Point(18, 53);
			this->labelWidth->Name = L"labelWidth";
			this->labelWidth->Size = System::Drawing::Size(49, 15);
			this->labelWidth->TabIndex = 6;
			this->labelWidth->Text = L"Height";
			this->labelWidth->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLength
			// 
			this->labelLength->AutoSize = true;
			this->labelLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelLength->Location = System::Drawing::Point(18, 29);
			this->labelLength->Name = L"labelLength";
			this->labelLength->Size = System::Drawing::Size(43, 15);
			this->labelLength->TabIndex = 5;
			this->labelLength->Text = L"Width";
			this->labelLength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelLength->Click += gcnew System::EventHandler(this, &PaintForm::labelLength_Click);
			// 
			// numericUpDownWidth
			// 
			this->numericUpDownWidth->Location = System::Drawing::Point(73, 53);
			this->numericUpDownWidth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownWidth->Name = L"numericUpDownWidth";
			this->numericUpDownWidth->Size = System::Drawing::Size(57, 20);
			this->numericUpDownWidth->TabIndex = 4;
			this->numericUpDownWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownWidth->ValueChanged += gcnew System::EventHandler(this, &PaintForm::numericUpDownWidth_ValueChanged);
			// 
			// numericUpDownLength
			// 
			this->numericUpDownLength->Location = System::Drawing::Point(73, 29);
			this->numericUpDownLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownLength->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownLength->Name = L"numericUpDownLength";
			this->numericUpDownLength->Size = System::Drawing::Size(57, 20);
			this->numericUpDownLength->TabIndex = 3;
			this->numericUpDownLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownLength->ValueChanged += gcnew System::EventHandler(this, &PaintForm::numericUpDownLength_ValueChanged);
			// 
			// InnerRightGroupBox
			// 
			this->InnerRightGroupBox->Controls->Add(this->splitContainer2);
			this->InnerRightGroupBox->Dock = System::Windows::Forms::DockStyle::Right;
			this->InnerRightGroupBox->Location = System::Drawing::Point(657, 16);
			this->InnerRightGroupBox->Name = L"InnerRightGroupBox";
			this->InnerRightGroupBox->Size = System::Drawing::Size(350, 102);
			this->InnerRightGroupBox->TabIndex = 1;
			this->InnerRightGroupBox->TabStop = false;
			this->InnerRightGroupBox->Text = L"Palette";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 16);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->pictureBoxPalette);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->ButtonPurple);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonBlue);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonCyan);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonGreen);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonYellow);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonOrange);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonRed);
			this->splitContainer2->Size = System::Drawing::Size(344, 83);
			this->splitContainer2->SplitterDistance = 83;
			this->splitContainer2->TabIndex = 0;
			// 
			// pictureBoxPalette
			// 
			this->pictureBoxPalette->Location = System::Drawing::Point(3, 4);
			this->pictureBoxPalette->Name = L"pictureBoxPalette";
			this->pictureBoxPalette->Size = System::Drawing::Size(77, 79);
			this->pictureBoxPalette->TabIndex = 0;
			this->pictureBoxPalette->TabStop = false;
			// 
			// ButtonPurple
			// 
			this->ButtonPurple->BackColor = System::Drawing::Color::Purple;
			this->ButtonPurple->Location = System::Drawing::Point(220, 4);
			this->ButtonPurple->Name = L"ButtonPurple";
			this->ButtonPurple->Size = System::Drawing::Size(30, 30);
			this->ButtonPurple->TabIndex = 6;
			this->ButtonPurple->UseVisualStyleBackColor = false;
			this->ButtonPurple->Click += gcnew System::EventHandler(this, &PaintForm::ButtonPurple_Click);
			// 
			// ButtonBlue
			// 
			this->ButtonBlue->BackColor = System::Drawing::Color::Blue;
			this->ButtonBlue->Location = System::Drawing::Point(184, 4);
			this->ButtonBlue->Name = L"ButtonBlue";
			this->ButtonBlue->Size = System::Drawing::Size(30, 30);
			this->ButtonBlue->TabIndex = 5;
			this->ButtonBlue->UseVisualStyleBackColor = false;
			this->ButtonBlue->Click += gcnew System::EventHandler(this, &PaintForm::ButtonBlue_Click);
			// 
			// ButtonCyan
			// 
			this->ButtonCyan->BackColor = System::Drawing::Color::Cyan;
			this->ButtonCyan->Location = System::Drawing::Point(148, 4);
			this->ButtonCyan->Name = L"ButtonCyan";
			this->ButtonCyan->Size = System::Drawing::Size(30, 30);
			this->ButtonCyan->TabIndex = 4;
			this->ButtonCyan->UseVisualStyleBackColor = false;
			this->ButtonCyan->Click += gcnew System::EventHandler(this, &PaintForm::ButtonCyan_Click);
			// 
			// ButtonGreen
			// 
			this->ButtonGreen->BackColor = System::Drawing::Color::Green;
			this->ButtonGreen->Location = System::Drawing::Point(112, 4);
			this->ButtonGreen->Name = L"ButtonGreen";
			this->ButtonGreen->Size = System::Drawing::Size(30, 30);
			this->ButtonGreen->TabIndex = 3;
			this->ButtonGreen->UseVisualStyleBackColor = false;
			this->ButtonGreen->Click += gcnew System::EventHandler(this, &PaintForm::ButtonGreen_Click);
			// 
			// ButtonYellow
			// 
			this->ButtonYellow->BackColor = System::Drawing::Color::Yellow;
			this->ButtonYellow->Location = System::Drawing::Point(76, 4);
			this->ButtonYellow->Name = L"ButtonYellow";
			this->ButtonYellow->Size = System::Drawing::Size(30, 30);
			this->ButtonYellow->TabIndex = 2;
			this->ButtonYellow->UseVisualStyleBackColor = false;
			this->ButtonYellow->Click += gcnew System::EventHandler(this, &PaintForm::ButtonYellow_Click);
			// 
			// ButtonOrange
			// 
			this->ButtonOrange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ButtonOrange->Location = System::Drawing::Point(40, 4);
			this->ButtonOrange->Name = L"ButtonOrange";
			this->ButtonOrange->Size = System::Drawing::Size(30, 30);
			this->ButtonOrange->TabIndex = 1;
			this->ButtonOrange->UseVisualStyleBackColor = false;
			this->ButtonOrange->Click += gcnew System::EventHandler(this, &PaintForm::ButtonOrange_Click);
			// 
			// ButtonRed
			// 
			this->ButtonRed->BackColor = System::Drawing::Color::Red;
			this->ButtonRed->Location = System::Drawing::Point(4, 4);
			this->ButtonRed->Name = L"ButtonRed";
			this->ButtonRed->Size = System::Drawing::Size(30, 30);
			this->ButtonRed->TabIndex = 0;
			this->ButtonRed->UseVisualStyleBackColor = false;
			this->ButtonRed->Click += gcnew System::EventHandler(this, &PaintForm::ButtonRed_Click);
			// 
			// InnerLeftGroupBox
			// 
			this->InnerLeftGroupBox->Controls->Add(this->splitContainer3);
			this->InnerLeftGroupBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->InnerLeftGroupBox->Location = System::Drawing::Point(3, 16);
			this->InnerLeftGroupBox->Name = L"InnerLeftGroupBox";
			this->InnerLeftGroupBox->Size = System::Drawing::Size(200, 102);
			this->InnerLeftGroupBox->TabIndex = 0;
			this->InnerLeftGroupBox->TabStop = false;
			this->InnerLeftGroupBox->Text = L"Musical Instrument";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 16);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->comboBoxInstruments);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->pictureBoxInstrument);
			this->splitContainer3->Size = System::Drawing::Size(194, 83);
			this->splitContainer3->SplitterDistance = 28;
			this->splitContainer3->TabIndex = 0;
			// 
			// comboBoxInstruments
			// 
			this->comboBoxInstruments->FormattingEnabled = true;
			this->comboBoxInstruments->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Marimba", L"Piano", L"String", L"WoodWind",
					L"Nature"
			});
			this->comboBoxInstruments->Location = System::Drawing::Point(7, 4);
			this->comboBoxInstruments->Name = L"comboBoxInstruments";
			this->comboBoxInstruments->Size = System::Drawing::Size(184, 21);
			this->comboBoxInstruments->TabIndex = 0;
			this->comboBoxInstruments->Text = L"None";
			this->comboBoxInstruments->SelectedIndexChanged += gcnew System::EventHandler(this, &PaintForm::comboBoxInstruments_SelectedIndexChanged);
			// 
			// pictureBoxInstrument
			// 
			this->pictureBoxInstrument->Location = System::Drawing::Point(7, 4);
			this->pictureBoxInstrument->Name = L"pictureBoxInstrument";
			this->pictureBoxInstrument->Size = System::Drawing::Size(184, 47);
			this->pictureBoxInstrument->TabIndex = 0;
			this->pictureBoxInstrument->TabStop = false;
			// 
			// pictureBoxCanvas
			// 
			this->pictureBoxCanvas->BackColor = System::Drawing::Color::White;
			this->pictureBoxCanvas->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBoxCanvas->Location = System::Drawing::Point(0, 145);
			this->pictureBoxCanvas->Name = L"pictureBoxCanvas";
			this->pictureBoxCanvas->Size = System::Drawing::Size(1010, 393);
			this->pictureBoxCanvas->TabIndex = 2;
			this->pictureBoxCanvas->TabStop = false;
			this->pictureBoxCanvas->SizeChanged += gcnew System::EventHandler(this, &PaintForm::pictureBoxCanvas_SizeChanged);
			this->pictureBoxCanvas->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaintForm::pictureBoxCanvas_Paint);
			this->pictureBoxCanvas->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBoxCanvas_MouseDown);
			this->pictureBoxCanvas->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBoxCanvas_MouseMove);
			this->pictureBoxCanvas->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBoxCanvas_MouseUp);
			// 
			// groupBoxCreateCanvas
			// 
			this->groupBoxCreateCanvas->Controls->Add(this->buttonCreate);
			this->groupBoxCreateCanvas->Controls->Add(this->label1);
			this->groupBoxCreateCanvas->Controls->Add(this->label2);
			this->groupBoxCreateCanvas->Controls->Add(this->numericUpDownCreateHeight);
			this->groupBoxCreateCanvas->Controls->Add(this->numericUpDownCreateWidth);
			this->groupBoxCreateCanvas->Location = System::Drawing::Point(397, 152);
			this->groupBoxCreateCanvas->Name = L"groupBoxCreateCanvas";
			this->groupBoxCreateCanvas->Size = System::Drawing::Size(257, 129);
			this->groupBoxCreateCanvas->TabIndex = 3;
			this->groupBoxCreateCanvas->TabStop = false;
			this->groupBoxCreateCanvas->Text = L"Create canvas";
			this->groupBoxCreateCanvas->Visible = false;
			// 
			// buttonCreate
			// 
			this->buttonCreate->Location = System::Drawing::Point(93, 92);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(75, 23);
			this->buttonCreate->TabIndex = 13;
			this->buttonCreate->Text = L"create";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &PaintForm::buttonCreate_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(56, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Height";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(62, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 15);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Width";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownCreateHeight
			// 
			this->numericUpDownCreateHeight->Location = System::Drawing::Point(111, 55);
			this->numericUpDownCreateHeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 393, 0, 0, 0 });
			this->numericUpDownCreateHeight->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDownCreateHeight->Name = L"numericUpDownCreateHeight";
			this->numericUpDownCreateHeight->Size = System::Drawing::Size(57, 20);
			this->numericUpDownCreateHeight->TabIndex = 6;
			this->numericUpDownCreateHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// numericUpDownCreateWidth
			// 
			this->numericUpDownCreateWidth->Location = System::Drawing::Point(111, 29);
			this->numericUpDownCreateWidth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1010, 0, 0, 0 });
			this->numericUpDownCreateWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDownCreateWidth->Name = L"numericUpDownCreateWidth";
			this->numericUpDownCreateWidth->Size = System::Drawing::Size(57, 20);
			this->numericUpDownCreateWidth->TabIndex = 5;
			this->numericUpDownCreateWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// PaintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1010, 538);
			this->Controls->Add(this->groupBoxCreateCanvas);
			this->Controls->Add(this->pictureBoxCanvas);
			this->Controls->Add(this->OuterGroupBox);
			this->Controls->Add(this->TopMenuStrip);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->TopMenuStrip;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"PaintForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &PaintForm::MyForm_Load);
			this->TopMenuStrip->ResumeLayout(false);
			this->TopMenuStrip->PerformLayout();
			this->OuterGroupBox->ResumeLayout(false);
			this->InnerCentralGroupBox->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->EndInit();
			this->InnerRightGroupBox->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPalette))->EndInit();
			this->InnerLeftGroupBox->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInstrument))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCanvas))->EndInit();
			this->groupBoxCreateCanvas->ResumeLayout(false);
			this->groupBoxCreateCanvas->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateHeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateWidth))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		float size;
		bool mouse_pressed;
		int X;
		int Y;
		List<Point>^ points;
		Bitmap^ image;
		Graphics^ canvas;
		Pen^ pen;
		
	//Событие при запуске формы
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		size = 1;
		mouse_pressed = false;
		X = 0;
		Y = 0;
		pen = gcnew Pen(Color::White, 5);
		points = gcnew List<Point>;
		image = gcnew Bitmap(pictureBoxCanvas->Width, pictureBoxCanvas->Height);
		canvas = Graphics::FromImage(image);
		pictureBoxCanvas->Image = image;
		pictureBoxCanvas->BackColor = Color::White;
	}
	//События для меню холста
private: System::Void canvasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void clearCanvasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	//События для меню режима звука
private: System::Void freeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void stepsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	//Событие для выбора размера кисти
private: System::Void numericUpDownBrushSize_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	//События выбора цвета кисти
private: System::Void ButtonRed_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonOrange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonYellow_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonGreen_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonCyan_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonBlue_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonPurple_Click(System::Object^ sender, System::EventArgs^ e);
	//События выбора режима кисти
private: System::Void radioButtonDraw_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonErase_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonSquare_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonCircle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonLine_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonTriangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	//Событие для выбора инструмента
private: System::Void comboBoxInstruments_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	//События выбора длины фигуры
private: System::Void numericUpDownLength_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	//События выбора ширины фигуры
private: System::Void numericUpDownWidth_ValueChanged(System::Object^ sender, System::EventArgs^ e);

	//События полотна
private: System::Void pictureBoxCanvas_SizeChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBoxCanvas_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxCanvas_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxCanvas_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxCanvas_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void labelLength_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e);
};
}
