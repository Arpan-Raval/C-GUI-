#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	wxButton* button = new wxButton(panel,wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 50));
	wxSlider* slider = new wxSlider(panel,wxID_ANY, 25, 0, 100, wxPoint(300, 350), wxSize(200, 50));
	wxTextCtrl* text = new wxTextCtrl(panel,wxID_ANY, "", wxPoint(300, 150), wxSize(200, 25));

	button->Bind(wxEVT_BUTTON, &MainFrame::Submit, this);
	slider->Bind(wxEVT_SLIDER, &MainFrame::Slider, this);
	text->Bind(wxEVT_TEXT, &MainFrame::OnText, this);
	CreateStatusBar();  // this will create status bar below 
}

void MainFrame::Submit(wxCommandEvent& evt) {
	wxLogStatus("Button Clicked!!!");           // event function
}

void MainFrame::Slider(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider Value is : %d", evt.GetInt());
	wxLogStatus(str);
}

void MainFrame::OnText(wxCommandEvent& evt) {
	wxString str = wxString::Format("text is : %s", evt.GetString());
	wxLogStatus(str);
}