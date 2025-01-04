#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h> // This is For wxSpinCtrl

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(50, 50), wxSize(100, 35));

	wxCheckBox* checkbox = new wxCheckBox(panel, wxID_ANY, "CheckBox",wxPoint(550,50));

	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "I Can't Move From Here", wxPoint(50, 150));

	wxTextCtrl* textBox = new wxTextCtrl(panel, wxID_ANY, "You Can Change This", wxPoint(550, 150), wxSize(200, 20));

	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(50, 250), wxSize(200, -1));

	wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(550, 250), wxSize(200, -1));
	gauge->SetValue(50);

	wxArrayString Choices;
	Choices.Add("Option A");
	Choices.Add("Option B");
	Choices.Add("Option C");
	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(50, 350), wxSize(200, -1), Choices);
	choice->Select(0);              //sauthi pahela 0th index option dekhashe , Option A

	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(50, 450), wxSize(200, -1));  //just like Number input in HTML ,Also Can Set Min & Max Value
}