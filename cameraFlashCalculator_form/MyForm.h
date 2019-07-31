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
	private: System::Windows::Forms::Button^ button_calc;
	private: System::Windows::Forms::TextBox^ textBox_dist;
	private: System::Windows::Forms::TextBox^ textBox_iso;
	private: System::Windows::Forms::TextBox^ textBox_gn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_dist;
	private: System::Windows::Forms::Label^ label_iso;
	private: System::Windows::Forms::TextBox^ textBox_fVal;
	private: System::Windows::Forms::Label^ label_fVal;
	private: System::Windows::Forms::Label^ label_gn;
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
			this->button_calc = (gcnew System::Windows::Forms::Button());
			this->textBox_dist = (gcnew System::Windows::Forms::TextBox());
			this->textBox_iso = (gcnew System::Windows::Forms::TextBox());
			this->textBox_gn = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_dist = (gcnew System::Windows::Forms::Label());
			this->label_iso = (gcnew System::Windows::Forms::Label());
			this->textBox_fVal = (gcnew System::Windows::Forms::TextBox());
			this->label_fVal = (gcnew System::Windows::Forms::Label());
			this->label_gn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_calc
			// 
			this->button_calc->Location = System::Drawing::Point(108, 138);
			this->button_calc->Name = L"button_calc";
			this->button_calc->Size = System::Drawing::Size(75, 23);
			this->button_calc->TabIndex = 0;
			this->button_calc->Text = L"Calculate !";
			this->button_calc->UseVisualStyleBackColor = true;
			this->button_calc->Click += gcnew System::EventHandler(this, &MyForm::Button_calc_Click);
			// 
			// textBox_dist
			// 
			this->textBox_dist->Location = System::Drawing::Point(97, 25);
			this->textBox_dist->Name = L"textBox_dist";
			this->textBox_dist->Text = L"5";
			this->textBox_dist->Size = System::Drawing::Size(100, 19);
			this->textBox_dist->TabIndex = 1;
			// 
			// textBox_iso
			// 
			this->textBox_iso->Location = System::Drawing::Point(97, 62);
			this->textBox_iso->Name = L"textBox_iso";
			this->textBox_iso->Text = L"100";
			this->textBox_iso->Size = System::Drawing::Size(100, 19);
			this->textBox_iso->TabIndex = 2;
			// 
			// textBox_gn
			// 
			this->textBox_gn->Location = System::Drawing::Point(97, 202);
			this->textBox_gn->Name = L"textBox_gn";
			this->textBox_gn->Text = L"";
			this->textBox_gn->Size = System::Drawing::Size(100, 19);
			this->textBox_gn->TabIndex = 3;
			this->textBox_gn->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox_gn_TextChanged);
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
			// Label_dist
			// 
			this->label_dist->AutoSize = true;
			this->label_dist->Location = System::Drawing::Point(43, 28);
			this->label_dist->Name = L"Label_dist";
			this->label_dist->Size = System::Drawing::Size(50, 12);
			this->label_dist->TabIndex = 5;
			this->label_dist->Text = L"Distance";
			this->label_dist->Click += gcnew System::EventHandler(this, &MyForm::Label_dist_Click);
			// 
			// Label_iso
			// 
			this->label_iso->AutoSize = true;
			this->label_iso->Location = System::Drawing::Point(58, 65);
			this->label_iso->Name = L"Label_iso";
			this->label_iso->Size = System::Drawing::Size(23, 12);
			this->label_iso->TabIndex = 6;
			this->label_iso->Text = L"ISO";
			this->label_iso->Click += gcnew System::EventHandler(this, &MyForm::Label_iso_Click);
			// 
			// textBox_fVal
			// 
			this->textBox_fVal->Location = System::Drawing::Point(97, 97);
			this->textBox_fVal->Name = L"textBox_fVal";
			this->textBox_fVal->Text = L"4.0";
			this->textBox_fVal->Size = System::Drawing::Size(100, 19);
			this->textBox_fVal->TabIndex = 7;
			// 
			// Label_fVal
			// 
			this->label_fVal->AutoSize = true;
			this->label_fVal->Location = System::Drawing::Point(47, 100);
			this->label_fVal->Name = L"Label_fVal";
			this->label_fVal->Size = System::Drawing::Size(43, 12);
			this->label_fVal->TabIndex = 8;
			this->label_fVal->Text = L"F value";
			this->label_fVal->Click += gcnew System::EventHandler(this, &MyForm::Label_fVal_Click);
			// 
			// label_gn
			// 
			this->label_gn->AutoSize = true;
			this->label_gn->Location = System::Drawing::Point(58, 205);
			this->label_gn->Name = L"label_gn";
			this->label_gn->Size = System::Drawing::Size(21, 12);
			this->label_gn->TabIndex = 9;
			this->label_gn->Text = L"GN";
			this->label_gn->Click += gcnew System::EventHandler(this, &MyForm::Label_gn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label_gn);
			this->Controls->Add(this->label_fVal);
			this->Controls->Add(this->textBox_fVal);
			this->Controls->Add(this->label_iso);
			this->Controls->Add(this->label_dist);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_gn);
			this->Controls->Add(this->textBox_iso);
			this->Controls->Add(this->textBox_dist);
			this->Controls->Add(this->button_calc);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_calc_Click(System::Object^ sender, System::EventArgs^ e) {
		//int hoge = 334;
		//String^ myString1 = hoge.ToString();
		//this->textBox_dist->Text = myString1;

		double dist = double::Parse(this->textBox_dist->Text );
		double iso  = double::Parse(this->textBox_iso->Text);
		double fVal = double::Parse(this->textBox_fVal->Text);
		//double dist = std::stod(this->textBox_dist);
		
		double gn = fVal * dist * sqrt(100/iso);
		
		this->textBox_gn->Text = gn.ToString();
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_dist_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_iso_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_fVal_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_gn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox_gn_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
