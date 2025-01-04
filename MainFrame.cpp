#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(50, 50), wxSize(100, 35));

	wxCheckBox* checkbox = new wxCheckBox(panel, wxID_ANY, "CheckBox",wxPoint(550,50));

	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "I Can't Move From Here", wxPoint(50, 150));

	wxTextCtrl* textBox = new wxTextCtrl(panel, wxID_ANY, "You Can Change This", wxPoint(50, 250), wxSize(200, 20));

	wxSlider* slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(50, 350), wxSize(200, -1));

	wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(550, 350), wxSize(200, -1));
	gauge->SetValue(50);
}