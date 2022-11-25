#pragma once
#include "Logger.h"
#include <GLFW\glfw3.h>

class Renderer {
public: 
	Renderer(bool enableDepth, bool enableStencil);
	void BeginFrame()const;
	void Draw(const unsigned short indexCount) const;
	void Draw(GLint first, GLsizei count)const;
	void EndFrame(GLFWwindow* window)const
	{
		glfwSwapBuffers(window);
	}
};