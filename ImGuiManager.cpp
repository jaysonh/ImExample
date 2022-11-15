#include "ImGuiManager.h"

void ImGuiManager::init(  SDL_Window* window, SDL_GLContext & gl_context  )
{
	#if defined(IMGUI_IMPL_OPENGL_ES2)
    // GL ES 2.0 + GLSL 100
	    const char* glsl_version = "#version 100";
	#elif defined(__APPLE__)
	    // GL 3.2 Core + GLSL 150
	    const char* glsl_version = "#version 150";
	#else
	    // GL 3.0 + GLSL 130
	    const char* glsl_version = "#version 130";
	#endif

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

    // Setup ImPlot
    ImPlot::CreateContext();

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsLight();

    // Setup Platform/Renderer backends
    ImGui_ImplSDL2_InitForOpenGL(window, gl_context);
    ImGui_ImplOpenGL3_Init(glsl_version);


    io.Fonts->AddFontFromFileTTF( fontPath.c_str(), fontSize );
}

void ImGuiManager::draw()
{
	// Start the Dear ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplSDL2_NewFrame();
    ImGui::NewFrame();

    for( auto panel : guiPanels )
    {
    	panel->draw();
    }

    ImGui::Render();
}
	
void ImGuiManager::addPanel( shared_ptr<GuiPanel>  panel )
{
	guiPanels.push_back(panel);
}