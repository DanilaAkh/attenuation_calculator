#pragma once
#include <math.h>

namespace calculator {

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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"В городе", L"В пригороде", L"В свободном пространстве",
					L"Над плоской землей"
			});
			this->comboBox1->Location = System::Drawing::Point(31, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Выберите местность";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(31, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 29);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(31, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Частота в мГц";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(34, 506);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 45);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(34, 557);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(28, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Высота базовой станции в м ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(31, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 29);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(31, 186);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 29);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(28, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Высота мобильной станции в м";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(31, 239);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(244, 29);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(28, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(257, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Расстояние между МС и БС в км";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(30, 408);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Затухание = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(155, 408);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 18);
			this->label6->TabIndex = 12;
			this->label6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(194, 408);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 18);
			this->label7->TabIndex = 13;
			this->label7->Text = L"дБ";
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(214, 12);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(143, 21);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->Text = L"Выберите модель";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(30, 294);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(244, 29);
			this->textBox5->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(28, 275);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 18);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Коэф. усиления БС";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(28, 335);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Коэф. усиления МС";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(30, 354);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(244, 29);
			this->textBox6->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(380, 634);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор затухания";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Проверка на неправильность ввода
		bool protect()
		{
			double f, ms, bs, r;
			if (((textBox1->Text->Length == 0) && (comboBox2->SelectedItem != "Модель Ли") && (comboBox2->SelectedItem != "Модель Олсбрука-Парсона") && (comboBox2->SelectedItem != "Двухлучевая модель")) || ((textBox2->Text->Length == 0) && (comboBox2->SelectedItem != "Модель Олсбрука-Парсона") && (comboBox2->SelectedItem != "Модель Уолфиша-Икегами")) || ((textBox3->Text->Length == 0) && (comboBox2->SelectedItem != "Модель Олсбрука-Парсона") && (comboBox2->SelectedItem != "Модель Ли") && (comboBox2->SelectedItem != "Модель Уолфиша-Икегами")) || (textBox4->Text->Length == 0)) { return false; }
			for (int i = 0; i < textBox1->Text->Length; i++)
			{
				if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',')) {}
				else { return false; }
			}
			for (int i = 0; i < textBox2->Text->Length; i++)
			{
				if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',')) {}
				else { return false; }
			}
			for (int i = 0; i < textBox3->Text->Length; i++)
			{
				if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == ',')) {}
				else { return false; }
			}
			for (int i = 0; i < textBox4->Text->Length; i++)
			{
				if ((textBox4->Text[i] >= '0') && (textBox4->Text[i] <= '9') || (textBox4->Text[i] == ',')) {}
				else { return false; }
			}
			for (int i = 0; i < textBox5->Text->Length; i++)
			{
				if ((textBox5->Text[i] >= '0') && (textBox5->Text[i] <= '9') || (textBox5->Text[i] == ',')) {}
				else { return false; }
			}
			for (int i = 0; i < textBox6->Text->Length; i++)
			{
				if ((textBox6->Text[i] >= '0') && (textBox6->Text[i] <= '9') || (textBox6->Text[i] == ',')) {}
				else { return false; }
			}
			if (comboBox1->Text == "Выберите местность" || comboBox2->Text == "Выберите модель")
				return false;
			if ((comboBox2->SelectedItem != "Модель Олсбрука-Парсона") && (comboBox2->SelectedItem != "Модель Ли") && (comboBox2->SelectedItem != "Двухлучевая модель"))
				f = System::Convert::ToDouble(textBox1->Text);
			if ((comboBox2->SelectedItem != "Модель Олсбрука-Парсона") && (comboBox2->SelectedItem != "Модель Ли") && (comboBox2->SelectedItem != "Модель Уолфиша-Икегами"))
			{
				bs = System::Convert::ToDouble(textBox2->Text);
				ms = System::Convert::ToDouble(textBox3->Text);
			}
			r = System::Convert::ToDouble(textBox4->Text);
			if (((comboBox2->Text == "Модель Hata") || (comboBox2->Text == "Модель Okumura-Hata")) && ((f < 150) || (f > 1500) || (ms < 1) || (ms > 10) || (bs < 30) || (bs > 200) || (r < 1) || (r > 20)))
				return false;
			if ((comboBox2->Text == "Модель COST 231-Hata") && ((f < 1500) || (f > 2000) || (ms < 1) || (ms > 10) || (bs < 30) || (bs > 200) || (r < 1) || (r > 20)))
				return false;
			return true;
		}

		//Модель распространения Хата и Окумура-Хата
		//f - частота, ms - мобильная станция, bs - базовая станция, r - расстояние между bs и ms
		double ModelHata(double f, double ms, double bs, double r)
		{
			double L, a, Lg;
			if (comboBox1->Text == "В городе")
			{
				if (f <= 400)
					a = 8.29 * (log10(1.54 * ms) * log10(1.54 * ms)) - 1.1;
				else
					a = 3.2 * (log10(11.75 * ms) * log10(11.75 * ms)) - 4.97;
				L = 69.55 + 26.16 * log10(f) - 13.82 * log10(bs) - a + (44.9 - 6.55 * log10(bs)) * log10(r);
			}
			else
				if (comboBox1->Text == "В пригороде")
				{
					a = ((1.1 * log10(f)) - 0.7) * ms - ((1.56 * log10(f)) - 0.8);
					Lg = 69.55 + 26.16 * log10(f) - 13.82 * log10(bs) - a + (44.9 - 6.55 * log10(bs)) * log10(r);
					L = Lg - 2 * (log10(f / 28) * log10(f / 28)) - 5.4;
				}
				else
					if (comboBox1->Text == "В свободном пространстве")
					{
						a = ((1.1 * log10(f)) - 0.7) * ms - ((1.56 * log10(f)) - 0.8);
						Lg = 69.55 + 26.16 * log10(f) - 13.82 * log10(bs) - a + (44.9 - 6.55 * log10(bs)) * log10(r);
						L = Lg - 4.78 * (log10(f) * log10(f)) + 18.33 * (log10(f)) - 40.94;
					}
			return L;
		}

		//Модель COST 231-Hata
		//c - коэффициент города
		double  CostHata(double f, double ms, double bs, double r)
		{
			double L, a, c;
			if (comboBox1->SelectedItem == "В городе")
			{
				c = 3;
				a = ((1.1 * log10(f)) - 0.7) * ms - ((1.56 * log10(f)) - 0.8);
				L = 46.3 + 33.9 * log10(f) - 13.82 * log10(bs) - a + (44.9 - 6.55 * log10(bs)) * log10(r) + c;
			}
			else
			{
				c = 0;
				a = ((1.1 * log10(f)) - 0.7) * ms - ((1.56 * log10(f)) - 0.8);
				L = 46.3 + 33.9 * log10(f) - 13.82 * log10(bs) - a + (44.9 - 6.55 * log10(bs)) * log10(r) + c;
			}
			return L;
		}
		//Модель Олсбрука-Парсона
		double ModelOlsPar(double f, double ms, double bs, double r)
		{
			double L;
			if (comboBox1->Text == "В свободном пространстве")
				L = 32.45 + 20 * log10(f) + log10(r);
			else
			{
				L = 120 - 20 * log10(ms) - 20 * log10(bs) + 40 * log10(r);
			}
			return L;
		}
		//Модель Ли
		double ModelLi(double f, double ms, double bs, double r)
		{
			double L;
			L = 129.5 - 20 * log10(bs) + 39.4 * log10(r);
			return L;
		}
		//Модель Уолфиша-Икегами
		double ModelUolf_Ikeg(double f, double ms, double bs, double r)
		{
			double L;
			L = 42.6 + 26 * log10(r) + 20 * log10(f) ;
			return L;
		}
		//Двухлучевая модель
		double ModelDBeam(double f, double ms, double bs, double r, double G1, double G2)
		{
			double L;
			L = -10 * log10(G1) - 10 * log10(G2) - 20 * log10(ms * bs) + 40 * log10(r);
			return L;
		}

