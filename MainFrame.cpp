#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	panel->Bind(wxEVT_KEY_DOWN,&MainFrame::onKey, this);  //keyboard ni key press karva upar function Run Thashe

	CreateStatusBar();  // this will create status bar below 
}

void MainFrame::onKey(wxKeyEvent& evt) {
	wxChar keyChar = evt.GetUnicodeKey();  // Kayi Key Add Press Kari E Khabar Pade
	wxLogStatus("key pressed %c",keyChar);//  Je Pan Key Press Kari Hoy E Print Thashe
}