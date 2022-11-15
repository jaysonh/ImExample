#include "ExampleGuiPanel.h"

ExampleGuiPanel::ExampleGuiPanel()
{
	panelTitle = "Example GUI elements";
}

void ExampleGuiPanel::draw()
{
     ImGui::ShowDemoWindow(&showDemo);
}