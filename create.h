#pragma once
#include "print.h"

namespace PracticeStage1
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for create
	/// </summary>
	public ref class create : public System::Windows::Forms::Form
	{
	public:
		create(void)
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
		~create()
		{
			if (components1)
			{
				delete components1;
			}
		}
	private:
		System::Windows::Forms::Label^ username_label1;
		System::Windows::Forms::TextBox^ username_textbox1;
		System::Windows::Forms::Label^ password_label1;
		System::Windows::Forms::TextBox^ password_textbox1;
		System::Windows::Forms::Button^ create_button1;
		System::Windows::Forms::Label^ terms_label1;
		System::Windows::Forms::CheckBox^ terms_checkbox1;
		System::Windows::Forms::Panel^ terms_panel1;
		System::Windows::Forms::Label^ login_label;
		System::Windows::Forms::Button^ ok_button1;
		System::Windows::Forms::TextBox^ terms_textbox1;
		System::Windows::Forms::Button^ back_button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(create::typeid));
			this->username_label1 = (gcnew System::Windows::Forms::Label());
			this->username_textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->password_label1 = (gcnew System::Windows::Forms::Label());
			this->password_textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->create_button1 = (gcnew System::Windows::Forms::Button());
			this->terms_label1 = (gcnew System::Windows::Forms::Label());
			this->terms_checkbox1 = (gcnew System::Windows::Forms::CheckBox());
			this->terms_panel1 = (gcnew System::Windows::Forms::Panel());
			this->ok_button1 = (gcnew System::Windows::Forms::Button());
			this->terms_textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->back_button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->terms_panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// username_label1
			// 
			this->username_label1->AutoSize = true;
			this->username_label1->BackColor = System::Drawing::Color::Transparent;
			this->username_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label1->ForeColor = System::Drawing::Color::White;
			this->username_label1->Location = System::Drawing::Point(61, 90);
			this->username_label1->Name = L"username_label1";
			this->username_label1->Size = System::Drawing::Size(124, 29);
			this->username_label1->TabIndex = 2;
			this->username_label1->Text = L"Username";
			// 
			// username_textbox1
			// 
			this->username_textbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_textbox1->Location = System::Drawing::Point(54, 136);
			this->username_textbox1->Name = L"username_textbox1";
			this->username_textbox1->Size = System::Drawing::Size(178, 34);
			this->username_textbox1->TabIndex = 4;
			// 
			// password_label1
			// 
			this->password_label1->AutoSize = true;
			this->password_label1->BackColor = System::Drawing::Color::Transparent;
			this->password_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label1->ForeColor = System::Drawing::Color::White;
			this->password_label1->Location = System::Drawing::Point(49, 193);
			this->password_label1->Name = L"password_label1";
			this->password_label1->Size = System::Drawing::Size(120, 29);
			this->password_label1->TabIndex = 5;
			this->password_label1->Text = L"Password";
			// 
			// password_textbox1
			// 
			this->password_textbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->password_textbox1->Location = System::Drawing::Point(54, 244);
			this->password_textbox1->Name = L"password_textbox1";
			this->password_textbox1->Size = System::Drawing::Size(178, 34);
			this->password_textbox1->TabIndex = 6;
			this->password_textbox1->UseSystemPasswordChar = true;
			// 
			// create_button1
			// 
			this->create_button1->Enabled = false;
			this->create_button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_button1->Location = System::Drawing::Point(243, 445);
			this->create_button1->Name = L"create_button1";
			this->create_button1->Size = System::Drawing::Size(118, 43);
			this->create_button1->TabIndex = 7;
			this->create_button1->Text = L"Create";
			this->create_button1->UseVisualStyleBackColor = true;
			this->create_button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &create::create_button_MouseClick);
			// 
			// terms_label1
			// 
			this->terms_label1->AutoSize = true;
			this->terms_label1->BackColor = System::Drawing::Color::Transparent;
			this->terms_label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->terms_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->terms_label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->terms_label1->Location = System::Drawing::Point(171, 389);
			this->terms_label1->Name = L"terms_label1";
			this->terms_label1->Size = System::Drawing::Size(173, 20);
			this->terms_label1->TabIndex = 10;
			this->terms_label1->Text = L"Terms and Conditions";
			this->terms_label1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &create::terms_label1_MouseClick);
			// 
			// terms_checkbox1
			// 
			this->terms_checkbox1->AutoSize = true;
			this->terms_checkbox1->BackColor = System::Drawing::Color::Transparent;
			this->terms_checkbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->terms_checkbox1->ForeColor = System::Drawing::Color::White;
			this->terms_checkbox1->Location = System::Drawing::Point(54, 385);
			this->terms_checkbox1->Name = L"terms_checkbox1";
			this->terms_checkbox1->Size = System::Drawing::Size(122, 24);
			this->terms_checkbox1->TabIndex = 11;
			this->terms_checkbox1->Text = L"Agree to the";
			this->terms_checkbox1->UseVisualStyleBackColor = false;
			this->terms_checkbox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &create::terms_checkbox1_MouseClick);
			// 
			// terms_panel1
			// 
			this->terms_panel1->BackColor = System::Drawing::Color::Transparent;
			this->terms_panel1->Controls->Add(this->ok_button1);
			this->terms_panel1->Controls->Add(this->terms_textbox1);
			this->terms_panel1->Location = System::Drawing::Point(494, 35);
			this->terms_panel1->Name = L"terms_panel1";
			this->terms_panel1->Size = System::Drawing::Size(431, 466);
			this->terms_panel1->TabIndex = 12;
			this->terms_panel1->Visible = false;
			// 
			// ok_button1
			// 
			this->ok_button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok_button1->Location = System::Drawing::Point(165, 410);
			this->ok_button1->Name = L"ok_button1";
			this->ok_button1->Size = System::Drawing::Size(118, 43);
			this->ok_button1->TabIndex = 1;
			this->ok_button1->Text = L"OK";
			this->ok_button1->UseVisualStyleBackColor = true;
			this->ok_button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &create::ok_button1_MouseClick);
			// 
			// terms_textbox1
			// 
			this->terms_textbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->terms_textbox1->Location = System::Drawing::Point(39, 3);
			this->terms_textbox1->Multiline = true;
			this->terms_textbox1->Name = L"terms_textbox1";
			this->terms_textbox1->Size = System::Drawing::Size(365, 333);
			this->terms_textbox1->TabIndex = 0;
			this->terms_textbox1->Text = L"These are terms and conditions! Nothing special for now.";
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->BackColor = System::Drawing::Color::Transparent;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_label->ForeColor = System::Drawing::Color::White;
			this->login_label->Location = System::Drawing::Point(75, 35);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(224, 32);
			this->login_label->TabIndex = 13;
			this->login_label->Text = L"Create Account";
			// 
			// back_button1
			// 
			this->back_button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_button1->Location = System::Drawing::Point(83, 445);
			this->back_button1->Name = L"back_button1";
			this->back_button1->Size = System::Drawing::Size(118, 43);
			this->back_button1->TabIndex = 14;
			this->back_button1->Text = L"Back";
			this->back_button1->UseVisualStyleBackColor = true;
			this->back_button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &create::back_button1_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(294, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 29);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(299, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 34);
			this->textBox1->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(294, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 29);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Date of Birth";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(299, 244);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 34);
			this->textBox2->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(49, 303);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(439, 29);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Add your favourite number (1 or 2 digits)";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(225, 337);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(74, 34);
			this->textBox3->TabIndex = 20;
			// 
			// create
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(954, 537);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->terms_label1);
			this->Controls->Add(this->back_button1);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->terms_panel1);
			this->Controls->Add(this->terms_checkbox1);
			this->Controls->Add(this->create_button1);
			this->Controls->Add(this->password_textbox1);
			this->Controls->Add(this->password_label1);
			this->Controls->Add(this->username_textbox1);
			this->Controls->Add(this->username_label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"create";
			this->Text = L"create";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &create::create_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &create::create_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &create::create_MouseUp);
			this->terms_panel1->ResumeLayout(false);
			this->terms_panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		bool dragging = false;
		Point last_point;

		Void create_MouseDown(Object^ sender, MouseEventArgs^ e)
		{
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				dragging = true;
				last_point = Point(e->X, e->Y);
			}
		}

		Void create_MouseUp(Object^ sender, MouseEventArgs^ e)
		{
			dragging = false;
		}

		Void create_MouseMove(Object^ sender, MouseEventArgs^ e)
		{
			if (dragging)
			{
				Point current = PointToScreen(Point(e->X, e->Y));
				Location = Point(current.X - last_point.X, current.Y - last_point.Y);
			}
		}

		Void username_textbox_KeyDown(Object^ sender, KeyEventArgs^ e)
		{
			if (e->KeyValue == (int)Keys::Enter)
			{
				password_textbox1->Focus();
			}
		}

		Void password_textbox_KeyDown(Object^ sender, KeyEventArgs^ e)
		{
			create_button1->PerformClick();
		}

		Void terms_label_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			this->terms_panel1->Show();
		}

		Void terms_label1_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			this->terms_panel1->Visible = true;
		}

		Void ok_button1_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			this->terms_panel1->Visible = false;
		}

		Void back_button1_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			/*this->Hide();
			menu^ form = gcnew menu();
			form->ShowDialog();*/
		}

		Void terms_checkbox1_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			this->create_button1->Enabled = this->terms_checkbox1->Checked;
		}
		
		//Text file

		void signUp(String^ username, String^ password, String^ name, String^ dob, String^ key)
		{
			String^ text = Text;
			String^ fileName = L"db.txt";
			StreamWriter^ sw = File::AppendText(fileName);
			sw->WriteLine("Username: " + username);
			sw->WriteLine("Password: " + password);
			sw->WriteLine("Name: " + name);
			sw->WriteLine("Date of Birth: " + dob);
			sw->WriteLine("Favourite number: " + key + "\n===\n");
			sw->Flush();
			sw->Close();
		}

		Void terms_checkbox_CheckedChanged(Object^ sender, EventArgs^ e)
		{
			this->create_button1->Enabled = this->terms_checkbox1->Checked;
		}

		bool check_new_user(String^ keyword)
		{
			String^ fileName = L"db.txt";
			StreamReader^ file = File::OpenText(fileName);
			String^ line;

			while ((line = file->ReadLine()) != nullptr)
			{
				if (line == L"Username: " + keyword)
				{
					file->Close();
					return false;
				}
			}
			file->Close();
			return true;
		}

		Void create_button_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			bool new_username = check_new_user(username_textbox1->Text);
			if (create_button1->Enabled)
			{
				if (new_username)
				{
					System::String^ username = username_textbox1->Text;
					System::String^ password = password_textbox1->Text;
					System::String^ name = textBox1->Text;
					System::String^ dob = textBox2->Text;
					System::String^ key = textBox3->Text;
					signUp(username, password, name, dob, key);
					StreamWriter^ sw = gcnew StreamWriter("temp.txt");
					sw->WriteLine(username);
					sw->WriteLine(password);
					sw->WriteLine(name);
					sw->WriteLine(dob);
					sw->WriteLine(key);
					sw->Close();
					this->Hide();
					print^ form = gcnew print();
					form->ShowDialog();
				}
				else
				{
					MessageBox::Show(L"The username is not available. Please try a new one!");
				}
			}
			else {
				MessageBox::Show(L"You have to agree with the terms and conditions!");
			}
		}
#pragma endregion
	};
}
