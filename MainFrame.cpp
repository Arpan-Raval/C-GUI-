#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);  //Without This ,Button Will Take A FullScreen So we Have to Adjust In Panel.

	wxButton* button1 = new wxButton(panel,wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 50));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "Button2", wxPoint(300, 300), wxSize(200, 50));
	wxSlider* slider = new wxSlider(panel,wxID_ANY, 25, 0, 100, wxPoint(300, 350), wxSize(200, 50));
	wxTextCtrl* text = new wxTextCtrl(panel,wxID_ANY, "", wxPoint(300, 150), wxSize(200, 25));

	this->Bind(wxEVT_BUTTON, &MainFrame::Submit, this);        //  this ma lakhavathi mainframe ma jetla pan button hashe e badha ma aa event run thashe
	button1->Bind(wxEVT_BUTTON, &MainFrame::onButton1, this);  //button1 ma khali e button upar nu function run thashe
	button2->Bind(wxEVT_BUTTON, &MainFrame::onButton2, this);
	slider->Bind(wxEVT_SLIDER, &MainFrame::Slider, this);
	text->Bind(wxEVT_TEXT, &MainFrame::OnText, this);
	CreateStatusBar();  // this will create status bar below 
}

void MainFrame::Submit(wxCommandEvent& evt) {
	wxLogMessage("Button Clicked!!!");           // event function
}

void MainFrame::onButton1(wxCommandEvent& evt) {
	wxLogStatus("button 1 Clicked");
	evt.Skip();       // aanathi aa skip thayi jashe and aana sivay pan je function hashe e button upar e run thashe (ex. button1 upar have submit and onbutton1 em banne function run thashe)
}														//these 2 are new event function which will run

void MainFrame::onButton2(wxCommandEvent& evt) {
	wxLogStatus("Button 2 Clicked");
	evt.Skip();
}
void MainFrame::Slider(wxCommandEvent& evt) {
	wxString str = wxString::Format("Slider Value is : %d", evt.GetInt());
	wxLogStatus(str);
}

void MainFrame::OnText(wxCommandEvent& evt) {
	wxString str = wxString::Format("text is : %s", evt.GetString());
	wxLogStatus(str);
}