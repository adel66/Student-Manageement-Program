#pragma once
#include <wx\wx.h>
#include <vector>
using namespace std;

class StudentFrame :public wxFrame
{
	
	
public:
	StudentFrame(const wxString& title);
	void CreateControls();
	void addSavedStudents(const string& filename);
	void OnStudentClosed(wxCloseEvent& evt);
	void AddStudent(wxCommandEvent& evt);
	void BinEventHandlers();
	wxListBox* get_listbox() ;


private:
	wxPanel* panel1;
	wxPanel* panel2;
	wxButton* ListStudentbtn;
	wxButton* AddStudentbtn;
	wxButton* RemoveStudentbtn;
	wxListBox* Studentlist;
	wxButton* SearchButton;
	wxTextCtrl* SearchStudentfieled;
};


class AddStudentFrame : public wxFrame
{

public :
	AddStudentFrame(const string& title);
	void CreateControls2();
	void BindEventHandlers2();
	void OnAddClicked(wxCommandEvent &evt);
	void OnCancelClicked(wxCommandEvent& evt);
	
private :
	wxPanel* addstudentpanel;
	wxStaticText* id;
	wxStaticText* name;
	wxTextCtrl* idfield;
	wxTextCtrl* namefield;
	wxButton* Addbtn;
	wxButton* Cancelbtn;

};
