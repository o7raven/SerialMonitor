#pragma once
#include <ctime>
namespace Serial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;


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
	private: System::Windows::Forms::Label^ serialPort;
	private: System::Windows::Forms::Label^ baudRate;
	private: System::Windows::Forms::ComboBox^ cbPort;
	private: System::Windows::Forms::ComboBox^ cbBaudRate;
	private: System::Windows::Forms::Button^ btnConnect;
	private: System::Windows::Forms::TextBox^ tbData;
	private: System::Windows::Forms::TextBox^ tbSend;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::IO::Ports::SerialPort^ sp;
	private: System::Windows::Forms::Label^ SerialMonitor;
	private: System::Windows::Forms::ComboBox^ cbDataBits;
	private: System::Windows::Forms::ComboBox^ cbParity;
	private: System::Windows::Forms::Label^ dataBits;
	private: System::Windows::Forms::Label^ parity;
	private: System::Windows::Forms::Label^ console;
	private: System::Windows::Forms::TextBox^ tbConsole;






	private: System::ComponentModel::IContainer^ components;


	protected:

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
			this->serialPort = (gcnew System::Windows::Forms::Label());
			this->baudRate = (gcnew System::Windows::Forms::Label());
			this->cbPort = (gcnew System::Windows::Forms::ComboBox());
			this->cbBaudRate = (gcnew System::Windows::Forms::ComboBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->tbData = (gcnew System::Windows::Forms::TextBox());
			this->tbSend = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->sp = (gcnew System::IO::Ports::SerialPort(this->components));
			this->SerialMonitor = (gcnew System::Windows::Forms::Label());
			this->cbDataBits = (gcnew System::Windows::Forms::ComboBox());
			this->cbParity = (gcnew System::Windows::Forms::ComboBox());
			this->dataBits = (gcnew System::Windows::Forms::Label());
			this->parity = (gcnew System::Windows::Forms::Label());
			this->console = (gcnew System::Windows::Forms::Label());
			this->tbConsole = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// serialPort
			// 
			this->serialPort->AutoSize = true;
			this->serialPort->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->serialPort->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->serialPort->Location = System::Drawing::Point(8, 20);
			this->serialPort->Name = L"serialPort";
			this->serialPort->Size = System::Drawing::Size(98, 22);
			this->serialPort->TabIndex = 0;
			this->serialPort->Text = L"Serial Port";
			// 
			// baudRate
			// 
			this->baudRate->AutoSize = true;
			this->baudRate->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->baudRate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->baudRate->Location = System::Drawing::Point(8, 80);
			this->baudRate->Name = L"baudRate";
			this->baudRate->Size = System::Drawing::Size(95, 22);
			this->baudRate->TabIndex = 1;
			this->baudRate->Text = L"Baud Rate";
			this->baudRate->Click += gcnew System::EventHandler(this, &MyForm::baudRate_Click);
			// 
			// cbPort
			// 
			this->cbPort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbPort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbPort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbPort->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbPort->FormattingEnabled = true;
			this->cbPort->Location = System::Drawing::Point(12, 45);
			this->cbPort->Name = L"cbPort";
			this->cbPort->Size = System::Drawing::Size(201, 33);
			this->cbPort->TabIndex = 2;
			this->cbPort->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbPort_SelectedIndexChanged);
			// 
			// cbBaudRate
			// 
			this->cbBaudRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbBaudRate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbBaudRate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbBaudRate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbBaudRate->FormattingEnabled = true;
			this->cbBaudRate->Location = System::Drawing::Point(12, 105);
			this->cbBaudRate->Name = L"cbBaudRate";
			this->cbBaudRate->Size = System::Drawing::Size(201, 33);
			this->cbBaudRate->TabIndex = 3;
			// 
			// btnConnect
			// 
			this->btnConnect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnConnect->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConnect->Location = System::Drawing::Point(12, 553);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(201, 34);
			this->btnConnect->TabIndex = 4;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::btnConnect_Click);
			// 
			// tbData
			// 
			this->tbData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->tbData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbData->Cursor = System::Windows::Forms::Cursors::Default;
			this->tbData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbData->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->tbData->Location = System::Drawing::Point(288, 64);
			this->tbData->Multiline = true;
			this->tbData->Name = L"tbData";
			this->tbData->ReadOnly = true;
			this->tbData->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbData->Size = System::Drawing::Size(484, 456);
			this->tbData->TabIndex = 5;
			// 
			// tbSend
			// 
			this->tbSend->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbSend->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->tbSend->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSend->Location = System::Drawing::Point(288, 553);
			this->tbSend->Multiline = true;
			this->tbSend->Name = L"tbSend";
			this->tbSend->Size = System::Drawing::Size(405, 34);
			this->tbSend->TabIndex = 6;
			this->tbSend->TextChanged += gcnew System::EventHandler(this, &MyForm::tbSend_TextChanged);
			this->tbSend->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbSend_KeyDown);
			// 
			// btnSend
			// 
			this->btnSend->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSend->FlatAppearance->BorderSize = 0;
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend->Location = System::Drawing::Point(679, 553);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(93, 34);
			this->btnSend->TabIndex = 7;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &MyForm::btnSend_Click);
			// 
			// sp
			// 
			this->sp->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::sp_DataReceived);
			// 
			// SerialMonitor
			// 
			this->SerialMonitor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SerialMonitor->AutoSize = true;
			this->SerialMonitor->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 23, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SerialMonitor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->SerialMonitor->Location = System::Drawing::Point(281, 20);
			this->SerialMonitor->Name = L"SerialMonitor";
			this->SerialMonitor->Size = System::Drawing::Size(213, 37);
			this->SerialMonitor->TabIndex = 8;
			this->SerialMonitor->Text = L"Serial Monitor";
			this->SerialMonitor->Click += gcnew System::EventHandler(this, &MyForm::SerialMonitor_Click);
			// 
			// cbDataBits
			// 
			this->cbDataBits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbDataBits->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbDataBits->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbDataBits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbDataBits->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbDataBits->FormattingEnabled = true;
			this->cbDataBits->Location = System::Drawing::Point(12, 240);
			this->cbDataBits->Name = L"cbDataBits";
			this->cbDataBits->Size = System::Drawing::Size(201, 33);
			this->cbDataBits->TabIndex = 12;
			// 
			// cbParity
			// 
			this->cbParity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbParity->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbParity->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbParity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbParity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbParity->FormattingEnabled = true;
			this->cbParity->Location = System::Drawing::Point(12, 165);
			this->cbParity->Name = L"cbParity";
			this->cbParity->Size = System::Drawing::Size(201, 33);
			this->cbParity->TabIndex = 11;
			this->cbParity->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbParity_SelectedIndexChanged);
			// 
			// dataBits
			// 
			this->dataBits->AutoSize = true;
			this->dataBits->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataBits->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->dataBits->Location = System::Drawing::Point(8, 212);
			this->dataBits->Name = L"dataBits";
			this->dataBits->Size = System::Drawing::Size(85, 22);
			this->dataBits->TabIndex = 10;
			this->dataBits->Text = L"Data Bits";
			// 
			// parity
			// 
			this->parity->AutoSize = true;
			this->parity->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->parity->Location = System::Drawing::Point(8, 140);
			this->parity->Name = L"parity";
			this->parity->Size = System::Drawing::Size(59, 22);
			this->parity->TabIndex = 9;
			this->parity->Text = L"Parity";
			// 
			// console
			// 
			this->console->AutoSize = true;
			this->console->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->console->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->console->Location = System::Drawing::Point(6, 276);
			this->console->Name = L"console";
			this->console->Size = System::Drawing::Size(113, 33);
			this->console->TabIndex = 14;
			this->console->Text = L"Console";
			// 
			// tbConsole
			// 
			this->tbConsole->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->tbConsole->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->tbConsole->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbConsole->Cursor = System::Windows::Forms::Cursors::Default;
			this->tbConsole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConsole->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->tbConsole->Location = System::Drawing::Point(12, 312);
			this->tbConsole->Multiline = true;
			this->tbConsole->Name = L"tbConsole";
			this->tbConsole->ReadOnly = true;
			this->tbConsole->Size = System::Drawing::Size(201, 242);
			this->tbConsole->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(784, 600);
			this->Controls->Add(this->console);
			this->Controls->Add(this->tbConsole);
			this->Controls->Add(this->cbDataBits);
			this->Controls->Add(this->cbParity);
			this->Controls->Add(this->dataBits);
			this->Controls->Add(this->parity);
			this->Controls->Add(this->SerialMonitor);
			this->Controls->Add(this->tbSend);
			this->Controls->Add(this->tbData);
			this->Controls->Add(this->btnConnect);
			this->Controls->Add(this->cbBaudRate);
			this->Controls->Add(this->cbPort);
			this->Controls->Add(this->baudRate);
			this->Controls->Add(this->serialPort);
			this->Controls->Add(this->btnSend);
			this->MinimumSize = System::Drawing::Size(515, 600);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Serial Monitor v1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e) {
			


		array<Object^>^ comport = SerialPort::GetPortNames();
		cbPort->Items->AddRange(comport);
		cbPort->SelectedIndex = 0;

		array<Object^>^ baudRate = { 9600, 57600, 115200 };
		cbBaudRate->Items->AddRange(baudRate);
		cbBaudRate->SelectedIndex = 0;

		array<Object^>^ parity = {"None", "Odd", "Even", "Mark", "Space"};
		cbParity->Items->AddRange(parity);
		cbParity->SelectedIndex = 0;

		array<Object^>^ dataBits = { 8,7,6 };
		cbDataBits->Items->AddRange(dataBits);
		cbDataBits->SelectedIndex = 0;

	}
	
	private: System::Void cbPort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void baudRate_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		sp->WriteLine(tbSend->Text);
	}


	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		time_t now = time(0);
		tm* ltm = localtime(&now);
		try {
			if (!(sp->IsOpen)) {
				if (sp->IsOpen) {
					sp->Close();
				}
				sp->PortName = cbPort->Text;
				sp->BaudRate = Int32::Parse(cbBaudRate->Text);
				if(cbParity->Text == "None") {sp->Parity = Parity::None;}
				else if(cbParity->Text == "Odd"){sp->Parity = Parity::Odd;}
				else if (cbParity->Text == "Even") { sp->Parity = Parity::Even; }
				else if (cbParity->Text == "Mark") { sp->Parity = Parity::Mark; }
				else if (cbParity->Text == "Space") { sp->Parity = Parity::Space; }
				sp->DataBits = Int32::Parse(cbDataBits->Text);
				tbConsole->AppendText("[" + ltm->tm_hour + ":" + ltm->tm_min + "]" + " Connected " + "[" + cbPort->Text + "]" + Environment::NewLine);
				sp->Open();
				btnConnect->Text = "Disconnect";
				
			}
			else if (sp->IsOpen){
				sp->Close();
				tbConsole->AppendText("[" + ltm->tm_hour + ":" + ltm->tm_min + "]" + " Disconnected " + "[" + sp->PortName + "]" + Environment::NewLine);
				btnConnect->Text = "Connect";
			}
		}
		catch (...) {
			MessageBox::Show("An error has occured");
		}
	}
private: System::Void sp_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	tbData->AppendText(sp->ReadLine() + Environment::NewLine);
}

private: System::Void SerialMonitor_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void cbParity_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void tbSend_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void tbSend_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		sp->WriteLine(tbSend->Text);
		tbSend->Text = "";
	}
}


};


}
