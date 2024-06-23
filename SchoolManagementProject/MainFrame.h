#pragma once
#include <wx\wx.h>

class MainFrame :public wxFrame
{
public:
	MainFrame(const wxString& title);
	void CreateControls();
	void BindEventHandlers();
	void KeyboardOnClick(wxKeyEvent& evt);
	void Student(const wxCommandEvent &evt);
	void Teacher(const wxCommandEvent& evt);
	void Exams(const wxCommandEvent& evt);
	

	wxPanel* mainpanel;
	wxButton* Studentbtn;
	wxButton* Teacherbtn;
	wxButton* Examsbtn;
	wxButton* AboutSchoolbtn;
	wxButton* Contactbtn;
	wxStaticText* MainText;
	wxStaticText* MusicVoltext;
	wxSlider* MusicVolslider;
	wxStaticBitmap* image;
	wxStaticText* Helptext;
};

