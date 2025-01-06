#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h> // This is For wxSpinCtrl

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(50, 50), wxSize(100, 35), wxBU_LEFT); //Normal Button

	wxCheckBox* checkbox = new wxCheckBox(panel, wxID_ANY, "CheckBox",wxPoint(550,50),wxDefaultSize,wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);  //Tick Mark Karva Mate

	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "I Can't Move From Here", wxPoint(50, 150),wxSize(300,-1),wxALIGN_CENTRE_HORIZONTAL);   //Aa Text Ma Kayi J Ferfar Naa Thay
	staticText->SetBackgroundColour(*wxLIGHT_GREY);//for add background colour

	wxTextCtrl* textBox = new wxTextCtrl(panel, wxID_ANY, "You Can Change This", wxPoint(550, 150), wxSize(200, 20),wxTE_PASSWORD);   //Aani Andar Na Text Ne Change Kari Sakay

	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(50, 250), wxSize(200, -1),wxSL_VALUE_LABEL);   //drag to Slide To Adjust Value

	wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(550, 250), wxSize(-1 , 100),wxGA_VERTICAL);    //Mast Progress Bar Show Karavava Mate
	gauge->SetValue(50);   //Progress Bar 50 sudhi dekhshe

	wxArrayString Choices;    //To Make Array Of String
	Choices.Add("Option C");
	Choices.Add("Option A");  //Add It In Array
	Choices.Add("Option B");
	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(50, 350), wxSize(200, -1), Choices,wxCB_SORT);
	choice->Select(0);              //sauthi pahela 0th index option dekhashe , Option A

	wxListBox* listbox = new wxListBox(panel, wxID_ANY, wxPoint(550, 350), wxSize(200, -1), Choices, wxLB_MULTIPLE);  //jyare box ma Click karine Select Karvanu Hoy Tyare

	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(50, 450), wxSize(200, -1),wxSP_WRAP);  //just like Number input in HTML ,Also Can Set Min & Max Value

	wxRadioBox* radiobox = new wxRadioBox(panel, wxID_ANY, "Choose", wxPoint(550,450), wxDefaultSize, Choices);  // Radio button when you what to Select Only One Option At a Time by User
}