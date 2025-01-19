#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
public:
	void onMouse(wxMouseEvent& evt);
};

