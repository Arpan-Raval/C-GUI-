#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	wxButton* button = new wxButton(panel,wxID_ANY,"button",wxPoint(300,300),wxSize(200,50));
	 
	wxStatusBar* statusbar = CreateStatusBar();  // this will create status bar below 
	statusbar->SetDoubleBuffered(true);         // aanathi je output ma lag thatu hatu e nahi thay and smooth chalse
    
	panel->Bind(wxEVT_MOTION, &MainFrame::onMouse, this);    //wxEVT_MOTION thi without click mousee jya layi jayish tya function run thashe 
	button->Bind(wxEVT_MOTION, &MainFrame::onMouse, this); //anathi button ma pan position dekhashe
}             

void MainFrame::onMouse(wxMouseEvent& evt) {
	wxPoint mousePoint = wxGetMousePosition(); //aanathi screen na acoording position male  // GetPosition() method thi tamne pointer na cooardinate made and ene "mousePoint" name na variable ma store karya.
	mousePoint = this->ScreenToClient(mousePoint);  //aanathi frame according position batavshe ,, laptop ni screen mujab nayi

	wxString message = wxString::Format("Mouse Detected At Position (x=%d), (y=%d)", mousePoint.x, mousePoint.y);   // aanathi tame string formate ma x and y cooardinate sathe print karavshe.
	wxLogStatus(message);         // status bar ma print karse aavu
}