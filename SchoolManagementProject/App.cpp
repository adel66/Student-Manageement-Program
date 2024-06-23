#include "App.h"
#include "MainFrame.h"
#include <wx\wx.h>
#include <wx\image.h>

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    wxInitAllImageHandlers();
    MainFrame* mainframe = new MainFrame("School Management Program");
    mainframe->SetClientSize(1050, 700);
    mainframe->Center();
    mainframe->Show();
    return true;
}
