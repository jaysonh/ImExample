#include "PlottingGuiPanel.h"

PlottingGuiPanel::PlottingGuiPanel()
{
	panelTitle = "Plotting";

    for(int i = 0; i < 11;i++)
    {
    	bar_data[i] = rand() % 10;
    }  
}

void PlottingGuiPanel::draw()
{
	ImPlot::ShowDemoWindow();
	ImGui::Begin( panelTitle.c_str() );                          // Create a window called "Hello, world!" and append into it.

	for(int i = 0; i < 100; i++)
    {
    	x_data[i] = (float)i / 10.0f;
    	y_data[i] = sin(x_data[i] + offset) * 2.0f + 5.0f;
    }
    offset += 0.01;


	if (ImPlot::BeginPlot("My Plot")) {
	    ImPlot::PlotBars("My Bar Plot", bar_data, 11);
	    ImPlot::PlotLine("My Line Plot", x_data, y_data, 100);
	
	    ImPlot::EndPlot();
	}
	
    ImGui::End();
}