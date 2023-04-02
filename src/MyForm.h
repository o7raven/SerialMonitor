#pragma once
#include <ctime>
#include <string>
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
			sp->Close();
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
	private: System::Windows::Forms::Panel^ BorderPanel;
	private: System::Windows::Forms::Button^ btnX;
	private: System::Windows::Forms::Label^ version;
	private: System::Windows::Forms::Button^ btnRefresh;

	private: System::Windows::Forms::Button^ btnMinimize;











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
			this->BorderPanel = (gcnew System::Windows::Forms::Panel());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->version = (gcnew System::Windows::Forms::Label());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->BorderPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// serialPort
			// 
			this->serialPort->AutoSize = true;
			this->serialPort->Font = (gcnew System::Drawing::Font(L"Cascadia Mono ExtraLight", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->serialPort->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->serialPort->Location = System::Drawing::Point(8, 56);
			this->serialPort->Name = L"serialPort";
			this->serialPort->Size = System::Drawing::Size(131, 22);
			this->serialPort->TabIndex = 0;
			this->serialPort->Text = L"Serial Port";
			// 
			// baudRate
			// 
			this->baudRate->AutoSize = true;
			this->baudRate->Font = (gcnew System::Drawing::Font(L"Cascadia Mono ExtraLight", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->baudRate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->baudRate->Location = System::Drawing::Point(8, 122);
			this->baudRate->Name = L"baudRate";
			this->baudRate->Size = System::Drawing::Size(109, 22);
			this->baudRate->TabIndex = 1;
			this->baudRate->Text = L"Baud Rate";
			this->baudRate->Click += gcnew System::EventHandler(this, &MyForm::baudRate_Click);
			// 
			// cbPort
			// 
			this->cbPort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbPort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbPort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbPort->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbPort->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbPort->FormattingEnabled = true;
			this->cbPort->Location = System::Drawing::Point(12, 81);
			this->cbPort->Name = L"cbPort";
			this->cbPort->Size = System::Drawing::Size(153, 35);
			this->cbPort->TabIndex = 2;
			this->cbPort->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbPort_SelectedIndexChanged);
			this->cbPort->SelectedValueChanged += gcnew System::EventHandler(this, &MyForm::cbPort_SelectedValueChanged);
			// 
			// cbBaudRate
			// 
			this->cbBaudRate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbBaudRate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbBaudRate->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbBaudRate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbBaudRate->FormattingEnabled = true;
			this->cbBaudRate->Location = System::Drawing::Point(12, 147);
			this->cbBaudRate->Name = L"cbBaudRate";
			this->cbBaudRate->Size = System::Drawing::Size(257, 35);
			this->cbBaudRate->TabIndex = 3;
			// 
			// btnConnect
			// 
			this->btnConnect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnConnect->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->btnConnect->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnConnect->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnConnect->FlatAppearance->BorderSize = 0;
			this->btnConnect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConnect->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConnect->Location = System::Drawing::Point(12, 601);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(257, 35);
			this->btnConnect->TabIndex = 4;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = false;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::btnConnect_Click);
			// 
			// tbData
			// 
			this->tbData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->tbData->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbData->Cursor = System::Windows::Forms::Cursors::Default;
			this->tbData->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbData->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->tbData->Location = System::Drawing::Point(288, 81);
			this->tbData->Multiline = true;
			this->tbData->Name = L"tbData";
			this->tbData->ReadOnly = true;
			this->tbData->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbData->Size = System::Drawing::Size(484, 514);
			this->tbData->TabIndex = 5;
			this->tbData->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbSend
			// 
			this->tbSend->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbSend->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->tbSend->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSend->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSend->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->tbSend->Location = System::Drawing::Point(288, 602);
			this->tbSend->Multiline = true;
			this->tbSend->Name = L"tbSend";
			this->tbSend->Size = System::Drawing::Size(385, 34);
			this->tbSend->TabIndex = 6;
			this->tbSend->TextChanged += gcnew System::EventHandler(this, &MyForm::tbSend_TextChanged);
			this->tbSend->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::tbSend_KeyDown);
			// 
			// btnSend
			// 
			this->btnSend->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSend->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->btnSend->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSend->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnSend->FlatAppearance->BorderSize = 0;
			this->btnSend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend->Location = System::Drawing::Point(679, 601);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(93, 35);
			this->btnSend->TabIndex = 7;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = false;
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
			this->SerialMonitor->BackColor = System::Drawing::Color::Transparent;
			this->SerialMonitor->Font = (gcnew System::Drawing::Font(L"Cascadia Mono ExtraLight", 12.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SerialMonitor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->SerialMonitor->Location = System::Drawing::Point(284, 56);
			this->SerialMonitor->Name = L"SerialMonitor";
			this->SerialMonitor->Size = System::Drawing::Size(164, 22);
			this->SerialMonitor->TabIndex = 8;
			this->SerialMonitor->Text = L"Serial Monitor";
			this->SerialMonitor->Click += gcnew System::EventHandler(this, &MyForm::SerialMonitor_Click);
			// 
			// cbDataBits
			// 
			this->cbDataBits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbDataBits->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbDataBits->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbDataBits->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbDataBits->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbDataBits->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbDataBits->FormattingEnabled = true;
			this->cbDataBits->Location = System::Drawing::Point(12, 277);
			this->cbDataBits->Name = L"cbDataBits";
			this->cbDataBits->Size = System::Drawing::Size(257, 35);
			this->cbDataBits->TabIndex = 12;
			// 
			// cbParity
			// 
			this->cbParity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->cbParity->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cbParity->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbParity->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbParity->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbParity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->cbParity->FormattingEnabled = true;
			this->cbParity->Location = System::Drawing::Point(12, 210);
			this->cbParity->Name = L"cbParity";
			this->cbParity->Size = System::Drawing::Size(257, 35);
			this->cbParity->TabIndex = 11;
			this->cbParity->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbParity_SelectedIndexChanged);
			// 
			// dataBits
			// 
			this->dataBits->AutoSize = true;
			this->dataBits->Font = (gcnew System::Drawing::Font(L"Cascadia Mono ExtraLight", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataBits->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->dataBits->Location = System::Drawing::Point(8, 254);
			this->dataBits->Name = L"dataBits";
			this->dataBits->Size = System::Drawing::Size(109, 22);
			this->dataBits->TabIndex = 10;
			this->dataBits->Text = L"Data Bits";
			// 
			// parity
			// 
			this->parity->AutoSize = true;
			this->parity->Font = (gcnew System::Drawing::Font(L"Cascadia Mono ExtraLight", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->parity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->parity->Location = System::Drawing::Point(8, 185);
			this->parity->Name = L"parity";
			this->parity->Size = System::Drawing::Size(76, 22);
			this->parity->TabIndex = 9;
			this->parity->Text = L"Parity";
			// 
			// console
			// 
			this->console->AutoSize = true;
			this->console->Font = (gcnew System::Drawing::Font(L"Cascadia Mono ExtraLight", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->console->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->console->Location = System::Drawing::Point(8, 328);
			this->console->Name = L"console";
			this->console->Size = System::Drawing::Size(87, 22);
			this->console->TabIndex = 14;
			this->console->Text = L"Console";
			// 
			// tbConsole
			// 
			this->tbConsole->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->tbConsole->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->tbConsole->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbConsole->Cursor = System::Windows::Forms::Cursors::Default;
			this->tbConsole->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiLight", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConsole->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->tbConsole->Location = System::Drawing::Point(12, 353);
			this->tbConsole->Multiline = true;
			this->tbConsole->Name = L"tbConsole";
			this->tbConsole->ReadOnly = true;
			this->tbConsole->Size = System::Drawing::Size(257, 242);
			this->tbConsole->TabIndex = 13;
			this->tbConsole->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// BorderPanel
			// 
			this->BorderPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BorderPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->BorderPanel->Controls->Add(this->btnMinimize);
			this->BorderPanel->Controls->Add(this->version);
			this->BorderPanel->Controls->Add(this->btnX);
			this->BorderPanel->Location = System::Drawing::Point(-2, -2);
			this->BorderPanel->Name = L"BorderPanel";
			this->BorderPanel->Size = System::Drawing::Size(791, 46);
			this->BorderPanel->TabIndex = 15;
			this->BorderPanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::BorderPanel_MouseDown);
			this->BorderPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::BorderPanel_MouseMove);
			// 
			// btnMinimize
			// 
			this->btnMinimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnMinimize->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btnMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->Font = (gcnew System::Drawing::Font(L"Ebrima", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinimize->Location = System::Drawing::Point(665, 0);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(63, 46);
			this->btnMinimize->TabIndex = 2;
			this->btnMinimize->Text = L"-";
			this->btnMinimize->UseVisualStyleBackColor = false;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &MyForm::btnMinimize_Click);
			// 
			// version
			// 
			this->version->AutoSize = true;
			this->version->Location = System::Drawing::Point(14, 19);
			this->version->Name = L"version";
			this->version->Size = System::Drawing::Size(41, 13);
			this->version->TabIndex = 1;
			this->version->Text = L"version";
			// 
			// btnX
			// 
			this->btnX->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(131)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->btnX->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnX->FlatAppearance->BorderSize = 0;
			this->btnX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnX->Font = (gcnew System::Drawing::Font(L"Ebrima", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnX->Location = System::Drawing::Point(725, 0);
			this->btnX->Name = L"btnX";
			this->btnX->Size = System::Drawing::Size(63, 46);
			this->btnX->TabIndex = 0;
			this->btnX->Text = L"x";
			this->btnX->UseVisualStyleBackColor = false;
			this->btnX->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnRefresh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRefresh->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Cascadia Code ExtraLight", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->btnRefresh->Location = System::Drawing::Point(171, 81);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(98, 35);
			this->btnRefresh->TabIndex = 16;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = false;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(784, 649);
			this->Controls->Add(this->BorderPanel);
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
			this->Controls->Add(this->btnRefresh);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MinimumSize = System::Drawing::Size(515, 600);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Serial Monitor v1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->BorderPanel->ResumeLayout(false);
			this->BorderPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e) {
		version->Text = "v1.0.6";

		array<Object^>^ comport = SerialPort::GetPortNames();
		cbPort->Items->AddRange(comport);
		cbPort->SelectedIndex = 0;

		array<Object^>^ baudRate = { 9600, 600, 1800, 4800, 28800, 57600, 115200, 230400, 576000 };
		cbBaudRate->Items->AddRange(baudRate);
		cbBaudRate->SelectedIndex = 0;

		array<Object^>^ parity = {"None", "Odd", "Even", "Mark", "Space"};
		cbParity->Items->AddRange(parity);
		cbParity->SelectedIndex = 0;

		array<Object^>^ dataBits = { 8,7,6,5,9 };
		cbDataBits->Items->AddRange(dataBits);
		cbDataBits->SelectedIndex = 0;
	}
	
	private: System::Void cbPort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void baudRate_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sp->IsOpen) {
			sp->WriteLine(tbSend->Text + Environment::NewLine);
		}
		else {
			tbConsole->AppendText("No port connection [001]" + Environment::NewLine);
		}
	}


	private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
		time_t now = time(0);
		tm* ltm = localtime(&now);
		try {
			if (!(sp->IsOpen)) {
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
		if (sp->IsOpen) {
			sp->WriteLine(tbSend->Text + Environment::NewLine);
			tbSend->Text = "";
		}
		else {
			tbConsole->AppendText("No port connection [001]" + Environment::NewLine);
		}
	}
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	sp->Close();
	System::Windows::Forms::Application::Exit();
}

private: Point _mouseLocation;
private: System::Void BorderPanel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	_mouseLocation = e->Location;
	

}	
private: System::Void BorderPanel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if(e->Button == System::Windows::Forms::MouseButtons::Left){
		int dx = e->Location.X - _mouseLocation.X;
		int dy = e->Location.Y - _mouseLocation.Y;
		MyForm::Location = Point(MyForm::Location.X + dx, MyForm::Location.Y + dy);
	}


}
private: System::Void btnMin_Click(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sp->IsOpen) {
		sp->Close();
		btnConnect->Text = "Connect";
		tbConsole->AppendText("[002] Disconnected [" + sp->PortName + "]");
	}
	array<Object^>^ comport = SerialPort::GetPortNames();
	cbPort->Items->Clear();
	cbPort->Items->AddRange(comport);
	cbPort->SelectedIndex = 0;
}

private: System::Void cbPort_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sp->IsOpen) {
		tbConsole->AppendText("[002] Disconnected [" + sp->PortName + "]");
		btnConnect->Text = "Connect";
		sp->Close();
	}

}

private: System::Void btnMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
};


}
