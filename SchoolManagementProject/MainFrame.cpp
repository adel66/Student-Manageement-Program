#include "MainFrame.h"
#include "School.h"
#include "StudentFrame.h"
#include <wx/wx.h>
#include <wx/statbmp.h>
#include <wx\image.h>
#include <wx/artprov.h>
#include "StudentFrame.h"
#include "TeacherFrame.h"
#include "ExamsFrame.h"

MainFrame::MainFrame(const wxString& title):wxFrame(nullptr,wxID_ANY,title)
{
	School ENSIA("Ensia");
	CreateControls();
	wxLogStatus("Connected Successefully");
	SetWindowStyle(GetWindowStyle() & ~wxMAXIMIZE_BOX);
	BindEventHandlers();
}

void MainFrame::CreateControls()
{
	mainpanel = new wxPanel(this);
	Studentbtn = new wxButton(mainpanel, wxID_ANY, "Students", wxPoint(10, 60), wxSize(200, 75));
	Teacherbtn = new wxButton(mainpanel, wxID_ANY, "Teachers", wxPoint(10, 160), wxSize(200, 75));
	Examsbtn = new wxButton(mainpanel, wxID_ANY, "Exams", wxPoint(10, 260), wxSize(200, 75));
	AboutSchoolbtn = new wxButton(mainpanel, wxID_ANY, "About The School", wxPoint(10, 360), wxSize(200, 75));
	wxFont headlineFont(wxFontInfo(wxSize(0,20)).Bold());
	MainText = new wxStaticText(mainpanel, wxID_ANY, "          NATIONAL HIGHER SCHOOL OF ARTIFICIAL INTELLIGENCE \n                                  School Management Program", wxPoint(300, 100), wxSize(500, -1));
	MainText->SetFont(headlineFont);
	Contactbtn = new wxButton(mainpanel, wxID_ANY, "Contact Us", wxPoint(10, 460), wxSize(200, 75));
	MusicVoltext = new wxStaticText(mainpanel, wxID_ANY,"Music Volume", wxPoint(10, 630), wxSize(200, 75));
	MusicVolslider = new wxSlider(mainpanel, wxID_ANY, 25, 0, 100, wxPoint(10, 650), wxSize(200, 75));
	//wxBitmap bitmap("D:\\Projectvs\\Solutions\\SchoolManagementProject\\Pics\\Screenshot 2024-06-11 235756.png", wxBITMAP_TYPE_PNG);
	//image = new wxStaticBitmap(mainpanel, wxID_ANY, bitmap, wxPoint(400,240), wxDefaultSize);
	wxFont Helpfont(wxFontInfo(wxSize(0, 13)).Bold());
	Helptext = new wxStaticText(mainpanel, wxID_ANY, "H : Help", wxPoint(550, 670), wxDefaultSize);
	Helptext->SetFont(Helpfont);
}

void MainFrame::BindEventHandlers()
{
	Studentbtn->Bind(wxEVT_BUTTON, &MainFrame::Student, this);
	Teacherbtn->Bind(wxEVT_BUTTON, &MainFrame::Teacher, this);
	Examsbtn->Bind(wxEVT_BUTTON, &MainFrame::Exams, this);
	this->Bind(wxEVT_KEY_DOWN, &MainFrame::KeyboardOnClick, this);
}

void MainFrame::KeyboardOnClick(wxKeyEvent& evt)
{
	switch (evt.GetKeyCode()) {
	case 'H':
		wxMessageDialog dialog(this, "Looking For Help ?","Help", wxYES_NO | wxCANCEL);
		int result = dialog.ShowModal();
		if (result == wxID_YES) {
			
		}
		break;
	}
}

void MainFrame::Student(const wxCommandEvent &evt)
{
	StudentFrame* studentframe = new StudentFrame("Student");
	studentframe->Show();
	studentframe->SetClientSize(1050, 700);
	
}

void MainFrame::Teacher(const wxCommandEvent& evt)
{
	TeacherFrame* studentframe = new TeacherFrame("Teachers");
	studentframe->Show();
	studentframe->SetClientSize(1050, 700);
	
}

void MainFrame::Exams(const wxCommandEvent& evt) {
	ExamsFrame* examsframe = new ExamsFrame("Exams");
	examsframe->Show();
	examsframe->SetClientSize(1050, 700);
	
}

