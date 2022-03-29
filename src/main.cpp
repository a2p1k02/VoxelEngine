#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "window/Window.h"
#include "window/Events.h"

const int width = 1280;
const int height = 720;

int main()
{
	Window::initialize(width, height, "Voxel Engine");
	Events::initialize();

	glClearColor(0.6f, 0.62f, 0.65f, 1);

	while (!Window::isShouldClose()) {
		Events::pullEvents();
		if (Events::jpressed(GLFW_KEY_ESCAPE))
			Window::setShouldClose(true);
		if (Events::jclicked(GLFW_MOUSE_BUTTON_1)) 
			glClearColor(0.8f, 0.4f, 0.2f, 1);
		glClear(GL_COLOR_BUFFER_BIT);
		Window::swapBuffers();
	}

	Window::terminate();

	return 0;
}