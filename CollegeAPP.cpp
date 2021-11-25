/**
 * @file CollegeApp.cpp
 * @author Noah O'Bryan
 */

#include "pch.h"
#include "CollegeAPP.h"

/**
 * Initialize the application
 * @return
 */
bool CollegeAPP::OnInit()
{
    if (!wxApp::OnInit())
    {
        return false;
    }

    auto frame = new MainFrame();
    frame->Initialize();
    frame->Show(true);

    return true;
}