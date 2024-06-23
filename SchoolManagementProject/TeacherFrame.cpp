#include "TeacherFrame.h"

TeacherFrame::TeacherFrame(const wxString& title) :wxFrame(nullptr,wxID_ANY,title)
{
	SetWindowStyle(GetWindowStyle() & ~wxMAXIMIZE_BOX);
}
