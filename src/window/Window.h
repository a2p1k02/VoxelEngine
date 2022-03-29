#ifndef WINDOW_WINDOW_H_
#define WINDOW_WINDOW_H_

class GLFWwindow;

class Window {
public:
	static GLFWwindow* window;
	static int initialize(int width, int height, const char *window_title);
	static void terminate();

	static bool isShouldClose();
	static void swapBuffers();
	static void setShouldClose(bool flag);
};


#endif //WINDOW_WINDOW_H_