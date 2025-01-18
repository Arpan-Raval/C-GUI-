#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void Submit(wxCommandEvent& evt);  //make event
	void onButton1(wxCommandEvent& evt);
	void onButton2(wxCommandEvent& evt);
	
	void onClose(wxCloseEvent& evt);    // for closing a event

	void Slider(wxCommandEvent& evt);
	void OnText(wxCommandEvent& evt);
};

