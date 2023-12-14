#pragma once

namespace Rgj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Rgj1
	/// </summary>
	public ref class Rgj1 : public System::Windows::Forms::Form
	{
	public:
		Rgj1(void)
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
		~Rgj1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;










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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(250, 254);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Rgj1::button1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(520, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 40);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Обчислити ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Rgj1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 34);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Rgj1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(250, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 34);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(520, 54);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(150, 34);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Rgj1::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(189, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"дія";
			this->label1->Click += gcnew System::EventHandler(this, &Rgj1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(446, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"=";
			this->label2->Click += gcnew System::EventHandler(this, &Rgj1::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Оберіть дію";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->comboBox1->Location = System::Drawing::Point(18, 151);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(144, 37);
			this->comboBox1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(245, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Калькулятор";
			// 
			// Rgj1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(682, 303);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Name = L"Rgj1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rgj1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
	private:
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
			{

				{
					if (Protect()) {
						double Num1, Num2, Result;
						Num1 = System::Convert::ToDouble(textBox1->Text);
						Num2 = System::Convert::ToDouble(textBox2->Text);

						if (comboBox1->SelectedItem->ToString() == "+") {
							Result = Num1 + Num2;
							label1->Text = L"+";
						}
						else if (comboBox1->SelectedItem->ToString() == "-") {
							Result = Num1 - Num2;
							label1->Text = L"-";
						}
						else if (comboBox1->SelectedItem->ToString() == "*") {
							Result = Num1 * Num2;
							label1->Text = L"*";
						}
						else if (comboBox1->SelectedItem->ToString() == "/") {
							if (Num2 != 0) {
								Result = Num1 / Num2;
								label1->Text = L"/";
							}
							else {
								MessageBox::Show("Спроба ділення на 0", "Помилка");
								return;
							}
						}

						textBox3->Text = System::Convert::ToString(Result);
					}
					else {
						MessageBox::Show("Помилка вводу", "Помилка");
					}
				}

			}
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e){}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e){}
	private:
		bool Protect()
		{
			if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0))
			{
				return false;
			}

			for (int i = 0; i < textBox1->Text->Length; i++)
			{
				if (!((textBox1->Text[i] >= '0' && textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',')))
				{
					return false;
				}
			}

			for (int i = 0; i < textBox2->Text->Length; i++)
			{
				if (!((textBox2->Text[i] >= '0' && textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',')))
				{
					return false;
				}
			}

			return true;
		}

private:
	System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Protect())
		{
			MessageBox::Show("Дію завершено");
		}
		else
		{
			MessageBox::Show("Неправильна дія", "Помилка");
		}
	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e){
	{
		if (Protect())
		{
			MessageBox::Show("Дію завершено");
		}
		else
		{
			MessageBox::Show("Неправильна дія", "Помилка");
		}
	}
}
};
}

