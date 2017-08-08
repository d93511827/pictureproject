#pragma once

namespace pictureproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  projectbox;
	private: System::Windows::Forms::TabPage^  project1;
	private: System::Windows::Forms::TabPage^  project2;
	protected:

	protected:

	protected:
	private: System::String^ picture4filepath = "";
	
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabPage^  project3;
	private: System::Windows::Forms::TabPage^  project4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TabPage^  project5;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;




	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->projectbox = (gcnew System::Windows::Forms::TabControl());
			this->project1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->project2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->project3 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->project4 = (gcnew System::Windows::Forms::TabPage());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->project5 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->projectbox->SuspendLayout();
			this->project1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->project2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->project3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->project4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->project5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->SuspendLayout();
			// 
			// projectbox
			// 
			this->projectbox->Controls->Add(this->project1);
			this->projectbox->Controls->Add(this->project2);
			this->projectbox->Controls->Add(this->project3);
			this->projectbox->Controls->Add(this->project4);
			this->projectbox->Controls->Add(this->project5);
			this->projectbox->Cursor = System::Windows::Forms::Cursors::Default;
			this->projectbox->Font = (gcnew System::Drawing::Font(L"細明體-ExtB", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->projectbox->Location = System::Drawing::Point(0, 0);
			this->projectbox->Margin = System::Windows::Forms::Padding(0);
			this->projectbox->Name = L"projectbox";
			this->projectbox->SelectedIndex = 0;
			this->projectbox->Size = System::Drawing::Size(1575, 750);
			this->projectbox->TabIndex = 0;
			// 
			// project1
			// 
			this->project1->Controls->Add(this->pictureBox3);
			this->project1->Controls->Add(this->button1);
			this->project1->Controls->Add(this->pictureBox2);
			this->project1->Controls->Add(this->pictureBox1);
			this->project1->Location = System::Drawing::Point(4, 23);
			this->project1->Name = L"project1";
			this->project1->Padding = System::Windows::Forms::Padding(3);
			this->project1->Size = System::Drawing::Size(1567, 723);
			this->project1->TabIndex = 0;
			this->project1->Text = L"project1";
			this->project1->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(771, 30);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(336, 252);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(541, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"import";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(405, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(336, 252);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(43, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(336, 252);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// project2
			// 
			this->project2->Controls->Add(this->button4);
			this->project2->Controls->Add(this->button3);
			this->project2->Controls->Add(this->button2);
			this->project2->Controls->Add(this->pictureBox7);
			this->project2->Controls->Add(this->pictureBox6);
			this->project2->Controls->Add(this->pictureBox5);
			this->project2->Controls->Add(this->pictureBox4);
			this->project2->Location = System::Drawing::Point(4, 23);
			this->project2->Name = L"project2";
			this->project2->Padding = System::Windows::Forms::Padding(3);
			this->project2->Size = System::Drawing::Size(1567, 723);
			this->project2->TabIndex = 1;
			this->project2->Text = L"project2";
			this->project2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(141, 472);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"first-order";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(141, 443);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"zore-order";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(21, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"import";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(0, 268);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(155, 138);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 3;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(1456, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(111, 46);
			this->pictureBox6->TabIndex = 2;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(304, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(576, 527);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(298, 262);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// project3
			// 
			this->project3->Controls->Add(this->button7);
			this->project3->Controls->Add(this->button6);
			this->project3->Controls->Add(this->chart2);
			this->project3->Controls->Add(this->pictureBox9);
			this->project3->Controls->Add(this->pictureBox8);
			this->project3->Controls->Add(this->button5);
			this->project3->Controls->Add(this->chart1);
			this->project3->Location = System::Drawing::Point(4, 23);
			this->project3->Name = L"project3";
			this->project3->Padding = System::Windows::Forms::Padding(3);
			this->project3->Size = System::Drawing::Size(1567, 723);
			this->project3->TabIndex = 2;
			this->project3->Text = L"porject3";
			this->project3->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(612, 524);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(182, 23);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Histogram equalization";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(612, 473);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(182, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Histogram shrink";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// chart2
			// 
			chartArea1->Name = L"pix";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(899, 423);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"pix";
			series1->Legend = L"Legend1";
			series1->Name = L"pix";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(524, 281);
			this->chart2->TabIndex = 9;
			this->chart2->Text = L"chart2";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(899, 6);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(524, 411);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(6, 6);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(524, 411);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(612, 423);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(182, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Histogram Stretch";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// chart1
			// 
			chartArea2->Name = L"pix";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(6, 423);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"pix";
			series2->Legend = L"Legend1";
			series2->Name = L"pix";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(524, 281);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			// 
			// project4
			// 
			this->project4->Controls->Add(this->button10);
			this->project4->Controls->Add(this->button9);
			this->project4->Controls->Add(this->chart4);
			this->project4->Controls->Add(this->chart3);
			this->project4->Controls->Add(this->button8);
			this->project4->Controls->Add(this->pictureBox11);
			this->project4->Controls->Add(this->pictureBox10);
			this->project4->Location = System::Drawing::Point(4, 23);
			this->project4->Name = L"project4";
			this->project4->Padding = System::Windows::Forms::Padding(3);
			this->project4->Size = System::Drawing::Size(1567, 723);
			this->project4->TabIndex = 3;
			this->project4->Text = L"project4";
			this->project4->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(605, 473);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(129, 23);
			this->button10->TabIndex = 6;
			this->button10->Text = L"Gaussian noise";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(605, 531);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(129, 23);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Uniform noise";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// chart4
			// 
			chartArea3->Name = L"pix";
			this->chart4->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart4->Legends->Add(legend3);
			this->chart4->Location = System::Drawing::Point(821, 473);
			this->chart4->Name = L"chart4";
			series3->ChartArea = L"pix";
			series3->Legend = L"Legend1";
			series3->Name = L"Pix";
			this->chart4->Series->Add(series3);
			this->chart4->Size = System::Drawing::Size(485, 214);
			this->chart4->TabIndex = 4;
			this->chart4->Text = L"chart4";
			// 
			// chart3
			// 
			chartArea4->Name = L"pix";
			this->chart3->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart3->Legends->Add(legend4);
			this->chart3->Location = System::Drawing::Point(20, 473);
			this->chart3->Name = L"chart3";
			series4->ChartArea = L"pix";
			series4->Legend = L"Legend1";
			series4->Name = L"Pix";
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(485, 214);
			this->chart3->TabIndex = 3;
			this->chart3->Text = L"chart3";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(605, 502);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(129, 23);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Impulse noise";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(784, 0);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(556, 448);
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(-4, 0);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(541, 448);
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// project5
			// 
			this->project5->Controls->Add(this->pictureBox13);
			this->project5->Controls->Add(this->pictureBox12);
			this->project5->Location = System::Drawing::Point(4, 23);
			this->project5->Name = L"project5";
			this->project5->Size = System::Drawing::Size(1567, 723);
			this->project5->TabIndex = 4;
			this->project5->Text = L"project5";
			this->project5->UseVisualStyleBackColor = true;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(3, 3);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(491, 416);
			this->pictureBox12->TabIndex = 0;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(903, 3);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(442, 416);
			this->pictureBox13->TabIndex = 1;
			this->pictureBox13->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1574, 751);
			this->Controls->Add(this->projectbox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->projectbox->ResumeLayout(false);
			this->project1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->project2->ResumeLayout(false);
			this->project2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->project3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->project4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->project5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma region Function

	private: System::Void SelectPicture(String^ %stringPath, PictureBox^ %pictureBox, bool gray) {
		// 建立 OpenFileDialog 控制項
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;

		// 設定Filter，用以限定使用者開啟的檔案
		openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
		// 預設檔案名稱為空值
		openFileDialog->FileName = "";
		// 設定跳出選擇視窗的標題名稱
		openFileDialog->Title = "載入影像";
		// 設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog->FilterIndex = 1;
		// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
			// 存入 path
			stringPath = openFileDialog->FileName;
			// 將選取的檔案讀取並且存至image1
			Bitmap^ image = gray ? ColorToGray(safe_cast<Bitmap^>(Image::FromFile(stringPath))) : safe_cast<Bitmap^>(Image::FromFile(stringPath));
			// 顯示image1於PictureBox1工具上
			pictureBox->Image = image;
		}
	}

	private: System::Drawing::Bitmap^ ConvertBmpTo24Bit(Bitmap^ bitmap) {
		if (bitmap->PixelFormat != Imaging::PixelFormat::Format24bppRgb) {
			Bitmap^ bit24Image = gcnew Bitmap(bitmap->Width, bitmap->Height, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
			Graphics^ gr = Graphics::FromImage(bit24Image);
			gr->DrawImage(bitmap, Rectangle(0, 0, bitmap->Width, bitmap->Height));
			return bit24Image;
		}
		else {
			return bitmap;
		}
	}

	private: System::Drawing::Bitmap^ ColorToGray(Bitmap^ bitmap) {
		// 宣告點陣圖的格式
		Bitmap^ image = bitmap;
		// 宣告圖像區域 (設定為欲讀取、欲修正的圖像區域)
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		// 宣告為寬度的像素資訊
		int byteNumber_Width = image->Width * 3;
		// 宣告為 BitmapData 型態，表示像素值位置
		// 並Lock 欲處理的像素範圍 (避免其他程序修改該向素值)，參數一為限定像素處理範圍，參數二為設定處理模式 (讀取、寫入、讀取寫入，第三個像素為設定該像素模式bit? channel?)
		Imaging::BitmapData^ imageData = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		// 將 int 指標指向 Image 像素資料的最前面位置
		IntPtr ptr = imageData->Scan0;
		// 掃瞄寬度 - Byte 資料寬度
		int bytesOfSkip = imageData->Stride - byteNumber_Width;
		// 宣告 Byte 格式的指標
		Byte* p = (Byte *)((Void *)ptr);

		// Convert to gray scale
		for (int y = 0; y < image->Height; y++) {
			for (int x = 0; x < image->Width; x++) {
				unsigned char gray = (p[0] + p[1] + p[2]) / 3;
				p[0] = gray;
				p[1] = gray;
				p[2] = gray;
				p += 3;
			}
			p += bytesOfSkip;
		}

		image->UnlockBits(imageData);
		return image;
	}

#pragma endregion

#pragma region Project1
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// 建立 OpenFileDialog 控制項
		
			OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
			// 設定Filter，用以限定使用者開啟的檔案
			openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
			// 預設檔案名稱為空值
			openFileDialog->FileName = "";
			// 設定跳出選擇視窗的標題名稱
			openFileDialog->Title = "載入影像";
			// 設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
			openFileDialog->FilterIndex = 1;
			// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
				// 存入 path
				for (int i = 0; i < 3; i++) {
				// 將選取的檔案讀取並且存至image1
				Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));
				Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
				Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
				IntPtr ptr = imagedata1->Scan0;
				Byte* p = (Byte *)((Void *)ptr);
				// 顯示image1於PictureBox1工具上
				for (int a = 0; a < image1->Height; a++) {
					for (int b = 0; b < image1->Width; b++) {
						switch (i) {
							case 0: {
								Byte Y_n = (double)p[0] * 0.114 + (double)p[1] * 0.587 + (double)p[2] * 0.299;
								for (int j = 0; j < 3; j++) { p[j] = Y_n; }
								break;
							}
							case 1: {
								Byte I_n = (p[0] + p[1] + p[2]) / 3;
								for (int j = 0; j < 3; j++) { p[j] = I_n; }
								break;
							}
							case 2: {
								Byte Y_n = (double)p[0] * 0.114 + (double)p[1] * 0.587 + (double)p[2] * 0.299;
								Byte I_n = (p[0] + p[1] + p[2]) / 3;
								for (int j = 0; j < 3; j++) { p[j] = Math::Abs(Y_n - I_n)+128; }
								break;
							}
						}
						p += 3;
					}
				}
				image1->UnlockBits(imagedata1);
				switch (i) {
				case 0: {
					pictureBox1->Image = image1;
					break; 
				}
				case 1: {
					pictureBox2->Image = image1;
					break;
				}
				case 2: {
					pictureBox3->Image = image1;
					break;
				}
				}

			}
		}
	}


#pragma endregion
#pragma project2
	private:System::String^ picture2_filepath = "";
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		// 設定Filter，用以限定使用者開啟的檔案
		openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
		// 預設檔案名稱為空值
		openFileDialog->FileName = "";
		// 設定跳出選擇視窗的標題名稱
		openFileDialog->Title = "載入影像";
		// 設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog->FilterIndex = 1;
		// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
			picture2_filepath = openFileDialog->FileName;
			Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));
			Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
			Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
			IntPtr ptr = imagedata1->Scan0;
			Byte* p = (Byte *)((Void *)ptr);
			image1->UnlockBits(imagedata1);
			pictureBox4->Image = image1;
		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox5->Image = ZeroOrder(safe_cast<Bitmap^>(Image::FromFile(picture2_filepath)), 2);
	}
	private: System::Drawing::Bitmap^ ZeroOrder(Bitmap^ bitmap, double rate_x) {
		Bitmap^ image1 = bitmap;
		Bitmap^ image2 =ConvertBmpTo24Bit(gcnew Bitmap (image1->Width * rate_x, image1->Height * rate_x));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imagedata2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		IntPtr ptr1 = imagedata1->Scan0;
		IntPtr ptr2 = imagedata2->Scan0;
		int offset = image1->Width * 3;
		Byte* p1 = (Byte*)((Void*)ptr1);
		Byte* p2 = (Byte*)((Void*)ptr2);
		for (int y = 0; y < image2->Height; ++y) {
			for (int x = 0; x < image2->Width; ++x) {
				int z_w = (int)((double)x / rate_x);
				int z_h = (int)((double)y / rate_x);
				p1 = ((Byte *)((void *)ptr1));
				p1 += (((int)z_h) * (offset)) + ((int)z_w * 3);
				p2[0] = (Byte)p1[0];
				p2[1] = (Byte)p1[1];
				p2[2] = (Byte)p1[2];
				p2 += 3;
			}
		}
		image1->UnlockBits(imagedata1);
		image2->UnlockBits(imagedata2);
		// 返回處理完畢的圖片
		return image2;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox5->Image = FirstOrder(safe_cast<Bitmap^>(Image::FromFile(picture2_filepath)), 2);
	}
	private: System::Drawing::Bitmap^ FirstOrder(Bitmap^ bitmap, double rate_x) {
		Bitmap^ image1 = bitmap;
		Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(image1->Width * rate_x, image1->Height * rate_x));
		Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
		Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
		Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		Imaging::BitmapData^ imagedata2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
		IntPtr ptr1 = imagedata1->Scan0;
		IntPtr ptr2 = imagedata2->Scan0;
		int offset = image1->Width * 3;
		Byte* p1 = (Byte*)((Void*)ptr1);
		Byte* p2 = (Byte*)((Void*)ptr2);
		int q = 1;
		for (int y = 0; y < image1->Height*rate_x; ++y) {
			for (int x = 0; x < image1->Width*rate_x; ++x) {
				int z_w = (int)((double)x / rate_x);
				int z_h = (int)((double)y / rate_x);
				int xx = (x / rate_x) + 1;
				int yy = (y / rate_x) + 1;
				if (y >((image1->Width-1) * rate_x) - 1 || x > image1->Width * rate_x - 3) {
					break;
				}
				else {
					p2[y*(int)(image1->Width * rate_x) * 3 + x * 3 + 0] = (double)(xx - (double)(x / rate_x))*(double)(yy - (double)(y / rate_x))*p1[z_h*image1->Width * 3 + z_w * 3 + 0] + (double)((double)(x / rate_x) - z_w)*(double)(yy - (double)(y / rate_x))*p1[z_h*image1->Width * 3 + (z_w + 1) * 3 + 0] + (double)(xx - (double)(x / rate_x))*(double)((double)(y / rate_x) - z_h)*p1[((z_h + 1)*image1->Width) * 3 + (z_w * 3) + 0] /*+ (double)((double)(y / rate_x) - z_h)*(double)((double)(x / rate_x) - z_w)*p1[((z_h + 1)*image1->Width) * 3 + (z_w + 1) * 3 + 0]*/;
					p2[y*(int)(image1->Width * rate_x) * 3 + x * 3 + 1] = (double)(xx - (double)(x / rate_x))*(double)(yy - (double)(y / rate_x))*p1[z_h*image1->Width * 3 + z_w * 3 + 1] + (double)((double)(x / rate_x) - z_w)*(double)(yy - (double)(y / rate_x))*p1[z_h*image1->Width * 3 + (z_w + 1) * 3 + 1] + (double)(xx - (double)(x / rate_x))*(double)((double)(y / rate_x) - z_h)*p1[((z_h + 1)*image1->Width) * 3 + (z_w * 3) + 1] /*+ (double)((double)(y / rate_x) - z_h)*(double)((double)(x / rate_x) - z_w)*p1[((z_h + 1)*image1->Width) * 3 + (z_w + 1) * 3 + 1]*/;
					p2[y*(int)(image1->Width * rate_x) * 3 + x * 3 + 2] = (double)(xx - (double)(x / rate_x))*(double)(yy - (double)(y / rate_x))*p1[z_h*image1->Width * 3 + z_w * 3 + 2] + (double)((double)(x / rate_x) - z_w)*(double)(yy - (double)(y / rate_x))*p1[z_h*image1->Width * 3 + (z_w + 1) * 3 + 2] + (double)(xx - (double)(x / rate_x))*(double)((double)(y / rate_x) - z_h)*p1[((z_h + 1)*image1->Width) * 3 + (z_w * 3) + 2] /*+ (double)((double)(y / rate_x) - z_h)*(double)((double)(x / rate_x) - z_w)*p1[((z_h + 1)*image1->Width) * 3 + (z_w + 1) * 3 + 2]*/;
				}
				
			}
		}
		image1->UnlockBits(imagedata1);
		image2->UnlockBits(imagedata2);
		// 返回處理完畢的圖片
		return image2;
	}
#pragma endregion

#pragma project3
	private:System::String^ picture3_filepath = "";
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		int Pix[256] = { 0 };
		int Pix2[256] = { 0 };
		chart1->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart1->ChartAreas["pix"]->AxisX->Minimum = 0;
		chart2->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart2->ChartAreas["pix"]->AxisX->Minimum = 0;
		//chart2->ChartAreas["pix"]->AxisY->Maximum = 255;
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		// 設定Filter，用以限定使用者開啟的檔案
		openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
		// 預設檔案名稱為空值
		openFileDialog->FileName = "";
		// 設定跳出選擇視窗的標題名稱
		openFileDialog->Title = "載入影像";
		// 設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog->FilterIndex = 1;
		// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
			picture3_filepath = openFileDialog->FileName;
			Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));
			Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap (image1));
			Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
			Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
			Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
			Imaging::BitmapData^ imagedata2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
			IntPtr ptr = imagedata1->Scan0;
			IntPtr ptr2 = imagedata2->Scan0;
			Byte* p = (Byte *)((Void *)ptr);
			Byte* p2 = (Byte *)((Void *)ptr2);
			int pmin=255, pmax=0;
			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
						Pix[(int)p[0]] += 1;
						if (p[0] < pmin) {
							pmin = p[0];
						}
						if (p[0] > pmax) {
							pmax = p[0];
						}
					p += 3;
				}
			}
			for (int i = 0; i < 256; ++i) {
				chart1->Series["pix"]->Points->AddXY(i, Pix[i]);
			}
			image1->UnlockBits(imagedata1);
			pictureBox8->Image = image1;
			int smax = 255;
			int smin = 0;
			
			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					p2[0] = (double)(((int)p2[0] - pmin)*(smax - smin) /(pmax - pmin)) + smin;
					p2[1] = p2[0];
					p2[2] = p2[0];
					p2 += 3;
				}
			}
			p2 = (Byte *)((Void *)ptr2);
			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					Pix2[(int)p2[0]] += 1;
					p2 += 3;
				}
			}
			chart2->Series->Clear();
			chart2->Series->Add("pix");
			for (int i = 0; i < 256; ++i) {
				chart2->Series["pix"]->Points->AddXY(i,Pix2[i] );
			}
			image2->UnlockBits(imagedata2);
			pictureBox9->Image = image2;			
		}
		
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		int Pix[256] = { 0 };
		int Pix2[256] = { 0 };
		chart1->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart1->ChartAreas["pix"]->AxisX->Minimum = 0;
		chart2->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart2->ChartAreas["pix"]->AxisX->Minimum = 0;
		//chart2->ChartAreas["pix"]->AxisY->Maximum = 255;
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		// 設定Filter，用以限定使用者開啟的檔案
		openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
		// 預設檔案名稱為空值
		openFileDialog->FileName = "";
		// 設定跳出選擇視窗的標題名稱
		openFileDialog->Title = "載入影像";
		// 設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog->FilterIndex = 1;
		// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
			picture3_filepath = openFileDialog->FileName;
			Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));
			Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(image1));
			Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
			Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
			Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
			Imaging::BitmapData^ imagedata2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
			IntPtr ptr = imagedata1->Scan0;
			IntPtr ptr2 = imagedata2->Scan0;
			Byte* p = (Byte *)((Void *)ptr);
			Byte* p2 = (Byte *)((Void *)ptr2);
			int pmin = 255, pmax = 0;
			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					Pix[(int)p[0]] += 1;
					if (p[0] < pmin) {
						pmin = p[0];
					}
					if (p[0] > pmax) {
						pmax = p[0];
					}
					p += 3;
				}
			}
			for (int i = 0; i < 256; ++i) {
				chart1->Series["pix"]->Points->AddXY(i, Pix[i]);
			}
			image1->UnlockBits(imagedata1);
			pictureBox8->Image = image1;
			int smax = 100;
			int smin = 0;

			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					p2[0] = (double)((double)(smax - smin) / (pmax - pmin))*((int)p2[0] - pmin) + smin;
					p2[1] = p2[0];
					p2[2] = p2[0];
					p2 += 3;
				}
			}
			p2 = (Byte *)((Void *)ptr2);
			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					Pix2[(int)p2[0]] += 1;
					p2 += 3;
				}
			}
			for (int i = 0; i < 256; ++i) {
				chart2->Series["pix"]->Points->AddXY(i, Pix2[i]);
			}
			image2->UnlockBits(imagedata2);
			pictureBox9->Image = image2;
		}
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		int Pix[256] = { 0 };
		int Pix2[256] = { 0 };
		int Pix3[256] = { 0 };
		int Pix4[256] = { 0 };
		chart1->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart1->ChartAreas["pix"]->AxisX->Minimum = 0;
		chart2->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart2->ChartAreas["pix"]->AxisX->Minimum = 0;
		//chart2->ChartAreas["pix"]->AxisY->Maximum = 255;
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		// 設定Filter，用以限定使用者開啟的檔案
		openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
		// 預設檔案名稱為空值
		openFileDialog->FileName = "";
		// 設定跳出選擇視窗的標題名稱
		openFileDialog->Title = "載入影像";
		// 設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog->FilterIndex = 1;
		// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
			picture3_filepath = openFileDialog->FileName;
			Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));
			Bitmap^ image2 = ConvertBmpTo24Bit(gcnew Bitmap(image1));
			Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
			Rectangle rect2 = Rectangle(0, 0, image2->Width, image2->Height);
			Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
			Imaging::BitmapData^ imagedata2 = image2->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
			IntPtr ptr = imagedata1->Scan0;
			IntPtr ptr2 = imagedata2->Scan0;
			Byte* p = (Byte *)((Void *)ptr);
			Byte* p2 = (Byte *)((Void *)ptr2);

			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					Pix[(int)p[0]] += 1;
					 
					p += 3;
				}
			}
			for (int i = 0; i < 256; ++i) {
				chart1->Series["pix"]->Points->AddXY(i, Pix[i]);
			}
			image1->UnlockBits(imagedata1);
			pictureBox8->Image = image1;
			for (int a = 0; a < 256; ++a) {
				if (a == 0) {
					Pix3[a] = 255*(double)(Pix[a] / (image1->Height*image1->Width));
					Pix4[a] = Pix[a];
				}
				else {
					Pix3[a]= (double)255*/*(double)*/(Pix[a]+Pix4[a-1])/ /*(double)*/(image1->Height*image1->Width);
					Pix4[a] = Pix4[a - 1] + Pix[a];
				}
			}
			/*for (int i = 0; i < 256; ++i) {
				chart1->Series["pix"]->Points->AddXY(i, Pix4[i]);
			}*/
			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					p2[0] = Pix3[p2[0]];
					p2[1] = p2[0];
					p2[2] = p2[0];
					p2 += 3;
				}
			}
			p2 = (Byte *)((Void *)ptr2);
			for (int a = 0; a < imagedata1->Height; ++a) {
				for (int b = 0; b < imagedata1->Width; ++b) {
					Pix2[(int)p2[0]] += 1;
					p2 += 3;
				}
			}
			for (int i = 0; i < 256; ++i) {
				chart2->Series["pix"]->Points->AddXY(i, Pix2[i]);
			}
			image2->UnlockBits(imagedata2);
			pictureBox9->Image = image2;
		}
	}
