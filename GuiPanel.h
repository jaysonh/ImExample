#pragma once

/*

	Each panel displayed in the GUI inherits this class and used to control on object within the program

*/

#include <string>

#include "imgui.h"
#include "imgui_impl_sdl.h"

using namespace std;

class GuiPanel
{
public:

	void init();
	virtual void draw() = 0;

protected:

	string panelTitle ="";
private:


};