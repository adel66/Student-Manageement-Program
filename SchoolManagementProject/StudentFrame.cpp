#include <wx\wx.h>
#include "School.h"
#include "MainFrame.h"
#include "StudentFrame.h"
#include <vector>
#include <string>


StudentFrame::StudentFrame(const wxString& title) :wxFrame(nullptr, wxID_ANY, title)
{
	SetWindowStyle(GetWindowStyle() & ~wxMAXIMIZE_BOX);
	CreateControls();
	addSavedStudents("Students.txt");
	BinEventHandlers();
}

void StudentFrame::CreateControls()
{
	panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(315, 700));
	panel2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(1050, 700));
	ListStudentbtn = new wxButton(panel1, wxID_ANY, "List Students", wxPoint(20, 170), wxSize(200, 75));
	AddStudentbtn = new wxButton(panel1, wxID_ANY, "Add a Students", wxPoint(20, 270), wxSize(200, 75));
	RemoveStudentbtn = new wxButton(panel1, wxID_ANY, "Remove a Students", wxPoint(20, 370), wxSize(200, 75));
	SearchStudentfieled = new wxTextCtrl(panel2, wxID_ANY, "Search For student by name .", wxPoint(470, 60), wxSize(540, 30));
	SearchButton = new wxButton(panel2, wxID_ANY, "Search", wxPoint(350, 60), wxSize(100, 30));
	Studentlist = new wxListBox(panel2, wxID_ANY, wxPoint(360, 100), wxSize(650, 500));

}

void StudentFrame::addSavedStudents(const string& filename)
{
	vector<Student> students = loadStudents(filename);
	for (const Student s : students) {
		int index = Studentlist->GetCount();
		wxString StudentInfo = to_string(s.get_ID()) + ' ' + s.get_name();
		Studentlist->Insert(StudentInfo, index);
	}
}

void StudentFrame::OnStudentClosed(wxCloseEvent& evt)
{
	vector<Student> s;
	string n;
	string idstring;
	for (int i = 0; i < Studentlist->GetCount();i++) {
		idstring = Studentlist->GetString(i).substr(0, 1);
		int id = stoi(idstring);
		n = Studentlist->GetString(i).substr(2);

		Student student(n, id);

		s.push_back(student);

	}

	savestudent(s, "Students.txt");
	evt.Skip();
}


void StudentFrame::BinEventHandlers()
{
	AddStudentbtn->Bind(wxEVT_BUTTON, &StudentFrame::AddStudent, this);
	this->Bind(wxEVT_CLOSE_WINDOW, &StudentFrame::OnStudentClosed, this);
}


wxListBox* StudentFrame::get_listbox() 
{
	return Studentlist;
}



void StudentFrame::AddStudent(wxCommandEvent& evt)
{
	AddStudentFrame* addstudentframe = new AddStudentFrame("Add a Student");
	addstudentframe->Show();
	addstudentframe->SetClientSize(600, 400);
	addstudentframe->Center();


}

AddStudentFrame::AddStudentFrame(const string& title):wxFrame(nullptr,wxID_ANY,title)
{
	SetWindowStyle(GetWindowStyle() & ~wxMAXIMIZE_BOX);
	CreateControls2();
}

void AddStudentFrame::CreateControls2()
{
	addstudentpanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(600, 400));
	id = new wxStaticText(addstudentpanel, wxID_ANY, "Please Enter The student ID here", wxPoint(10, 130), wxSize(100, 75));
	name = new wxStaticText(addstudentpanel, wxID_ANY, "Please Enter The student name here", wxPoint(10, 230), wxSize(100, 75));
	idfield = new wxTextCtrl(addstudentpanel, wxID_ANY, "", wxPoint(110, 130), wxSize(400, 30));
	namefield = new wxTextCtrl(addstudentpanel, wxID_ANY, "", wxPoint(120, 230), wxSize(400, 30));
	Addbtn = new wxButton(addstudentpanel, wxID_ANY, "Cancel", wxPoint(300, 300), wxSize(100, 75));
	Cancelbtn = new wxButton(addstudentpanel, wxID_ANY, "Add", wxPoint(200, 300), wxSize(100, 75));
}

void AddStudentFrame::BindEventHandlers2()
{
	Addbtn->Bind(wxEVT_BUTTON, &AddStudentFrame::OnAddClicked, this);
}

void AddStudentFrame::OnAddClicked(wxCommandEvent& evt)
{
	wxString id = idfield->GetValue();
	wxString name = namefield->GetValue();

	wxString student = id + ' ' + name;
	
}

void AddStudentFrame::OnCancelClicked(wxCommandEvent& evt)
{

}
