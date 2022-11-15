#pragma once

#include <stdio.h>
#include <string>
#include <vector>
#include <memory>

#include "GuiPanel.h"

#include "imgui.h"
#include "imgui_impl_sdl.h"

#include "implot.h"

#include <SDL.h>

#include "imgui_impl_opengl3.h"
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <SDL_opengles2.h>
#else
#include <SDL_opengl.h>
#endif

using namespace std;

class ImGuiManager
{
public:

	void draw();
	void init( SDL_Window * window, SDL_GLContext & gl_context );
	void addPanel( shared_ptr<GuiPanel>  panel );

private:

    // Font Params
	const std::string fontPath = "data/fonts/Roboto-Light.ttf";
	const float       fontSize = 20.0;

	std::vector < shared_ptr< GuiPanel > > guiPanels;

};