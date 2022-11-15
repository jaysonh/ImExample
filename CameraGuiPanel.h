#pragma once

#include "GuiPanel.h"
#include "CameraSettings.h"
//#include "img_helper.h"

class CameraGuiPanel : public GuiPanel
{
public:

	CameraGuiPanel();
	void draw();

private:
	
	CameraSettings settings;

};