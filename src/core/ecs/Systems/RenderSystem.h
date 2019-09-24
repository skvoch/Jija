#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <exception>

#include "../ISystem.h"

class RenderSystem : public ISystem
{
public:
    RenderSystem();

    void process() override;
private:
    GLFWwindow* m_window;
};

#endif // RENDERSYSTEM_H
