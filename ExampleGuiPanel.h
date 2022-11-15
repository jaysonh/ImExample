#pragma once

#include "GuiPanel.h"
//#include "img_helper.h"

class ExampleGuiPanel : public GuiPanel
{
public:

	ExampleGuiPanel();
	void draw();

private:
	
	bool showDemo = true;
};