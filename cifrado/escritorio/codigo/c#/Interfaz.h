
//#include "procesoDesencriptar.h";
#include "procesoDesencriptar.h";
#include "ProcesoEncriptado.h";

#include <iostream>
#include <string>
namespace EncriptadoCesar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Interfaz
	/// </summary>
	public ref class Interfaz : public System::Windows::Forms::Form
	{
	public:
		Interfaz(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Interfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelTextoPlano;
	private: System::Windows::Forms::Label^  LabelResultCifra;
	private: System::Windows::Forms::Label^  labelDesplazamiento;
	private: System::Windows::Forms::TextBox^  textBoxTexto;

	private: System::Windows::Forms::TextBox^  textBoxCifrado;
	private: System::Windows::Forms::Label^  labelDescifrado;
	private: System::Windows::Forms::TextBox^  textBoxDesc;
	private: System::Windows::Forms::Label^  labelTransposición;
	private: System::Windows::Forms::TextBox^  textBoxTrans;
	private: System::Windows::Forms::Panel^  panelCesar;
	private: System::Windows::Forms::ComboBox^  comboBoxDesplaz;
	private: System::Windows::Forms::Label^  labelCesar;
	private: System::Windows::Forms::Panel^  panelTransposicion;



	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelTextoPlano = (gcnew System::Windows::Forms::Label());
			this->LabelResultCifra = (gcnew System::Windows::Forms::Label());
			this->labelDesplazamiento = (gcnew System::Windows::Forms::Label());
			this->textBoxTexto = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCifrado = (gcnew System::Windows::Forms::TextBox());
			this->labelDescifrado = (gcnew System::Windows::Forms::Label());
			this->textBoxDesc = (gcnew System::Windows::Forms::TextBox());
			this->labelTransposición = (gcnew System::Windows::Forms::Label());
			this->textBoxTrans = (gcnew System::Windows::Forms::TextBox());
			this->panelCesar = (gcnew System::Windows::Forms::Panel());
			this->comboBoxDesplaz = (gcnew System::Windows::Forms::ComboBox());
			this->labelCesar = (gcnew System::Windows::Forms::Label());
			this->panelTransposicion = (gcnew System::Windows::Forms::Panel());
			this->panelCesar->SuspendLayout();
			this->panelTransposicion->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelTextoPlano
			// 
			this->labelTextoPlano->AutoSize = true;
			this->labelTextoPlano->Location = System::Drawing::Point(134, 35);
			this->labelTextoPlano->Name = L"labelTextoPlano";
			this->labelTextoPlano->Size = System::Drawing::Size(69, 13);
			this->labelTextoPlano->TabIndex = 0;
			this->labelTextoPlano->Text = L"Texto plano: ";
			// 
			// LabelResultCifra
			// 
			this->LabelResultCifra->AutoSize = true;
			this->LabelResultCifra->Location = System::Drawing::Point(33, 85);
			this->LabelResultCifra->Name = L"LabelResultCifra";
			this->LabelResultCifra->Size = System::Drawing::Size(75, 13);
			this->LabelResultCifra->TabIndex = 1;
			this->LabelResultCifra->Text = L"Texto cifrado: ";
			// 
			// labelDesplazamiento
			// 
			this->labelDesplazamiento->AutoSize = true;
			this->labelDesplazamiento->Location = System::Drawing::Point(33, 44);
			this->labelDesplazamiento->Name = L"labelDesplazamiento";
			this->labelDesplazamiento->Size = System::Drawing::Size(88, 13);
			this->labelDesplazamiento->TabIndex = 2;
			this->labelDesplazamiento->Text = L"Desplazamiento: ";
			this->labelDesplazamiento->Click += gcnew System::EventHandler(this, &Interfaz::label2_Click);
			// 
			// textBoxTexto
			// 
			this->textBoxTexto->AccessibleRole = System::Windows::Forms::AccessibleRole::Link;
			this->textBoxTexto->Location = System::Drawing::Point(217, 32);
			this->textBoxTexto->Name = L"textBoxTexto";
			this->textBoxTexto->Size = System::Drawing::Size(100, 20);
			this->textBoxTexto->TabIndex = 3;
			this->textBoxTexto->TextChanged += gcnew System::EventHandler(this, &Interfaz::textBoxTexto_TextChanged);
			// 
			// textBoxCifrado
			// 
			this->textBoxCifrado->Location = System::Drawing::Point(109, 78);
			this->textBoxCifrado->Name = L"textBoxCifrado";
			this->textBoxCifrado->Size = System::Drawing::Size(100, 20);
			this->textBoxCifrado->TabIndex = 5;
			this->textBoxCifrado->TextChanged += gcnew System::EventHandler(this, &Interfaz::textBoxCifrado_TextChanged);
			// 
			// labelDescifrado
			// 
			this->labelDescifrado->AutoSize = true;
			this->labelDescifrado->Location = System::Drawing::Point(15, 125);
			this->labelDescifrado->Name = L"labelDescifrado";
			this->labelDescifrado->Size = System::Drawing::Size(64, 13);
			this->labelDescifrado->TabIndex = 6;
			this->labelDescifrado->Text = L"Descifrado: ";
			// 
			// textBoxDesc
			// 
			this->textBoxDesc->Location = System::Drawing::Point(109, 122);
			this->textBoxDesc->Name = L"textBoxDesc";
			this->textBoxDesc->Size = System::Drawing::Size(100, 20);
			this->textBoxDesc->TabIndex = 7;
			this->textBoxDesc->TextChanged += gcnew System::EventHandler(this, &Interfaz::textBox1_TextChanged);
			// 
			// labelTransposición
			// 
			this->labelTransposición->AutoSize = true;
			this->labelTransposición->Location = System::Drawing::Point(3, 10);
			this->labelTransposición->Name = L"labelTransposición";
			this->labelTransposición->Size = System::Drawing::Size(217, 13);
			this->labelTransposición->TabIndex = 8;
			this->labelTransposición->Text = L"Cifrado de Transposición Inversa por Grupos";
			// 
			// textBoxTrans
			// 
			this->textBoxTrans->Location = System::Drawing::Point(24, 45);
			this->textBoxTrans->Name = L"textBoxTrans";
			this->textBoxTrans->Size = System::Drawing::Size(179, 20);
			this->textBoxTrans->TabIndex = 9;
			// 
			// panelCesar
			// 
			this->panelCesar->Controls->Add(this->comboBoxDesplaz);
			this->panelCesar->Controls->Add(this->labelCesar);
			this->panelCesar->Controls->Add(this->labelDesplazamiento);
			this->panelCesar->Controls->Add(this->labelDescifrado);
			this->panelCesar->Controls->Add(this->textBoxDesc);
			this->panelCesar->Controls->Add(this->textBoxCifrado);
			this->panelCesar->Controls->Add(this->LabelResultCifra);
			this->panelCesar->Location = System::Drawing::Point(12, 87);
			this->panelCesar->Name = L"panelCesar";
			this->panelCesar->Size = System::Drawing::Size(225, 169);
			this->panelCesar->TabIndex = 10;
			// 
			// comboBoxDesplaz
			// 
			this->comboBoxDesplaz->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) { L"1", L"2", L"3" });
			this->comboBoxDesplaz->FormattingEnabled = true;
			this->comboBoxDesplaz->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->comboBoxDesplaz->Location = System::Drawing::Point(125, 44);
			this->comboBoxDesplaz->Name = L"comboBoxDesplaz";
			this->comboBoxDesplaz->Size = System::Drawing::Size(38, 21);
			this->comboBoxDesplaz->TabIndex = 1;
			this->comboBoxDesplaz->Text = L"0";
			this->comboBoxDesplaz->SelectedIndexChanged += gcnew System::EventHandler(this, &Interfaz::comboBoxDesplaz_SelectedIndexChanged);
			// 
			// labelCesar
			// 
			this->labelCesar->AutoSize = true;
			this->labelCesar->Location = System::Drawing::Point(51, 17);
			this->labelCesar->Name = L"labelCesar";
			this->labelCesar->Size = System::Drawing::Size(96, 13);
			this->labelCesar->TabIndex = 0;
			this->labelCesar->Text = L"Encriptacion Cesar";
			// 
			// panelTransposicion
			// 
			this->panelTransposicion->Controls->Add(this->textBoxTrans);
			this->panelTransposicion->Controls->Add(this->labelTransposición);
			this->panelTransposicion->Location = System::Drawing::Point(243, 87);
			this->panelTransposicion->Name = L"panelTransposicion";
			this->panelTransposicion->Size = System::Drawing::Size(227, 121);
			this->panelTransposicion->TabIndex = 11;
			// 
			// Interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(482, 316);
			this->Controls->Add(this->panelTransposicion);
			this->Controls->Add(this->panelCesar);
			this->Controls->Add(this->textBoxTexto);
			this->Controls->Add(this->labelTextoPlano);
			this->Name = L"Interfaz";
			this->Text = L"Cifrado Cesar";
			this->Load += gcnew System::EventHandler(this, &Interfaz::Interfaz_Load);
			this->panelCesar->ResumeLayout(false);
			this->panelCesar->PerformLayout();
			this->panelTransposicion->ResumeLayout(false);
			this->panelTransposicion->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBoxTexto_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		std::string sa = "";
		std::string des = "";
		System::String^ transpParte = "";
		System::String^ transp = "";
		ProcesoEncriptado encriptado = ProcesoEncriptado();
		procesoDesencriptado desencriptado = procesoDesencriptado();

		int despl = 0;
		/*if (comboBoxDesplaz->SelectedItem->ToString() != "")
			despl = System::Convert::ToInt16(comboBoxDesplaz->SelectedItem->ToString());*/
		despl = System::Convert::ToInt16(comboBoxDesplaz->SelectedItem);
		for (int itera = 0; itera < textBoxTexto->Text->Length; itera++)
		{
			sa = sa + encriptado.retornarCaracter(textBoxTexto->Text[itera], despl);

			/*	if (textBoxTexto->Text[itera] == ' ')
			{ transp = transp + textBoxTexto->Text[itera]+transpParte; transpParte = "";
			}else
			{
			transpParte = textBoxTexto->Text[itera] + transpParte;
			}
			*/
			transp = textBoxTexto->Text[itera] + transp;
		}

		textBoxCifrado->Text = gcnew String(sa.c_str());
		textBoxTrans->Text = transp;
		for (int itera = 0; itera < textBoxCifrado->Text->Length; itera++)
		{
			des = des + desencriptado.retornarCaracter(textBoxCifrado->
				Text[itera], despl);
		}
		textBoxDesc->Text = gcnew String(des.c_str());


		
	}
	private: System::Void textBoxCifrado_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//Alfabeto alfa= Alfabeto();
		std::string des = "";
		
		procesoDesencriptado desencriptado = procesoDesencriptado();

		int despl = 0;
		/*if(comboBoxDesplaz->SelectedItem->ToString() != "")
			despl = System::Convert::ToInt16(comboBoxDesplaz->SelectedItem->ToString());*/
		despl = System::Convert::ToInt16(comboBoxDesplaz->SelectedItem);
		for (int itera = 0; itera < textBoxCifrado->Text->Length; itera++)
		{
			des = des + desencriptado.retornarCaracter(textBoxCifrado->
			Text[itera],despl);
		}
		textBoxTexto->Text = gcnew String(des.c_str());

		
	//textBoxTexto->Text = gcnew String(std::to_string(alfa.vacio()).c_str());

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxDesplaz_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBoxDesplaz_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//labelCesar->Text=comboBoxDesplaz->SelectedItem->ToString();

}
private: System::Void Interfaz_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
