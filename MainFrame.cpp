#include "MainFrame.h"
#include <wx/wx.h>

enum {
	BUTTON_ID = 2,  // give id to button
	SLIDER_ID = 3  // GIVE ID TO SLIDER
};

wxBEGIN_EVENT_TABLE(MainFrame,wxFrame)
	EVT_BUTTON(BUTTON_ID,MainFrame::Submit)      //aa naa lakho to button work naa thay , etle event table banavu J pade
	EVT_SLIDER(SLIDER_ID,MainFrame::Slider)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(300, 250), wxSize(200, 50));
	wxSlider* slider = new wxSlider(panel, SLIDER_ID, 25, 0, 100, wxPoint(300, 350), wxSize(200, 50));
	CreateStatusBar();  // this will create status bar below 
}

void MainFrame::Submit(wxCommandEvent& evt) {
	wxLogStatus("Button Clicked!!!");           // event function
}

void MainFrame::Slider(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider Value is : %d", evt.GetInt());
	wxLogStatus(str);
}