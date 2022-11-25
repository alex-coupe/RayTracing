#pragma once
#include <iostream>
#include "GL\glew.h"

#define GLCatchError(x) GLClearErrors();x;GLLogErrors(#x,__LINE__, __FILE__);

static void GLClearErrors()
{
	while (glGetError() != GL_NO_ERROR);
}

static void GLLogErrors(const char* function, const int line, const char* file)
{
	while (GLenum err = glGetError())
	{
		std::cout << "[OpenGL Error] " << err << " in " << function << " on line " << line << " of " <<  file;
	}
}

static void LogError(const char* message)
{
	std::cout << "[Error] " << message;
}