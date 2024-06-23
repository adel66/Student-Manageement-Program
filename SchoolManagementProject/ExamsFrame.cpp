#include "ExamsFrame.h"

ExamsFrame::ExamsFrame(const wxString& title): wxFrame(nullptr,wxID_ANY,title)
{
	SetWindowStyle(GetWindowStyle() & ~wxMAXIMIZE_BOX);
}
