#include "CameraGuiPanel.h"

CameraGuiPanel::CameraGuiPanel()
{
	panelTitle = "Camera Settings";

	

}

void CameraGuiPanel::draw()
{
	 ImGui::Begin( panelTitle.c_str() );                          // Create a window called "Hello, world!" and append into it.

     ImGui::Text("Camera information");               // Display some text (you can use a format strings too)
     ImGui::Checkbox("Enabled",    &settings.enabled);      // Edit bools storing our window open/close state
     
     ImGui::SliderFloat("brightness", &settings.brightness, 0.0f, 1.0f );            
	 ImGui::SliderFloat("threshold",  &settings.threshold,  0.0f, 1.0f );            
	 //int my_image_width = 0;
	 //int my_image_height = 0;
	 //GLuint my_image_texture = 0;
	 //bool ret = LoadTextureFromFile("data/images/dog.jpg", &my_image_texture, &my_image_width, &my_image_height);
	 //ImGui::Image((void*)(intptr_t)my_image_texture, ImVec2(my_image_width, my_image_height));

     ImGui::SameLine();
     ImGui::End();
}