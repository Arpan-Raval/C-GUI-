#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.
	wxButton* btn1 = new wxButton(panel, wxID_ANY, "button", wxPoint(0, 0), wxSize(200, 25)); //in this buttons ,it will select another button when we click tab or arrow keys
	wxButton* btn2 = new wxButton(panel, wxID_ANY, "button", wxPoint(200, 300), wxSize(200, 25));

	btn1->Bind(wxEVT_KEY_DOWN,&MainFrame::onKey, this);  //keyboard ni key press karva upar function Run Thashe

	CreateStatusBar();  // this will create status bar below 


	wxBoxSizer* arpan = new wxBoxSizer(wxVERTICAL);
	arpan->Add(panel, 0, wxEXPAND);
	this->SetSizerAndFit(arpan);   // element thi nani screen nayi thayi sake , koi pan button kapashe nayi aama

}

void MainFrame::onKey(wxKeyEvent& evt) {
	wxChar keyChar = evt.GetUnicodeKey();  // Kayi Key Add Press Kari E Khabar Pade

	if (keyChar == WXK_NONE) {
		int keyCode = evt.GetKeyCode();
		wxLogStatus("key Code is %d", keyCode);
	}
	else {
		wxLogStatus("key pressed %c",keyChar);//  Je Pan Key Press Kari Hoy E Print Thashe
	}
}