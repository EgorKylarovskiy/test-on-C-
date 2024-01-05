namespace Projecttestframework {

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
	private: System::Windows::Forms::RadioButton^ radioButton_1812;
	private: System::Windows::Forms::Label^ labelnegr;
	protected:

	protected:

	private: System::Windows::Forms::RadioButton^ radioButton_1769;
	private: System::Windows::Forms::RadioButton^ radioButton_1644;
	private: System::Windows::Forms::RadioButton^ radioButton_1728;



	private: System::Windows::Forms::RadioButton^ radioButton_1714;
	private: System::Windows::Forms::RadioButton^ radioButton_1488;
	private: System::Windows::Forms::Label^ labelpyps;




	private: System::Windows::Forms::RadioButton^ radioButton_noway;

	

	private:
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
			this->radioButton_1812 = (gcnew System::Windows::Forms::RadioButton());
			this->labelnegr = (gcnew System::Windows::Forms::Label());
			this->radioButton_1769 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_1644 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_1728 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_1714 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_1488 = (gcnew System::Windows::Forms::RadioButton());
			this->labelpyps = (gcnew System::Windows::Forms::Label());
			this->radioButton_noway = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// radioButton_1812
			// 
			this->radioButton_1812->AutoSize = true;
			this->radioButton_1812->Location = System::Drawing::Point(38, 184);
			this->radioButton_1812->Name = L"radioButton_1812";
			this->radioButton_1812->Size = System::Drawing::Size(49, 17);
			this->radioButton_1812->TabIndex = 0;
			this->radioButton_1812->Text = L"1812";
			this->radioButton_1812->UseVisualStyleBackColor = true;
			this->radioButton_1812->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_1812_CheckedChanged);
			this->radioButton_1812->Click += gcnew System::EventHandler(this, &MyForm::radioButton_1812_CheckedChanged);
			// 
			// labelnegr
			// 
			this->labelnegr->AutoSize = true;
			this->labelnegr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnegr->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->labelnegr->Location = System::Drawing::Point(87, 18);
			this->labelnegr->Name = L"labelnegr";
			this->labelnegr->Size = System::Drawing::Size(93, 33);
			this->labelnegr->TabIndex = 1;
			this->labelnegr->Text = L"TEST";
			this->labelnegr->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// radioButton_1769
			// 
			this->radioButton_1769->AutoSize = true;
			this->radioButton_1769->Location = System::Drawing::Point(197, 184);
			this->radioButton_1769->Name = L"radioButton_1769";
			this->radioButton_1769->Size = System::Drawing::Size(49, 17);
			this->radioButton_1769->TabIndex = 2;
			this->radioButton_1769->Text = L"1769";
			this->radioButton_1769->UseVisualStyleBackColor = true;
			this->radioButton_1769->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_1769_CheckedChanged);
			this->radioButton_1769->Click += gcnew System::EventHandler(this, &MyForm::radioButton_1769_CheckedChanged);
			// 
			// radioButton_1644
			// 
			this->radioButton_1644->AutoSize = true;
			this->radioButton_1644->Location = System::Drawing::Point(38, 251);
			this->radioButton_1644->Name = L"radioButton_1644";
			this->radioButton_1644->Size = System::Drawing::Size(49, 17);
			this->radioButton_1644->TabIndex = 3;
			this->radioButton_1644->Text = L"1644";
			this->radioButton_1644->UseVisualStyleBackColor = true;
			this->radioButton_1644->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_1644_CheckedChanged);
			this->radioButton_1644->Click += gcnew System::EventHandler(this, &MyForm::radioButton_1644_CheckedChanged);
			// 
			// radioButton_1728
			// 
			this->radioButton_1728->AutoSize = true;
			this->radioButton_1728->Location = System::Drawing::Point(197, 251);
			this->radioButton_1728->Name = L"radioButton_1728";
			this->radioButton_1728->Size = System::Drawing::Size(49, 17);
			this->radioButton_1728->TabIndex = 4;
			this->radioButton_1728->Text = L"1728";
			this->radioButton_1728->UseVisualStyleBackColor = true;
			this->radioButton_1728->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_1728_CheckedChanged);
			this->radioButton_1728->Click += gcnew System::EventHandler(this, &MyForm::radioButton_1728_CheckedChanged);
			// 
			// radioButton_1714
			// 
			this->radioButton_1714->AutoSize = true;
			this->radioButton_1714->Location = System::Drawing::Point(38, 127);
			this->radioButton_1714->Name = L"radioButton_1714";
			this->radioButton_1714->Size = System::Drawing::Size(49, 17);
			this->radioButton_1714->TabIndex = 5;
			this->radioButton_1714->Text = L"1714";
			this->radioButton_1714->UseVisualStyleBackColor = true;
			this->radioButton_1714->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_1714_CheckedChanged);
			this->radioButton_1714->Click += gcnew System::EventHandler(this, &MyForm::radioButton_1714_CheckedChanged);
			// 
			// radioButton_1488
			// 
			this->radioButton_1488->AutoSize = true;
			this->radioButton_1488->Location = System::Drawing::Point(197, 127);
			this->radioButton_1488->Name = L"radioButton_1488";
			this->radioButton_1488->Size = System::Drawing::Size(49, 17);
			this->radioButton_1488->TabIndex = 6;
			this->radioButton_1488->Text = L"1488";
			this->radioButton_1488->UseVisualStyleBackColor = true;
			this->radioButton_1488->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_1488_CheckedChanged);
			this->radioButton_1488->Click += gcnew System::EventHandler(this, &MyForm::radioButton_1488_CheckedChanged);
			// 
			// labelpyps
			// 
			this->labelpyps->AutoSize = true;
			this->labelpyps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpyps->Location = System::Drawing::Point(12, 78);
			this->labelpyps->Name = L"labelpyps";
			this->labelpyps->Size = System::Drawing::Size(254, 16);
			this->labelpyps->TabIndex = 7;
			this->labelpyps->Text = L"коли народився Наполеон Бонапарт\?";
			this->labelpyps->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// radioButton_noway
			// 
			this->radioButton_noway->Location = System::Drawing::Point(38, 290);
			this->radioButton_noway->Name = L"radioButton_noway";
			this->radioButton_noway->Size = System::Drawing::Size(218, 17);
			this->radioButton_noway->TabIndex = 9;
			this->radioButton_noway->Text = L"тут немає жодної правильної відповіді";
			this->radioButton_noway->UseVisualStyleBackColor = true;
			this->radioButton_noway->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_noway_CheckedChanged);
			this->radioButton_noway->Click += gcnew System::EventHandler(this, &MyForm::radioButton_noway_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(270, 355);
			this->Controls->Add(this->radioButton_noway);
			this->Controls->Add(this->labelpyps);
			this->Controls->Add(this->radioButton_1488);
			this->Controls->Add(this->radioButton_1714);
			this->Controls->Add(this->radioButton_1728);
			this->Controls->Add(this->radioButton_1644);
			this->Controls->Add(this->radioButton_1769);
			this->Controls->Add(this->labelnegr);
			this->Controls->Add(this->radioButton_1812);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TEST HISTORY";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void radioButton_noway_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_noway->ForeColor = Color::Red;
			MessageBox::Show(this, "you mad a mistake try agane", "eror", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	private: System::Void radioButton_1644_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_1644->ForeColor = Color::Red;
		MessageBox::Show(this, "you mad a mistake try agane", "eror", MessageBoxButtons::OK, MessageBoxIcon::Error);


	}
	private: System::Void radioButton_1812_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_1812->ForeColor = Color::Red;
		MessageBox::Show(this, "you mad a mistake try agane", "eror", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	private: System::Void radioButton_1714_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_1714->ForeColor = Color::Red;
		MessageBox::Show(this, "you mad a mistake try agane", "eror", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	private: System::Void radioButton_1488_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_1488->ForeColor = Color::Red;
		MessageBox::Show(this, "you mad a mistake try agane", "eror", MessageBoxButtons::OK, MessageBoxIcon::Error);


	}
	private: System::Void radioButton_1769_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_1769->ForeColor = Color::Green;
		MessageBox::Show(this, "you answered correctly", "true", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	private: System::Void radioButton_1728_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->radioButton_1728->ForeColor = Color::Red;
		MessageBox::Show(this, "you mad a mistake try agane", "eror", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
};
}
