/*
 This file is part of gbpablog.
 
 gbpablog is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 gbpablog is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with gbpablog.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MAINAPP_H__
#define __MAINAPP_H__

#include <wx/wx.h>
#undef main

class MainFrame;
/*******************************************************************************
 // MainApp Class
 *******************************************************************************/

class MainApp : public wxApp {
    DECLARE_CLASS(MainApp)
    
private:
    MainFrame *frame;
    
public:
    /**
     * Called to initialize this MainApp.
     *
     * @return true if initialization succeeded; false otherwise.
     */
    bool OnInit();
    
    /**
     * Called to run this MainApp.
     *
     * @return The status code (0 if good, non-0 if bad).
     */
    int OnRun();
    
    /**
     * Called when this MainApp is ready to exit.
     *
     * @return The exit code.
     */
    int OnExit();
	
	void MacOpenFile(const wxString &fileName);
};

#endif
