#pragma once

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
			//
			//TODO: Add the constructor code here
			//
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
		System::Windows::Forms::Panel^ terms_panel;
		System::Windows::Forms::Button^ ok_button;
		System::Windows::Forms::CheckBox^ terms_checkbox;
		System::Windows::Forms::Label^ terms_label;
		System::Windows::Forms::TextBox^ terms_textbox;

		/// <summary>
		/// Required designer variable.
		/// </summary>
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
			this->terms_panel = (gcnew System::Windows::Forms::Panel());
			this->terms_textbox = (gcnew System::Windows::Forms::TextBox());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->terms_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->terms_label = (gcnew System::Windows::Forms::Label());
			this->terms_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->BackColor = System::Drawing::Color::Transparent;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_label->ForeColor = System::Drawing::Color::White;
			this->login_label->Location = System::Drawing::Point(55, 39);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(124, 38);
			this->login_label->TabIndex = 0;
			this->login_label->Text = L"Sign In";
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->BackColor = System::Drawing::Color::Transparent;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::Color::White;
			this->username_label->Location = System::Drawing::Point(55, 98);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(124, 29);
			this->username_label->TabIndex = 1;
			this->username_label->Text = L"Username";
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->BackColor = System::Drawing::Color::Transparent;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::White;
			this->password_label->Location = System::Drawing::Point(55, 191);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(120, 29);
			this->password_label->TabIndex = 2;
			this->password_label->Text = L"Password";
			// 
			// username_textbox
			// 
			this->username_textbox->Location = System::Drawing::Point(58, 148);
			this->username_textbox->Name = L"username_textbox";
			this->username_textbox->Size = System::Drawing::Size(207, 22);
			this->username_textbox->TabIndex = 3;
			this->username_textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &menu::username_textbox_KeyDown);
			// 
			// password_textbox
			// 
			this->password_textbox->Location = System::Drawing::Point(58, 238);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(207, 22);
			this->password_textbox->TabIndex = 4;
			this->password_textbox->UseSystemPasswordChar = true;
			this->password_textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &menu::password_textbox_KeyDown);
			// 
			// login_button
			// 
			this->login_button->Enabled = false;
			this->login_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button->Location = System::Drawing::Point(58, 351);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(118, 43);
			this->login_button->TabIndex = 5;
			this->login_button->Text = L"Login";
			this->login_button->UseVisualStyleBackColor = true;
			// 
			// exit_button
			// 
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_button->Location = System::Drawing::Point(214, 351);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Size = System::Drawing::Size(118, 43);
			this->exit_button->TabIndex = 6;
			this->exit_button->Text = L"Exit";
			this->exit_button->UseVisualStyleBackColor = true;
			this->exit_button->Click += gcnew System::EventHandler(this, &menu::exit_button_Click);
			// 
			// terms_panel
			// 
			this->terms_panel->BackColor = System::Drawing::Color::Transparent;
			this->terms_panel->Controls->Add(this->terms_textbox);
			this->terms_panel->Controls->Add(this->ok_button);
			this->terms_panel->ForeColor = System::Drawing::Color::White;
			this->terms_panel->Location = System::Drawing::Point(420, 12);
			this->terms_panel->Name = L"terms_panel";
			this->terms_panel->Size = System::Drawing::Size(400, 407);
			this->terms_panel->TabIndex = 7;
			this->terms_panel->Visible = false;
			// 
			// terms_textbox
			// 
			this->terms_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->terms_textbox->Location = System::Drawing::Point(24, 24);
			this->terms_textbox->Multiline = true;
			this->terms_textbox->Name = L"terms_textbox";
			this->terms_textbox->ReadOnly = true;
			this->terms_textbox->Size = System::Drawing::Size(351, 292);
			this->terms_textbox->TabIndex = 8;
			this->terms_textbox->Text = L"These are the Terms and Conditions. Nothing special for now.";
			// 
			// ok_button
			// 
			this->ok_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ok_button->ForeColor = System::Drawing::Color::Black;
			this->ok_button->Location = System::Drawing::Point(141, 339);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(118, 43);
			this->ok_button->TabIndex = 7;
			this->ok_button->Text = L"OK";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &menu::ok_button_Click);
			// 
			// terms_checkbox
			// 
			this->terms_checkbox->AutoSize = true;
			this->terms_checkbox->BackColor = System::Drawing::Color::Transparent;
			this->terms_checkbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->terms_checkbox->ForeColor = System::Drawing::Color::White;
			this->terms_checkbox->Location = System::Drawing::Point(58, 296);
			this->terms_checkbox->Name = L"terms_checkbox";
			this->terms_checkbox->Size = System::Drawing::Size(122, 24);
			this->terms_checkbox->TabIndex = 8;
			this->terms_checkbox->Text = L"Agree to the";
			this->terms_checkbox->UseVisualStyleBackColor = false;
			this->terms_checkbox->CheckedChanged += gcnew System::EventHandler(this, &menu::terms_checkbox_CheckedChanged);
			// 
			// terms_label
			// 
			this->terms_label->AutoSize = true;
			this->terms_label->BackColor = System::Drawing::Color::Transparent;
			this->terms_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->terms_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->terms_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->terms_label->Location = System::Drawing::Point(159, 297);
			this->terms_label->Name = L"terms_label";
			this->terms_label->Size = System::Drawing::Size(173, 20);
			this->terms_label->TabIndex = 9;
			this->terms_label->Text = L"Terms and Conditions";
			this->terms_label->Click += gcnew System::EventHandler(this, &menu::terms_label_Click);
			// 
			// menu
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(832, 431);
			this->Controls->Add(this->terms_label);
			this->Controls->Add(this->terms_checkbox);
			this->Controls->Add(this->terms_panel);
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
			this->terms_panel->ResumeLayout(false);
			this->terms_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Void terms_label_Click(Object^ sender, EventArgs^ e)
		{
			this->terms_panel->Show();
		}

		Void ok_button_Click(Object^ sender, EventArgs^ e)
		{
			this->terms_panel->Hide();
		}

		Void exit_button_Click(Object^ sender, EventArgs^ e)
		{
			if (MessageBox::Show("Are you sure you want to exit", "Exit",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				Application::Exit();
		}

		Void terms_checkbox_CheckedChanged(Object^ sender, EventArgs^ e)
		{
			this->login_button->Enabled = this->terms_checkbox->Checked;
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
			login_button->PerformClick();
		}
#pragma endregion
	};
}
