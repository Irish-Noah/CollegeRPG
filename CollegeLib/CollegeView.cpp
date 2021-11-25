/**
 * @file CollegeView.cpp
 * @author Noah O'Bryan
 */

#include "pch.h"
#include "CollegeView.h"

/**
 * Initialize the college window for this class
 * @param parent The parent window
 */
void CollegeView::Initialize(wxFrame *parent)
{
    Create(parent, wxID_ANY);
    SetBackgroundColour(*wxWHITE);
}
