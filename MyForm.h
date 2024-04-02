#pragma once

namespace Lab51 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem3;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->��������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->��������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStrip1;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����������� ������";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem2,
					this->�������ToolStripMenuItem2, this->����ToolStripMenuItem2
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(150, 76);
			// 
			// ��������ToolStripMenuItem2
			// 
			this->��������ToolStripMenuItem2->Name = L"��������ToolStripMenuItem2";
			this->��������ToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->��������ToolStripMenuItem2->Text = L"��������";
			this->��������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem2_Click);
			// 
			// �������ToolStripMenuItem2
			// 
			this->�������ToolStripMenuItem2->Name = L"�������ToolStripMenuItem2";
			this->�������ToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->�������ToolStripMenuItem2->Text = L"�������";
			this->�������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem2_Click);
			// 
			// ����ToolStripMenuItem2
			// 
			this->����ToolStripMenuItem2->Name = L"����ToolStripMenuItem2";
			this->����ToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->����ToolStripMenuItem2->Text = L"����";
			this->����ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(412, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem1,
					this->�������ToolStripMenuItem1, this->����ToolStripMenuItem1
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(163, 26);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(163, 26);
			this->�������ToolStripMenuItem1->Text = L"�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(163, 26);
			this->����ToolStripMenuItem1->Text = L"����";
			this->����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem1_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem3,
					this->�������ToolStripMenuItem3, this->����ToolStripMenuItem3
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(150, 76);
			// 
			// ��������ToolStripMenuItem3
			// 
			this->��������ToolStripMenuItem3->Name = L"��������ToolStripMenuItem3";
			this->��������ToolStripMenuItem3->Size = System::Drawing::Size(149, 24);
			this->��������ToolStripMenuItem3->Text = L"��������";
			this->��������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem3_Click);
			// 
			// �������ToolStripMenuItem3
			// 
			this->�������ToolStripMenuItem3->Name = L"�������ToolStripMenuItem3";
			this->�������ToolStripMenuItem3->Size = System::Drawing::Size(149, 24);
			this->�������ToolStripMenuItem3->Text = L"�������";
			this->�������ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem3_Click);
			// 
			// ����ToolStripMenuItem3
			// 
			this->����ToolStripMenuItem3->Name = L"����ToolStripMenuItem3";
			this->����ToolStripMenuItem3->Size = System::Drawing::Size(149, 24);
			this->����ToolStripMenuItem3->Text = L"����";
			this->����ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 379);
			this->ContextMenuStrip = this->contextMenuStrip2;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"����������� ������ �5";
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Red;
	}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Blue;
}
private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor= Color::Red;
}
private: System::Void �������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
	private: System::Void ����ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		BackColor = Color::Blue;
	}
private: System::Void ��������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Red;
}
private: System::Void �������ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void ����ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Blue;
}
private: System::Void ��������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Red;
}
private: System::Void �������ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
private: System::Void ����ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
