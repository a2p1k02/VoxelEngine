#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Window.h"

GLFWwindow* Window::window;

int Window::initialize(int width, int height, const char *window_title)
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	window = glfwCreateWindow(width, height, window_title, nullptr, nullptr);

	if (window == nullptr) {
		std::cerr << "Failed to create GLFW Window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	if (!gladLoadGL()) {
		std::cout << "Failed to init glad" << std::endl;
		glfwTerminate();
		return -1;
	}

	glViewport(0, 0, width, height);

	return 0;
}

void Window::terminate()
{
	glfwTerminate();
}

void Window::swapBuffers()
{
	glfwSwapBuffers(Window::window);
}

void Window::setShouldClose(bool flag) 
{
	glfwSetWindowShouldClose(window, flag);
}

bool Window::isShouldClose()
{
	return glfwWindowShouldClose(window);
}
