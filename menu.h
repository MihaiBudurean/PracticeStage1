#pragma once
#include "task.h"
#include "create.h"

namespace PracticeStage1
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Label^ login_label;
		System::Windows::Forms::Label^ username_label;
		System::Windows::Forms::Label^ password_label;
		System::Windows::Forms::TextBox^ username_textbox;
		System::Windows::Forms::TextBox^ password_textbox;
		System::Windows::Forms::Button^ login_button;
		System::Windows::Forms::Button^ exit_button;
		System::Windows::Forms::Button^ account_button;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->account_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->BackColor = System::Drawing::Color::Transparent;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_label->ForeColor = System::Drawing::Color::White;
			this->login_label->Location = System::Drawing::Point(283, 57);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(150, 46);
			this->login_label->TabIndex = 0;
			this->login_label->Text = L"Sign In";
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->BackColor = System::Drawing::Color::Transparent;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::Color::White;
			this->username_label->Location = System::Drawing::Point(70, 157);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(150, 36);
			this->username_label->TabIndex = 1;
			this->username_label->Text = L"Username";
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->BackColor = System::Drawing::Color::Transparent;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::White;
			this->password_label->Location = System::Drawing::Point(73, 258);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(147, 36);
			this->password_label->TabIndex = 2;
			this->password_label->Text = L"Password";
			// 
			// username_textbox
			// 
			this->username_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_textbox->Location = System::Drawing::Point(244, 157);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(404, 34);
			this->username_textbox->TabIndex = 3;
			this->username_textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &menu::username_textbox_KeyDown);
			// 
			// password_textbox
			// 
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->password_textbox->Location = System::Drawing::Point(244, 261);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(404, 34);
			this->password_textbox->TabIndex = 4;
			this->password_textbox->UseSystemPasswordChar = true;
			this->password_textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &menu::password_textbox_KeyDown);
			// 
			// login_button
			// 
			this->login_button->Enabled = false;
			this->login_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button->Location = System::Drawing::Point(79, 381);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(118, 43);
			this->login_button->TabIndex = 5;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &menu::login_button_MouseClick);
			// 
			// exit_button
			// 
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_button->Location = System::Drawing::Point(530, 381);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(118, 43);
			this->exit_button->TabIndex = 6;
			this->exit_button->Text = L"Exit";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &menu::exit_button_MouseClick);
			// 
			// account_button
			// 
			this->account_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->account_button->Location = System::Drawing::Point(244, 381);
			this->account_button->Name = L"account_button";
			this->account_button->Size = System::Drawing::Size(248, 43);
			this->account_button->TabIndex = 10;
			this->account_button->Text = L"Create New Account";
			this->account_button->UseVisualStyleBackColor = true;
			this->account_button->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &menu::account_button_MouseClick);
			// 
			// menu
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(734, 495);
			this->Controls->Add(this->account_button);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->login_button);
			this->Controls->Add(this->password_textbox);
			this->Controls->Add(this->username_textbox);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->login_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"menu";
			this->Text = L"menu";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &menu::menu_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &menu::menu_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &menu::menu_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Void exit_button_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			if (MessageBox::Show(L"Are you sure you want to exit", L"Exit",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				Application::Exit();
		}

		bool dragging = false;
		Point last_point;

		Void menu_MouseDown(Object^ sender, MouseEventArgs^ e)
		{
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				dragging = true;
				last_point = Point(e->X, e->Y);
			}
		}

		Void menu_MouseUp(Object^ sender, MouseEventArgs^ e)
		{
			dragging = false;
		}

		Void menu_MouseMove(Object^ sender, MouseEventArgs^ e)
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
				password_textbox->Focus();
			}
		}

		Void password_textbox_KeyDown(Object^ sender, KeyEventArgs^ e)
		{
			login_button->Enabled = true;
			login_button->PerformClick();
		}

		Void account_button_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			this->Hide();
			create^ form_create = gcnew create();
			form_create->ShowDialog();
		}
		Void login_button_MouseClick(Object^ sender, MouseEventArgs^ e)
		{
			if (check_user(username_textbox->Text, password_textbox->Text)) {
				this->Hide();
				task^ form_task = gcnew task();
				form_task->ShowDialog();
			}
			else {
				MessageBox::Show(L"The username or password were wrong. Please check them again!");
			}
			this->Hide();
			task^ form_task = gcnew task();
			form_task->ShowDialog();
		}

		// text file
		bool check_user(String^ username, String^ password)
		{
			String^ fileName = L"db.txt";
			StreamReader^ file = File::OpenText(fileName);
			String^ line, ^ line2;

			while ((line = file->ReadLine()) != nullptr)
			{
				if (line == (L"Username: " + username))
					if ((line2 = file->ReadLine()) == (L"Password: " + password)) {

						file->Close();
						return true;
					}
			}
			file->Close();
			return false;
		}
#pragma endregion	
	};
}