#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void Submit(wxCommandEvent& evt);  //make event
	wxDECLARE_EVENT_TABLE();    // this will create a event table for sync with button
};

