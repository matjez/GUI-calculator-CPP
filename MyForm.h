#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ screen_txt;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->screen_txt = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// screen_txt
			// 
			this->screen_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->screen_txt->Location = System::Drawing::Point(25, 9);
			this->screen_txt->Name = L"screen_txt";
			this->screen_txt->Size = System::Drawing::Size(400, 100);
			this->screen_txt->TabIndex = 0;
			this->screen_txt->Text = L"0";
			this->screen_txt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(12, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 1;
			this->button1->Text = L"%";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(12, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 2;
			this->button2->Text = L"1/x";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(12, 371);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 3;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(12, 477);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(12, 583);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 5;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			this->button5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(118, 159);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 7;
			this->button7->Text = L"CE";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(118, 265);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 100);
			this->button19->TabIndex = 20;
			this->button19->Text = L"x^2";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(118, 371);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 21;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(118, 477);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 22;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(118, 583);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 100);
			this->button10->TabIndex = 23;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(118, 690);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 100);
			this->button11->TabIndex = 24;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			this->button11->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(224, 159);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 100);
			this->button12->TabIndex = 25;
			this->button12->Text = L"C";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(224, 265);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 100);
			this->button13->TabIndex = 26;
			this->button13->Text = L"√";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(224, 371);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 100);
			this->button14->TabIndex = 27;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(224, 477);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 100);
			this->button15->TabIndex = 28;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(224, 583);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 100);
			this->button16->TabIndex = 29;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(224, 689);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 100);
			this->button17->TabIndex = 30;
			this->button17->Text = L",";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(330, 159);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 100);
			this->button18->TabIndex = 31;
			this->button18->Text = L"<";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(330, 265);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(100, 100);
			this->button20->TabIndex = 32;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(330, 371);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(100, 100);
			this->button21->TabIndex = 33;
			this->button21->Text = L"*";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(330, 477);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(100, 100);
			this->button22->TabIndex = 34;
			this->button22->Text = L"-";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(330, 583);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(100, 100);
			this->button23->TabIndex = 35;
			this->button23->Text = L"+";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(330, 690);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(100, 100);
			this->button24->TabIndex = 36;
			this->button24->Text = L"=";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(12, 689);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 6;
			this->button6->Text = L"+/-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 802);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->screen_txt);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion

		double first_value, second_value, result;
		String^ operators;
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	//CE

	screen_txt->Text = "0";

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	//C

	first_value = 0;
	second_value = 0;
	screen_txt->Text = "0";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	// BACKSPACE

	if (screen_txt->Text->Length > 0) {
		screen_txt->Text = screen_txt->Text->Remove(screen_txt->Text->Length - 1, 1);

		if (screen_txt->Text->Length == 1 && screen_txt->Text == "-") {
			screen_txt->Text = screen_txt->Text->Remove(screen_txt->Text->Length - 1, 1);
		}
	}

	if (screen_txt->Text == "") {
		screen_txt->Text = "0";
	}

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	// pierwiastek
	if (screen_txt->Text->Contains("-")) {

	}
	else {
		screen_txt->Text = System::Convert::ToString(sqrt(Double::Parse(screen_txt->Text)));

	}

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	// kwadrat 
	screen_txt->Text = System::Convert::ToString(pow(Double::Parse(screen_txt->Text),2));

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// 1 przez x

	screen_txt->Text = System::Convert::ToString(1/Double::Parse(screen_txt->Text));

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	// Rowna sie
	second_value = Double::Parse(screen_txt->Text);

	if (operators == "+") {
		result = first_value + second_value;
		screen_txt->Text = System::Convert::ToString(result);
	}

	else if (operators == "-") {
		result = first_value - second_value;
		screen_txt->Text = System::Convert::ToString(result);
	}

	else if (operators == "*") {
		result = first_value * second_value;
		screen_txt->Text = System::Convert::ToString(result);
	}

	else if (operators == "/") {
		result = first_value / second_value;
		screen_txt->Text = System::Convert::ToString(result);
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { 
	// Kropka
	if (!screen_txt->Text->Contains(",")) {
		screen_txt->Text = screen_txt->Text + ",";
	}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// procent
	if (operators == "+") {
		screen_txt->Text = System::Convert::ToString((Double::Parse(screen_txt->Text))/100);
	}	

	else if (operators == "-") {
		screen_txt->Text = System::Convert::ToString((Double::Parse(screen_txt->Text))/100);
	}

	else if (operators == "*") {
		screen_txt->Text = System::Convert::ToString((Double::Parse(screen_txt->Text))/100);
	}

	else if (operators == "/") {
		screen_txt->Text = System::Convert::ToString((Double::Parse(screen_txt->Text))/100);
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// plus minus

	if (screen_txt->Text->Contains("-")) {
		screen_txt->Text = screen_txt->Text->Remove(0, 1);
	}

	else {
		screen_txt->Text = "-" + screen_txt->Text;
	}

}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Number = safe_cast<Button^>(sender);

	if (screen_txt->Text == "0") {
		screen_txt->Text = Number->Text;
	}
	else {
		screen_txt->Text = screen_txt->Text + Number->Text;
	}
}
private: System::Void EnterOperators(System::Object^ sender, System::EventArgs^ e) {
	// operator
	Button^ entered_operator = safe_cast<Button^>(sender);

	first_value = Double::Parse(screen_txt->Text);
	screen_txt->Text = "0";
	operators = entered_operator->Text;

}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	// keydown

	if (e->KeyCode == Keys::D1 || e->KeyCode == Keys::NumPad1) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "1";
		}
		else {
			screen_txt->Text = screen_txt->Text + "1";
		}
	}

	else if (e->KeyCode == Keys::D2 || e->KeyCode == Keys::NumPad2) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "2";
		}
		else {
			screen_txt->Text = screen_txt->Text + "2";
		}
	}	
	
	else if (e->KeyCode == Keys::D3 || e->KeyCode == Keys::NumPad3) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "3";
		}
		else {
			screen_txt->Text = screen_txt->Text + "3";
		}
	}	

	else if (e->KeyCode == Keys::D4 || e->KeyCode == Keys::NumPad4) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "4";
		}
		else {
			screen_txt->Text = screen_txt->Text + "4";
		}
	}	

	else if (e->KeyCode == Keys::D5 || e->KeyCode == Keys::NumPad5) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "5";
		}
		else {
			screen_txt->Text = screen_txt->Text + "5";
		}
	}	

	else if (e->KeyCode == Keys::D6 || e->KeyCode == Keys::NumPad6) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "6";
		}
		else {
			screen_txt->Text = screen_txt->Text + "6";
		}
	}	

	else if (e->KeyCode == Keys::D7 || e->KeyCode == Keys::NumPad7) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "7";
		}
		else {
			screen_txt->Text = screen_txt->Text + "7";
		}
	}	

	else if (e->KeyCode == Keys::D8 || e->KeyCode == Keys::NumPad8) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "8";
		}
		else {
			screen_txt->Text = screen_txt->Text + "8";
		}
	}	

	else if (e->KeyCode == Keys::D9 || e->KeyCode == Keys::NumPad9) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "9";
		}
		else {
			screen_txt->Text = screen_txt->Text + "9";
		}
	}

	else if (e->KeyCode == Keys::D0 || e->KeyCode == Keys::NumPad0) {
		if (screen_txt->Text == "0") {
			screen_txt->Text = "0";
		}
		else {
			screen_txt->Text = screen_txt->Text + "0";
		}
	}
	
	else if (e->KeyCode == Keys::Multiply) {
		first_value = Double::Parse(screen_txt->Text);
		screen_txt->Text = "0";
		operators = "*";
	}

	else if (e->KeyCode == Keys::Divide) {
		first_value = Double::Parse(screen_txt->Text);
		screen_txt->Text = "0";
		operators = "/";
	}

	else if (e->KeyCode == Keys::Add) {
		first_value = Double::Parse(screen_txt->Text);
		screen_txt->Text = "0";
		operators = "+";
	}

	else if (e->KeyCode == Keys::Subtract) {
		first_value = Double::Parse(screen_txt->Text);
		screen_txt->Text = "0";
		operators = "-";
	}		
	
	else if (e->KeyCode == Keys::Decimal) {
		if (!screen_txt->Text->Contains(",")) {
			screen_txt->Text = screen_txt->Text + ",";
		}
	}	
	
	else if (e->KeyCode == Keys::Back) {
		if (screen_txt->Text->Length > 0) {
			screen_txt->Text = screen_txt->Text->Remove(screen_txt->Text->Length - 1, 1);

			if (screen_txt->Text->Length == 1 && screen_txt->Text == "-") {
				screen_txt->Text = screen_txt->Text->Remove(screen_txt->Text->Length - 1, 1);
			}
		}

		if (screen_txt->Text == "") {
			screen_txt->Text = "0";
		}

	}



}
};
}
