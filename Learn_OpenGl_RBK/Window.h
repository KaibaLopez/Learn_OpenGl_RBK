#pragma once
#include "precompile.h"


class Window
{
private:
	static Window* _window;
	GLFWwindow* m_window;


public:
	Window();

	//Window* Instance();
	//void create();
	//void destroy();

	GLFWwindow* getWindow() const;

};