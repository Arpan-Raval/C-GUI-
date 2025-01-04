#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(50, 50), wxSize(100, 35));

	wxCheckBox* checkbox = new wxCheckBox(panel, wxID_ANY, "CheckBox",wxPoint(550,55));

	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "I Can't Move From Here", wxPoint(50, 150));
} 