#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	
	CreateStatusBar();  // this will create status bar below 
    
	panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::onMouse, this);    // aanathi jyare pan screen par click karshu etle function run thashe and print karshe
}

void MainFrame::onMouse(wxMouseEvent& evt) {
	wxLogStatus("Mouse Event Detected");         // status bar ma print karse aavu
}