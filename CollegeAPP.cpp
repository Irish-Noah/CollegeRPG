/**
 * @file CollegeApp.cpp
 * @author Noah O'Bryan
 */

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
    return true;
}