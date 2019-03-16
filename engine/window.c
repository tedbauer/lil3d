#include <stdio.h>
#include <assert.h>
#include <GLFW/glfw3.h>

GLFWwindow* window = NULL;

void render_window()
{
	glfwPollEvents();
}

int is_close_requested()
{
	assert(window != NULL);
	return glfwWindowShouldClose(window);
}

void init_window(int width, int height, char* title)
{
	glfwInit();
	window = glfwCreateWindow(
		640, 480, "Lil 3D", NULL, NULL
	);
}
