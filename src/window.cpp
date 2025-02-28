#include "window.h"

GLFWwindow* Window::init(int width, int height, const char* title) {

	if (!glfwInit()) {
		fmt::print("error: {}\n", "failed to init glfw");
		exit(1);
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	GLFWwindow* wnd = glfwCreateWindow(width, height, title, nullptr, nullptr);
	if (!wnd) {
		fmt::print("error: {}\n", "failed to create window");
		glfwTerminate();
		exit(1);
	}

	return wnd;
}
