#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include <cmath>

namespace cameraFlashCalculatorform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(108, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(97, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Text = L"5";
			this->textBox1->Size = System::Drawing::Size(100, 19);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Text = L"100";
			this->textBox2->Size = System::Drawing::Size(100, 19);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(97, 202);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Text = L"";
			this->textBox3->Size = System::Drawing::Size(100, 19);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 12);
			this->label1->TabIndex = 4;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 12);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Distance";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::Label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 12);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ISO";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::Label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(97, 97);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Text = L"4.0";
			this->textBox4->Size = System::Drawing::Size(100, 19);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 12);
			this->label4->TabIndex = 8;
			this->label4->Text = L"F value";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::Label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 12);
			this->label5->TabIndex = 9;
			this->label5->Text = L"GN";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::Label5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//int hoge = 334;
		//String^ myString1 = hoge.ToString();
		//this->textBox1->Text = myString1;


		double dist = double::Parse(this->textBox1->Text );
		double iso  = double::Parse(this->textBox2->Text);
		double fVal = double::Parse(this->textBox4->Text);
		//double dist = std::stod(this->textBox1);
		
		double gn = fVal * dist * sqrt(100/iso);
		
		this->textBox3->Text = gn.ToString();
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
