#include "MainFrame.h"
#include <wx/wx.h>

enum {
	BUTTON_ID = 2  // give id to button
};
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(300, 250), wxSize(200, 50));
	CreateStatusBar();  // this will create status bar below 
}