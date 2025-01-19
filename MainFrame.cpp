#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	
	CreateStatusBar();  // this will create status bar below 
    
	panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::onMouse, this);    // aanathi jyare pan screen par LEFT click karshu etle function run thashe and print karshe
}

void MainFrame::onMouse(wxMouseEvent& evt) {
	wxPoint mousePoint = evt.GetPosition();   // GetPosition() method thi tamne pointer na cooardinate made and ene "mousePoint" name na variable ma store karya.
	wxString message = wxString::Format("Mouse Detected At Position (x=%d), (y=%d)", mousePoint.x, mousePoint.y);   // aanathi tame string formate ma x and y cooardinate sathe print karavshe.
	wxLogStatus(message);         // status bar ma print karse aavu
}