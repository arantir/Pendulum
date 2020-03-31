#pragma once
#include <cmath>

namespace Sample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	const double pi = 3.14159265358979323846;



	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::ComponentModel::IContainer^  components;
			 

	private: System::Drawing::Bitmap^ bmp;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Стартуем";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Длинна";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(246, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Начальное положение";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(342, 322);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Стоп";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(59, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"120";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox_KeyPress);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Form1::textBox_Leave);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(379, 21);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(51, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0,75";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox_KeyPress);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Form1::textBox_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(436, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"П";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(207, 322);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(484, 362);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(500, 400);
			this->MinimumSize = System::Drawing::Size(500, 400);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Маятник";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double r,x,y,x0,y0,f;
		bool Anchor;
			 void pendulum()
			 {
				 Graphics ^g = this->CreateGraphics();
				 Pen^ blackPen = gcnew Pen ( Color::Black ),^ whiteSmokePen = gcnew Pen ( Color::WhiteSmoke );
				 Brush^ blackBrush = Brushes::Black,^ whiteSmokeBrush = Brushes::WhiteSmoke,^ BlueVioletBrush = Brushes::SteelBlue;
				 if ( Convert::ToDouble(textBox2->Text) != 0.5 )
				 {
					 if ( Anchor == 0 )
						 f -= 0.02;
					 else
						 f += 0.02;
					 if ( f >=  pi/2 + abs( Convert::ToDouble(textBox2->Text)*pi - pi/2 ) )
					 {
						 Anchor = 0;
					 }
					 if ( f <= pi/2 - abs( Convert::ToDouble(textBox2->Text)*pi - pi/2 ) )
					 {
						 Anchor = 1;
					 }
				 }
				 x = x0 + r*cos(f);
				 y = y0 + r*sin(f);
				 g->Clear(Color::WhiteSmoke);
				 g->FillEllipse(blackBrush,x0 - 5,y0 - 5,10,10);
				 g->DrawLine(blackPen,x,y,250,70);
				 g->FillEllipse(blackBrush,x - 15,y - 15,30,30);
				 g->FillEllipse(BlueVioletBrush,x - 13,y - 13,26,26);
				 g->FillEllipse(blackBrush,x - 11,y - 11,22,22);
				 g->FillEllipse(BlueVioletBrush,x - 9,y - 9,18,18);
				 g->FillEllipse(blackBrush,x - 7,y - 7,14,14);
				 g->FillEllipse(BlueVioletBrush,x - 5,y - 5,10,10);
				 g->FillEllipse(blackBrush,x - 3,y - 3,6,6);
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 x0 = 250;
			 y0 = 70;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval = 1;
			 timer1->Enabled = true;
			 pendulum();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 r = Convert::ToInt32(textBox1->Text);
			 f = pi*Convert::ToDouble(textBox2->Text);
			 textBox1->Enabled = false;
			 textBox2->Enabled = false;
			 button1->Enabled = false;
			 button2->Enabled = true;
			 button2->Focus();
			 timer1->Start();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Stop();
			 textBox1->Enabled = true;
			 textBox2->Enabled = true;
			 button1->Enabled = true;
			 button2->Enabled = false;
		 }
private: System::Void textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar>='0')&&(e->KeyChar<='9'))
			 {
				 return;
			 }
			 if (e->KeyChar=='.')
			 {
			   e->KeyChar=',';
			 }
			 if (e->KeyChar==',')
			 {
				 if ( textBox1->Text->IndexOf(',') != -1 )
				 {
					 e->Handled=true;
				 }
				 return;
			 }
			 if (Char::IsControl(e->KeyChar))
			 {
				 if (e->KeyChar==(char)Keys::Enter)
					 button1->Focus();
				 return;
			 }
			 else
				 e->Handled = true;
		 }
private: System::Void textBox_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if ( textBox1->Text == "" )
				 textBox1->Text = "0";
			 if ( textBox2->Text == "" )
				 textBox2->Text = "0";
			 if ( Convert::ToInt32(textBox1->Text) <= 70 )
				 textBox1->Text = "70";
			 if ( Convert::ToInt32(textBox1->Text) >= 200 )
				 textBox1->Text = "200";
			 if ( Convert::ToDouble(textBox2->Text) <= 0 )
				 textBox2->Text = "0";
			 if ( Convert::ToDouble(textBox2->Text) >= 1 )
				 textBox2->Text = "1";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void textBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ( textBox2->Text == "" )
				 textBox2->Text = "0";
			 if ( textBox1->Text == "" )
				 textBox1->Text = "0";
		 }
};
}

