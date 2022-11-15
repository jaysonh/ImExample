#pragma once

#include "GuiPanel.h"
#include "implot.h"
#include <math.h>

//#include "img_helper.h"

class PlottingGuiPanel : public GuiPanel
{
public:

	PlottingGuiPanel();
	void draw();

private:
     
	float x_data[100];
	float y_data[100];
	int bar_data[11];
	float offset = 0.0;
};