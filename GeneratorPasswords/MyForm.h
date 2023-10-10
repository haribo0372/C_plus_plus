#include <math.h>
#include <string>
#include <vector>
#include <memory>
#include <time.h>
#pragma once
using namespace std;
namespace GeneratorPasswords {

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
	private: System::Windows::Forms::CheckedListBox^ checkedList;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox7;

	protected:






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
			this->checkedList = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// checkedList
			// 
			this->checkedList->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkedList->FormattingEnabled = true;
			this->checkedList->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Латинские большие", L"Латинские маленькие",
					L"Русские большие", L"Русские маленькие", L"Символы", L"Цифры"
			});
			this->checkedList->Location = System::Drawing::Point(520, 12);
			this->checkedList->Name = L"checkedList";
			this->checkedList->ScrollAlwaysVisible = true;
			this->checkedList->Size = System::Drawing::Size(218, 123);
			this->checkedList->TabIndex = 7;
			this->checkedList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Р(вероятность)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"V(скорость перебора)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"T(срок действия пароля)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(199, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(307, 22);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(307, 22);
			this->textBox3->TabIndex = 13;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"А(мощность алфавита)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(183, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"S*(нижняя граница пароля)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"L(длина пароля)";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(199, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(307, 22);
			this->textBox4->TabIndex = 17;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(199, 172);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(307, 22);
			this->textBox5->TabIndex = 18;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(199, 201);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(307, 22);
			this->textBox6->TabIndex = 19;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 28);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Сгенерировать пароль";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(15, 260);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(183, 34);
			this->textBox7->TabIndex = 21;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 340);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedList);
			this->Name = L"MyForm";
			this->Text = L"GeneratorPasswords";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		double p, v, t, _s;
		p = System::Convert::ToDouble(textBox1->Text);
		v = System::Convert::ToDouble(textBox2->Text);
		t = System::Convert::ToDouble(textBox3->Text);
		unsigned int a = 0;
		vector<char> chars;
		for (int i = 0; i < 6; i++) {
			if (this->checkedList->GetItemChecked(i)) {
				if (i == 0) {
					a += 26;
					for (char ch = 65 ; ch <= 'Z'; ch++) {
						chars.push_back(ch);
					}
				}
				else if (i == 1) {
					a += 26;
					for (char ch = 97; ch <= 'z'; ch++) {
						chars.push_back(ch);
					}
				}
				else if (i == 2) {
					a += 33;
					for (char ch = 'А'; ch <= 'Я'; ch++) {
						chars.push_back(ch);
					}
				}
				else if (i == 3) {
					a += 33;
					for (char ch = 'а'; ch <= 'я'; ch++) {
						chars.push_back(ch);
					}
				}
				else if (i == 4) {
					a += 5;
					chars.push_back('.');
					chars.push_back(':');
					chars.push_back('[');
					chars.push_back('}');
					chars.push_back('@');
				}
				else if (i == 5) {
					a += 10;
					for (char ch = '0'; ch <= '9'; ch++) {
						chars.push_back(ch);
					}
				}
			}
		}
		_s = ceil(v * t / p);
		double s;
		int l;
		for (int i = 0; i < 10; i++) {
			s = pow(a, i);
			if (_s <= s) {
				l = i;
				break;
			}
			continue;
		}
		string password;
		for (int i = 0; i < l; i++) {
			int ra = (int) 1 + rand() % a;
			password += chars[ra];
		}
		textBox4->Text = System::Convert::ToString(_s);
		textBox5->Text = System::Convert::ToString(a);
		textBox6->Text = System::Convert::ToString(l);
		textBox7->Text = gcnew String(password.c_str());
	}
	};
}