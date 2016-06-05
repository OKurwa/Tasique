#include "Launcher.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "boost\intrusive_ptr.hpp"
#include "glm\glm.hpp"
#include "GL\glew.h"
#include "GLFW\glfw3.h"

GLFWwindow * hWindow;


int main() {
	//stuff...
	if (!glfwInit())
	{
		fprintf(stderr, "Failed to initialize GLFW\n");
		return -1;
	}

	glfwWindowHint(GLFW_SAMPLES, 4); // 4x 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed


														 

	hWindow = glfwCreateWindow(640, 480, "My OGL window", NULL, NULL);

	if (hWindow == NULL) {
		fprintf(stderr, "Failed to open GLFW window\n");
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(hWindow);

	// 

	glewExperimental = true;
	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "не удалось инициализировать GLEW\n");
		return -1;
	}

	// ������� ��������� ������
	glfwSetInputMode(hWindow, GLFW_STICKY_KEYS, GL_TRUE);
	//glfwSetInputMode(hWindow, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);




	do {
		glfwSwapBuffers(hWindow);
		glfwPollEvents();
	} 
	while ((glfwGetKey(hWindow, GLFW_KEY_E) != GLFW_PRESS) && (glfwWindowShouldClose(hWindow) == 0));

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}


