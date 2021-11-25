/**
 * @file MainFrame.cpp
 * @author Noah O'Bryan
 */

#include "pch.h"
#include "MainFrame.h"

/**
 * Initialize the MainFrame window
 */
void MainFrame::Initialize()
{
    Create(nullptr, wxID_ANY, L"CollegeRPG",
           wxDefaultPosition, wxSize( 1024, 720));

    // Create a sizer that will lay out child windows vertically
    auto sizer = new wxBoxSizer (wxVERTICAL);

    // Create the view class object as a child of MainFrame
    auto collegeView = new CollegeView();
    collegeView->Initialize(this);

    // Add it to the sizer
    sizer->Add(collegeView,1, wxEXPAND | wxALL);

    // Set the sizer for this frame
    SetSizer(sizer);

    // Layout the child windows
    Layout();

}