#pragma endregion
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		comboBox2->Items->Clear();		
		if (comboBox1->SelectedItem == "В городе")
		{
			comboBox2->Items->Add("Модель Okumura-Hata");
			comboBox2->Items->Add("Модель COST 231-Hata");
			comboBox2->Text = "Выберите модель";
		}
		else
		if (comboBox1->SelectedItem == "В пригороде")
		{
			comboBox2->Items->Add("Модель Hata");
			comboBox2->Items->Add("Модель COST 231-Hata");
			comboBox2->Text = "Выберите модель";
		}
		else
		if (comboBox1->SelectedItem == "В свободном пространстве")
		{
			comboBox2->Items->Add("Модель Hata");
			comboBox2->Items->Add("Модель Олсбрука-Парсона");
			comboBox2->Items->Add("Модель Ли");
			comboBox2->Items->Add("Модель Уолфиша-Икегами");
			comboBox2->Items->Add("Двухлучевая модель");
			comboBox2->Text = "Выберите модель";
		}
		else
		if (comboBox1->SelectedItem == "Над плоской землей")
		{
			comboBox2->Items->Add("Модель Олсбрука-Парсона");
			comboBox2->Text = "Выберите модель";
		}	
		comboBox2->Enabled = true;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (protect())
		{
			double result, f, ms, bs, r, G1, G2;
			if ((comboBox2->SelectedItem == "Модель Олсбрука-Парсона") && (comboBox1->SelectedItem == "Над плоской землей") || (comboBox2->SelectedItem == "Модель Ли") && (comboBox1->SelectedItem == "В свободном пространстве") || (comboBox2->SelectedItem == "Двухлучевая модель")) {  }
			else
				f = System::Convert::ToDouble(textBox1->Text);
			if (((comboBox2->SelectedItem == "Модель Олсбрука-Парсона") && (comboBox1->SelectedItem == "В свободном пространстве")) || (comboBox2->SelectedItem == "Модель Уолфиша-Икегами")){  }
			else
			{
				bs = System::Convert::ToDouble(textBox2->Text);
				if (comboBox2->SelectedItem == "Модель Ли") {  }
				else
				{
					ms = System::Convert::ToDouble(textBox3->Text);
				}
			}
			r = System::Convert::ToDouble(textBox4->Text);
			if (comboBox2->SelectedItem == "Двухлучевая модель")
			{
				G1 = System::Convert::ToDouble(textBox5->Text);
				G2 = System::Convert::ToDouble(textBox6->Text);
			}

			if (comboBox2->SelectedItem == "Модель Okumura-Hata" || comboBox2->SelectedItem == "Модель Hata")
			{
				result = ModelHata(f, ms, bs, r);
			}
			else if (comboBox2->SelectedItem == "Модель COST 231-Hata")
			{
				result = CostHata(f, ms, bs, r);
			}
			else if (comboBox2->SelectedItem == "Модель Олсбрука-Парсона")
			{
				result = ModelOlsPar(f, ms, bs, r);
			}
			else if (comboBox2->SelectedItem == "Модель Ли")
			{
				result = ModelLi(f, ms, bs, r);
			}
			else if (comboBox2->SelectedItem == "Модель Уолфиша-Икегами")
			{
				result = ModelUolf_Ikeg(f, ms, bs, r);
			}
			else if (comboBox2->SelectedItem == "Двухлучевая модель")
			{
				result = ModelDBeam(f, ms, bs, r, G1, G2);
			}
			result = round(result);
			label6->Text = System::Convert::ToString(result);
		}
		else
		{
			MessageBox::Show(this, "Не выбрана модель или данные неверно введены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		comboBox2->Enabled = false;
		comboBox2->Items->Clear();
		comboBox1->Text = "Выберите место";
		comboBox2->Text = "Выберите модель";
		textBox1->Text = L"";
		textBox2->Text = L"";
		textBox3->Text = L"";
		textBox4->Text = L"";
		textBox5->Text = L"";
		textBox6->Text = L"";
		label6->Text = L"0";
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		textBox1->Enabled = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
	}
	

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((comboBox2->SelectedItem == "Модель Олсбрука-Парсона") && (comboBox1->SelectedItem == "В свободном пространстве"))
		{
			textBox1->Text = L"";
			textBox2->Text = L"";
			textBox3->Text = L"";
			textBox4->Text = L"";
			textBox1->Enabled = true;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox5->Enabled = false;
			textBox6->Enabled = false;
		}
		else if ((comboBox2->SelectedItem == "Модель Олсбрука-Парсона") && (comboBox1->SelectedItem == "Над плоской землей"))
		{
			textBox1->Text = L"";
			textBox2->Text = L"";
			textBox3->Text = L"";
			textBox4->Text = L"";
			textBox5->Text = L"";
			textBox6->Text = L"";
			textBox1->Enabled = false;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox5->Enabled = false;
			textBox6->Enabled = false;
		}
		else if (comboBox2->SelectedItem == "Модель Ли")
		{
			textBox1->Text = L"";
			textBox2->Text = L"";
			textBox3->Text = L"";
			textBox4->Text = L"";
			textBox5->Text = L"";
			textBox6->Text = L"";
			textBox1->Enabled = false;
			textBox2->Enabled = true;
			textBox3->Enabled = false;
			textBox5->Enabled = false;
			textBox6->Enabled = false;
		}
		else if (comboBox2->SelectedItem == "Модель Уолфиша-Икегами")
		{
			textBox1->Text = L"";
			textBox2->Text = L"";
			textBox3->Text = L"";
			textBox4->Text = L"";
			textBox5->Text = L"";
			textBox6->Text = L"";
			textBox1->Enabled = true;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox5->Enabled = false;
			textBox6->Enabled = false;
		}
		else if (comboBox2->SelectedItem == "Двухлучевая модель")
		{
			textBox1->Enabled = false;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox5->Enabled = true;
			textBox6->Enabled = true;
			textBox1->Text = L"";
			textBox2->Text = L"";
			textBox3->Text = L"";
			textBox4->Text = L"";
			textBox5->Text = L"";
			textBox6->Text = L"";
		}
		else 
		{
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox5->Enabled = false;
			textBox6->Enabled = false;
			textBox1->Text = L"";
			textBox2->Text = L"";
			textBox3->Text = L"";
			textBox4->Text = L"";
			textBox5->Text = L"";
			textBox6->Text = L"";
		}
	}

};
}
	