#pragma once
#include <iostream>
#include <vector>
#include <iomanip>


namespace labTerVer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace ZedGraph;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(45, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 183);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"введите количество экспериментов";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(58, 313);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(210, 138);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(551, 256);
			this->dataGridView1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(752, 123);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(767, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(486, 397);
			this->zedGraphControl1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Кол-во интервалов";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(31, 290);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(128, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Проверить гипотезу";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 240);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 267);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Уровень значимости";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(210, 400);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(551, 177);
			this->dataGridView2->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(45, 358);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 361);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"R0";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(45, 385);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(151, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"F(R0)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(8, 412);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(2, 22);
			this->label6->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1257, 589);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:int Random(int b) {
		return 1 + rand() % b; // return first_value + rand() % last_value;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		using namespace std;
		if (dataGridView1->Rows->Count != 0) {
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();
			dataGridView2->Rows->Clear();
			dataGridView2->Columns->Clear();
		}
		int n = Convert::ToInt32(textBox1->Text);

		double count_0 = 0; // частота выпадания 
		double count_1 = 0;
		double count_2 = 0;
		double count_3 = 0;
		vector<int> x(n);
		srand(time(0)); // автоматическая рандомизация
		for (int i = 0; i < n; i++) {
			int main_count = 0;
			if (Random(36) <= 16) { main_count++; }
			if (Random(27) <= 12) { main_count++; }
			if (Random(32) <= 12) { main_count++; }
			x[i] = main_count;

			if (main_count == 0) { count_0++; }
			else if (main_count == 1) { count_1++; }
			else if (main_count == 2) { count_2++; }
			else count_3++;
		}
		double ch_0 = count_0 / n;
		double ch_1 = count_1 / n;
		double ch_2 = count_2 / n;
		double ch_3 = count_3 / n;
		double temp = 0;
		for (int i = 0; i < x.size() - 1; i++) {
			for (int j = 0; j < x.size() - i - 1; j++) {
				if (x[j] > x[j + 1]) {
					// меняем элементы местами
					temp = x[j];
					x[j] = x[j + 1];
					x[j + 1] = temp;
				}
			}
		}

		double M = 1.15586419;

		double P_0 = 0.19290123;
		double P_1 = 0.42438272;
		double P_2 = 0.30864198;
		double P_3 = 0.07407407;
		vector<double> AllP;
		AllP.push_back(P_0);
		AllP.push_back(P_1);
		AllP.push_back(P_2);
		AllP.push_back(P_3);
		vector<double> AllCh;
		AllCh.push_back(ch_0);
		AllCh.push_back(ch_1);
		AllCh.push_back(ch_2);
		AllCh.push_back(ch_3);
		int max_x = 0;
		int min_x = 3;
		for (int i = 0; i < n; i++) {
			if (max_x < x[i]) { max_x = x[i]; }
			if (min_x > x[i]) { min_x = x[i]; }
		}
		int R = max_x - min_x; // Размах выборки

		double max_M = 0; // Максимальное отклонение
		temp = fabs(P_0 - ch_0);
		if (max_M < temp) { max_M = temp; }
		temp = fabs(P_1 - ch_1);
		if (max_M < temp) { max_M = temp; }
		temp = fabs(P_1 - ch_1);
		if (max_M < temp) { max_M = temp; }
		temp = fabs(P_2 - ch_2);
		if (max_M < temp) { max_M = temp; }
		temp = fabs(P_3 - ch_3);
		if (max_M < temp) { max_M = temp; }


		// выборочное среднее
		double x_vib = 0;
		for (int i = 0; i < n; i++) {
			x_vib += x[i];
		}
		x_vib /= n;


		// Дисперсия
		const double D = 0.98959525;

		double mathExpSqrt = 0;
		for (int i = 0; i < 4; i++) {
			mathExpSqrt += i * i * AllCh[i];
		}

		//Выборочная дисперсия
		double S = 0;
		for (int i = 0; i < x.size(); i++) {
			S += pow((x[i] - x_vib), 2);
		}
		S = mathExpSqrt - M * M;


		//Разность мат ожидания и среднего
		double razn_M = fabs(M - x_vib);


		// Разность дисперсий
		double razn_D = fabs(D - S);


		//Медиана
		double Me = 0;
		int k = 0;
		if (n % 2 == 0) {
			k = n / 2;
			Me = (x[k - 1] + x[k]) / 2.0;
			//Me = 3.0 / 2.0;
			Me = round(Me);
		}
		else {
			k = (n - 1) / 2;
			Me = x[k];
		}

		for (int i = 0; i < 5; i++) {
			dataGridView1->Columns->Add("", "");
			for (int j = 0; j < 3; j++) {
				dataGridView1->Rows->Add("", "");
			}
		}
		double razn_0 = fabs(P_0 - ch_0);
		double razn_1 = fabs((P_0 + P_1) - (ch_0 + ch_1));
		double razn_2 = fabs((P_0 + P_1 + P_2) - (ch_0 + ch_1 + ch_2));
		double razn_3 = fabs((P_0 + P_1 + P_2 + P_3) - (ch_0 + ch_1 + ch_2 + ch_3));
		vector<double> test;
		test.push_back(razn_0);
		test.push_back(razn_1);
		test.push_back(razn_2);
		test.push_back(razn_3);
		double maxrazn = 0;
		for (int i = 0; i < 4; i++) {
			if (test[i] > maxrazn)
				maxrazn = test[i];
		}
		dataGridView1->Rows[0]->Cells[0]->Value = "yi";
		dataGridView1->Rows[1]->Cells[0]->Value = "nj";
		dataGridView1->Rows[2]->Cells[0]->Value = "nj/n";

		dataGridView1->Rows[0]->Cells[1]->Value = "0";
		dataGridView1->Rows[0]->Cells[2]->Value = "1";
		dataGridView1->Rows[0]->Cells[3]->Value = "2";
		dataGridView1->Rows[0]->Cells[4]->Value = "3";

		dataGridView1->Rows[1]->Cells[1]->Value = count_0;
		dataGridView1->Rows[1]->Cells[2]->Value = count_1;
		dataGridView1->Rows[1]->Cells[3]->Value = count_2;
		dataGridView1->Rows[1]->Cells[4]->Value = count_3;

		dataGridView1->Rows[2]->Cells[1]->Value = ch_0;
		dataGridView1->Rows[2]->Cells[2]->Value = ch_1;
		dataGridView1->Rows[2]->Cells[3]->Value = ch_2;
		dataGridView1->Rows[2]->Cells[4]->Value = ch_3;


		String^ s;
		s = "Математическое ожидание:" + Convert::ToString(M) + "\n\n";
		s += "Размах выборки: " + Convert::ToString(R) + "\n\n";
		s += "Максимальное отклонение: " + Convert::ToString(max_M) + "\n\n";
		s += "Выборочное среднее:" + Convert::ToString(x_vib) + "\n\n";
		s += "Дисперсия: " + Convert::ToString(D) + "\n\n";
		//s+="Параметр метода: ";
		s += "Выборочная дисперсия: " + Convert::ToString(S) + "\n\n";
		s += "Разность мат ожидания и среднего: " + Convert::ToString(razn_M) + "\n\n";
		s += "Разность дисперсий: " + Convert::ToString(razn_D) + "\n\n";
		s += "Медиана: " + Convert::ToString(Me) + "\n\n";
		s += "Максимальная разность: " + Convert::ToString(maxrazn) + "\n\n";


		this->Load_Graw();
		//this->Draw();

		LineItem^ F1Curve = (LineItem^)zedGraphControl1->GraphPane->CurveList[0];
		LineItem^ F2Curve = (LineItem^)zedGraphControl1->GraphPane->CurveList[1];
		//LineItem^ F3Curve = (LineItem^)zedGraphControl1->GraphPane->CurveList[2];
		IPointListEdit^ list1 = (IPointListEdit^)F1Curve->Points;
		IPointListEdit^ list2 = (IPointListEdit^)F2Curve->Points;
		//IPointListEdit^ list3 = (IPointListEdit^)F3Curve->Points;
		for (unsigned int i = 0; i < 400; i++)
		{
			if (i < 101) {
				list1->Add((double)(i) / 100, P_0);
				list2->Add((double)(i) / 100, ch_0);
			}

			if ((i > 100) && (i < 201)) {
				list1->Add((double)(i) / 100, P_1 + P_0);
				list2->Add((double)(i) / 100, ch_1 + ch_0);
			}

			if ((i > 200) && (i < 301)) {
				list1->Add((double)(i) / 100, P_2 + P_1 + P_0);
				list2->Add((double)(i) / 100, ch_2 + ch_1 + ch_0);
			}

			if (i > 300) {
				list1->Add((double)(i) / 100, P_3 + P_2 + P_1 + P_0);
				list2->Add((double)(i) / 100, ch_3 + ch_2 + ch_1 + ch_0);
			}


		}
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
		//делим на отрезки
		if (radioButton1->Checked) {
			bool checkGip = false;
			vector<vector<double>> segments;
			int k = Convert::ToInt32(textBox2->Text);
			//k--;
			double a = Convert::ToDouble(textBox3->Text);
			if (k == 1) {
				vector<double> temp;
				temp.push_back(0);
				temp.push_back(3);
				temp.push_back(1);
				temp.push_back(n);
				segments.push_back(temp);
				checkGip = true;
			}
			if (k == 2) {
				vector<double> temp;
				temp.push_back(0);
				temp.push_back(1.5);
				temp.push_back(P_0 + P_1);
				temp.push_back(count_0 + count_1);
				segments.push_back(temp);
				vector<double> temp1;
				temp1.push_back(1.5);
				temp1.push_back(3);
				temp1.push_back(P_2 + P_3);
				temp1.push_back(count_2 + count_3);
				segments.push_back(temp1);
			}
			if (k == 3) {
				vector<double> temp;
				temp.push_back(0);
				temp.push_back(0.99999);
				temp.push_back(P_0);
				temp.push_back(count_0);
				segments.push_back(temp);
				vector<double> temp1;
				temp1.push_back(1);
				temp1.push_back(1.9999);
				temp1.push_back(P_1 );
				temp1.push_back(count_1 );
				segments.push_back(temp1);
				vector<double> temp2;
				temp2.push_back(2);
				temp2.push_back(3);
				temp2.push_back(P_2+P_3);
				temp2.push_back(count_2+count_3);
				segments.push_back(temp2);
			}
			if (k == 4) {
				vector<double> temp;
				temp.push_back(0);
				temp.push_back(0.99999);
				temp.push_back(P_0);
				temp.push_back(count_0);
				segments.push_back(temp);
				vector<double> temp1;
				temp1.push_back(1);
				temp1.push_back(1.99999);
				temp1.push_back(P_1);
				temp1.push_back(count_1);
				segments.push_back(temp1);
				vector<double> temp2;
				temp2.push_back(2);
				temp2.push_back(2.9999);
				temp2.push_back(P_2);
				temp2.push_back(count_2);
				segments.push_back(temp2);
				vector<double> temp3;
				temp3.push_back(2.9999);
				temp3.push_back(3);
				temp3.push_back(P_3);
				temp3.push_back(count_3);
				segments.push_back(temp3);
			}
			for (int i = 0; i < segments.size() + 1; i++) {
				dataGridView2->Columns->Add("", "");
				for (int j = 0; j < 4; j++) {
					dataGridView2->Rows->Add("", "");
				}

			}
			dataGridView2->Rows[0]->Cells[0]->Value = "x0";
			dataGridView2->Rows[1]->Cells[0]->Value = "x1";
			dataGridView2->Rows[2]->Cells[0]->Value = "qk";
			dataGridView2->Rows[3]->Cells[0]->Value = "колво попаданий";


			for (int i = 0; i < segments.size(); i++) {
				dataGridView2->Rows[0]->Cells[i + 1]->Value = segments[i][0];
				dataGridView2->Rows[1]->Cells[i + 1]->Value = segments[i][1];
				dataGridView2->Rows[2]->Cells[i + 1]->Value = segments[i][2];
				dataGridView2->Rows[3]->Cells[i + 1]->Value = segments[i][3];
			}

			//считаем qj
			double R0 = 0;
			vector<double> qj;
			double q = 0;
			for (int i = 0; i < segments.size(); i++) {
				q += segments[i][2];
				qj.push_back(q);
			}

			//считаем R0
			for (int i = 0; i < segments.size(); i++) {
				double tex = (double)n * qj[i];
				R0 += pow((segments[i][3] - (double)n * segments[i][2]), 2) / ((double)n * segments[i][2]);
			}
			//R0 /= 100;
			textBox4->Text = Convert::ToString(R0);
			double r = segments.size() - 1;
			double FR0 = F0(R0,r);
			textBox5->Text = Convert::ToString(FR0);
			if (FR0 > a) {
				label6->Text = "Гипотеза принята";
			}
			else {
				label6->Text = "Гипотеза не принята";
			}
		}
		MessageBox::Show(s, "Результаты решения задачи", MessageBoxButtons::OK);

	}
	private: void Draw() {
		double P_0 = 0.19290123;
		double P_1 = 0.42438272;
		double P_2 = 0.30864198;
		double P_3 = 0.07407407;
		LineItem^ F1Curve = (LineItem^)zedGraphControl1->GraphPane->CurveList[0];
		LineItem^ F2Curve = (LineItem^)zedGraphControl1->GraphPane->CurveList[1];
		LineItem^ F3Curve = (LineItem^)zedGraphControl1->GraphPane->CurveList[2];
		IPointListEdit^ list1 = (IPointListEdit^)F1Curve->Points;
		IPointListEdit^ list2 = (IPointListEdit^)F2Curve->Points;
		IPointListEdit^ list3 = (IPointListEdit^)F3Curve->Points;
		for (unsigned int i = 0; i < 400; i++)
		{
			if (i < 101)
				list1->Add((double)(i) / 100, P_0);
			if ((i > 100) && (i < 201))
				list1->Add((double)(i) / 100, P_1);
			if ((i > 200) && (i < 301))
				list1->Add((double)(i) / 100, P_2);
			if (i > 300)
				list1->Add((double)(i) / 100, P_3);

		}
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
	}
	public: void Load_Graw(void)
	{
		// Получим панель для рисования
		ZedGraph::GraphPane^ myPane = zedGraphControl1->GraphPane;
		// Очистим список кривых на тот случай, если до этого сигналы уже были нарисованы
		myPane->CurveList->Clear();
		myPane->GraphObjList->Clear();
		//Запрет на самосогласования и выход за установленные границы
		myPane->XAxis->Scale->MaxGrace = 0;
		myPane->XAxis->Scale->MinGrace = 0;
		myPane->YAxis->Scale->MaxGrace = 0;
		myPane->YAxis->Scale->MinGrace = 0;
		// Подписи к графику и к осям 
		// Установим размеры шрифтов для подписей по осям
		myPane->XAxis->Title->FontSpec->Size = 14;
		myPane->YAxis->Title->FontSpec->Size = 14;
		// Установим размеры шрифта для легенды
		myPane->Legend->FontSpec->Size = 12;
		// Установим размеры шрифта для общего заголовка
		myPane->Title->FontSpec->Size = 13;
		myPane->Title->FontSpec->FontColor = System::Drawing::Color::Black;
		myPane->Title->Text = "";
		myPane->XAxis->Title->Text = "";
		myPane->YAxis->Title->Text = "";
		//Установка фона панели графиков (не рабочая часть)
		myPane->Fill->Color = System::Drawing::Color::LightGray;
		//Установка фона панели отображения графиков
		myPane->Chart->Fill = gcnew Fill(Color::White, Color::White, 0);
		//Установка границы вывода графиков
		myPane->Chart->Border->Color = System::Drawing::Color::Black;
		// Устанавливаем интересующий нас интервал по оси X
		myPane->XAxis->Scale->Min = 0;
		myPane->XAxis->Scale->Max = 4;
		//Ручная установка шага оси Х -  1 В 
		myPane->XAxis->Scale->MinorStep = 0.1;
		myPane->XAxis->Scale->MajorStep = 1;
		// Устанавливаем интересующий нас интервал по оси Y - значения в мА от -10 до 100 мА
		myPane->YAxis->Scale->Min = 0;
		myPane->YAxis->Scale->Max = 1.1;
		myPane->YAxis->Scale->MinorStep = 0.1;
		myPane->YAxis->Scale->MajorStep = 1;
		//Установка оси "Y" ровно по оси "Х" 0.0
		//myPane->YAxis->Cross = 0.0;
		//Устанавливаем метки только возле осей!
		myPane->XAxis->MajorTic->IsOpposite = false;
		myPane->XAxis->MinorTic->IsOpposite = false;
		myPane->YAxis->MajorTic->IsOpposite = false;
		myPane->YAxis->MinorTic->IsOpposite = false;
		//Рисуем сетку по X
		myPane->XAxis->MajorGrid->IsVisible = true;
		myPane->XAxis->MajorGrid->DashOn = 5;
		myPane->XAxis->MajorGrid->DashOff = 5;
		myPane->XAxis->MajorGrid->Color = System::Drawing::Color::Gray;
		myPane->XAxis->Color = System::Drawing::Color::Gray;
		//Рисуем сетку по Y
		myPane->YAxis->MajorGrid->IsVisible = true;
		myPane->YAxis->MajorGrid->DashOn = 5;
		myPane->YAxis->MajorGrid->DashOff = 5;
		myPane->YAxis->MajorGrid->Color = System::Drawing::Color::Gray;
		myPane->YAxis->Color = System::Drawing::Color::Gray;
		//******************************************************************************
		// Добавляем информацию по регистрам вывода точек
		//******************************************************************************
		// Делаем 1 временных массива по 200 точек - 
		RollingPointPairList^ list1 = gcnew RollingPointPairList(1000);
		RollingPointPairList^ list2 = gcnew RollingPointPairList(1000);
		RollingPointPairList^ list3 = gcnew RollingPointPairList(1000);
		// Выводим пустые линии графиков на экран
		LineItem^ F1Curve = myPane->AddCurve("Теоретическое распределение", list1, Color::Blue, SymbolType::None);
		LineItem^ F2Curve = myPane->AddCurve("Эмпирическая функция распределения", list2, Color::Red, SymbolType::None);
		//LineItem^ F3Curve = myPane->AddCurve("3 Канал", list3, Color::Green, SymbolType::None);
		//Ширина линии в 1/72 дюйма!!!!!!!!!! Хорошо получается при 2!!!!!!!!!
		F1Curve->Line->Width = 2;
		F2Curve->Line->Width = 2;
		//F3Curve->Line->Width = 2;
		//Задаем что линии гладкии!!!!!!!

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
	
	}
		  double Hi_2(double x,double r) {
			  if (x > 0)
				  return pow(2, -r / 2) * pow(tgamma(r / 2), -1) * pow(x, r / 2 - 1) * exp(-x / 2);
			  else
				  return 0;
		  }

		  double integral(double _r,double r) {
			  double I = 0;
			  double n = 1000;
			  for (double i = 0; i < n; i++) {
				  I += (Hi_2(_r * (i - 1) / n,r) + Hi_2(_r * i / n,r)) * _r / (2 * n);
			  }
			  return I;
		  }
		  //  Методичка страница 18
		  public:double F0(double _r,double r) {
			  return 1 - integral(_r,r);
		  }

};
}
