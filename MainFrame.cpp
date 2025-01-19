#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	
	CreateStatusBar();  // this will create status bar below 
    
	panel->Bind(wxEVT_MOTION, &MainFrame::onMouse, this);    //wxEVT_MOTION thi without click mousee jya layi jayish tya function run thashe 
}             //wxEVT_LEFT_DOWN    --->   left Click
		      //wxEVT_RIGHT_DOWN   --->   Right Click
              //wxEVT_MIDDLE_DOWN  --->   Middle Click
			  //wxEVT_LEFT_DCLICK  --->   DOUBLE CLICK

void MainFrame::onMouse(wxMouseEvent& evt) {
	wxPoint mousePoint = evt.GetPosition();   // GetPosition() method thi tamne pointer na cooardinate made and ene "mousePoint" name na variable ma store karya.
	wxString message = wxString::Format("Mouse Detected At Position (x=%d), (y=%d)", mousePoint.x, mousePoint.y);   // aanathi tame string formate ma x and y cooardinate sathe print karavshe.
	wxLogStatus(message);         // status bar ma print karse aavu
}