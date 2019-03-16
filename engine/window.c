#include <stdio.h>
#include <GLFW/glfw3.h>

void process_input(GLFWwindow *window) {
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, GLFW_TRUE);
	}
}

int main()
{
	glfwInit();
	GLFWwindow* window = glfwCreateWindow(
		640, 480, "Lil 3D", NULL, NULL
	);
	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		process_input(window);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
