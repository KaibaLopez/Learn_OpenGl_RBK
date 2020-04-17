#pragma once
#include "precompile.h"

#include "Camera.h"
#include "Shader.h"
class GraphicsPart
{
public:
	GraphicsPart(unsigned int width = 600, unsigned int height=800);
	~GraphicsPart();
	int Render(float deltaTime = 0.0f);
	bool window_loaded;
private:
	int initStuff();
	
	Camera camera;

	// timing
	float deltaTime = 0.0f;	// time between current frame and last frame
	float lastFrame = 0.0f;
	//cosas para los Vertex
	GLuint VBO, VAO, EBO;
	std::unique_ptr<Shader> ourShader;
	std::unique_ptr<GLFWwindow> window;
	unsigned int texture;
	const unsigned int SCR_WIDTH;
	const unsigned int SCR_HEIGHT;

};

