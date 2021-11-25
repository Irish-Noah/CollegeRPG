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
}