#pragma once
#include "user.h"

namespace PracticeStage1
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for task
	/// </summary>
	public ref class task : public System::Windows::Forms::Form
	{
	public:
		task()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~task()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(task::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(82, 564);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Task";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(283, 564);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Remove Task";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// task
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(931, 667);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"task";
			this->Text = L"task";
			this->Load += gcnew System::EventHandler(this, &task::task_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		void RunTasks()
		{
			//define username
			System::DateTime now = System::DateTime::Now;
			now = DateTime::Parse(L"06/06/2021 20:00:00");
			Console::Write(now.ToString());
		}
	private:
		Void task_Load(Object^ sender, EventArgs^ e)
		{
			RunTasks();
		}
#pragma endregion
	
	};
}