#pragma endregion



private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
	projectbox->Width = this->Width;
	projectbox->Height = this->Height - 40;
}
#pragma project3
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox11->Image = Gaussian_noise(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture4filepath))), 50);
	}
	private: System::Drawing::Bitmap^ Gaussian_noise(Bitmap^ bmpSrc, float rang) {
		int pixp[256] = { 0 }, pixn[256] = { 0 };
		/*chart4->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart4->ChartAreas["pix"]->AxisX->Minimum = -255;*/
		Bitmap^ image = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		Imaging::BitmapData^ imagedata = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imagedata->Scan0;
		Byte* p = (Byte *)((Void *)ptr);
		float sqrt_12 = (float)3.464f;
		float sqrt_10 = (float)3.162f;
		float fGaussianValue;
		float mean=0;
		fGaussianValue = (sqrt_12 * rang) / sqrt_10;
		float noise;
		float pixel;
		for(int i=0;i<image->Height;++i){
			for (int j = 0; j < image->Width; ++j) {
				float total = 0;
				for (int i = 0; i < 10; i++) { total += (float)(((float)rand()) / (RAND_MAX + 1) - 0.5f); }
				noise = (float)((fGaussianValue * total) + mean);
				if (noise < 0) {
					int qq = -noise;
					pixp[qq] += 1;
				}
				else {
					pixn[(int)noise] += 1;
				}
				for (int i = 0; i < 3; i++) {
					pixel = noise + p[i];
					if (pixel > 255) {
						pixel = 255;
					}
					else if (pixel < 0) {
						pixel = 0;
					}
					p[i] = (Byte)pixel;
				}
				p += 3;
			}
		}
		for (int i = -255; i < 0; ++i) {
			int j = -i;
			chart4->Series["Pix"]->Points->AddXY(i, pixp[j]);
		}
		for (int i = 0; i < 256; ++i) {
			chart4->Series["Pix"]->Points->AddXY(i, pixn[i]);
		}
		
		
		image->UnlockBits(imagedata);
		return image;
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox11->Image=ImpulseNoise(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture4filepath))), 0.05, 0.05);
	}
	private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		// 設定Filter，用以限定使用者開啟的檔案
		openFileDialog->Filter = "點陣圖 (*.bmp)|*.bmp|All files (*.*)|*.*";
		// 預設檔案名稱為空值
		openFileDialog->FileName = "";
		// 設定跳出選擇視窗的標題名稱
		openFileDialog->Title = "載入影像";
		// 設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog->FilterIndex = 1;
		// 跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog->FileName->Length > 0) {
			picture4filepath = openFileDialog->FileName;
			Bitmap^ image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog->FileName));
			Rectangle rect1 = Rectangle(0, 0, image1->Width, image1->Height);
			Imaging::BitmapData^ imagedata1 = image1->LockBits(rect1, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
			IntPtr ptr = imagedata1->Scan0;
			Byte* p = (Byte *)((Void *)ptr);
			image1->UnlockBits(imagedata1);
			pictureBox10->Image = image1;
		}
	}
	private: System::Drawing::Bitmap^ ImpulseNoise(Bitmap^ bmpSrc, float saltPercent, float pepperPercent) {
		chart4->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart4->ChartAreas["pix"]->AxisX->Minimum = 0;
		Bitmap^ image = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		Imaging::BitmapData^ imagedata = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imagedata->Scan0;
		Byte* p = (Byte *)((Void *)ptr);
		bool forn[262144] = { false };
		int salt = 0;
		int pepper = 255;
		int a = (image->Height*image->Width)*(saltPercent + pepperPercent);
		int b = a;
		int sa = 0, pea = 0;
		int offer;
		int rah = 0, raw = 0;
		int pix[256] = { 0 };
		while (1) {
			rah = rand() % image->Height;
			raw = rand() % image->Width;
			if (forn[rah*image->Width + raw]==false) {

				offer = rah*image->Width*3 + raw * 3;
				if (rand() % 2==0) {
					if (sa == (a / 2)) {
						p[offer] = pepper;
						p[offer + 1] = p[offer];
						p[offer + 2] = p[offer];
						pea += 1;
					}
					else {
						p[offer] = salt;
						p[offer + 1] = p[offer];
						p[offer + 2] = p[offer];
						sa += 1;
					}
				}
				else {
					if (pea == (a / 2)) {
						p[offer] = salt;
						p[offer + 1] = p[offer];
						p[offer + 2] = p[offer];
						sa += 1;
					}
					else {
						p[offer] = pepper;
						p[offer + 1] = p[offer];
						p[offer + 2] = p[offer];
						pea += 1;
					}
				}
				forn[rah*image->Width + raw] = true;
				pix[p[offer]] += 1;
				b -= 1;
			}
			if (b == 0) {
				break;
			}
		}
		chart4->Series["Pix"]->Points->AddXY(0, pix[0]);
		chart4->Series["Pix"]->Points->AddXY(255, pix[255]);
		image->UnlockBits(imagedata);
		return image;
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox11->Image = Uniform_noise(ColorToGray(safe_cast<Bitmap^>(Image::FromFile(picture4filepath))), 500);
	}
	private: System::Drawing::Bitmap^ Uniform_noise(Bitmap^ bmpSrc, int a) {
		chart4->ChartAreas["pix"]->AxisX->Maximum = 255;
		chart4->ChartAreas["pix"]->AxisX->Minimum = 0;
		Bitmap^ image = ConvertBmpTo24Bit(gcnew Bitmap(bmpSrc));
		Rectangle rect = Rectangle(0, 0, image->Width, image->Height);
		Imaging::BitmapData^ imagedata = image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image->PixelFormat);
		IntPtr ptr = imagedata->Scan0;
		Byte* p = (Byte *)((Void *)ptr);
		int noise = (image->Width*image->Height)*(a / 1000.0f);
		int noiseb = noise;
		bool forn[262144] = { false };
		int nran = 210;
		int nranmin = 50;
		int sa = 0, pea = 0;
		int offer;
		int rah = 0, raw = 0;
		int pix[256] = { 0 };
		while (1) {
			rah = rand() % image->Height;
			raw = rand() % image->Width;
			if (forn[rah*image->Width + raw] == false) {

				offer = rah*image->Width * 3 + raw * 3;
				p[offer] = rand() % (nran - nranmin) + nranmin;
				p[offer + 1] = p[offer];
				p[offer + 2] = p[offer];
				pix[p[offer]] += 1;
				forn[rah*image->Width + raw] = true;
				noiseb -= 1;
			}
			if (noiseb == 0) {
				break;
			}
		}
		for (int i = nranmin; i < nran; i++) {
			chart4->Series["Pix"]->Points->AddXY(i, pix[i]);
		}
		image->UnlockBits(imagedata);
		return image;
	}
#pragma endregion





};
}
