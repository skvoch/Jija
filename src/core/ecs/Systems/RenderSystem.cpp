#include "RenderSystem.h"

static void glfwError(int id, const char* description)
{
    std::cout << description << std::endl;
}

RenderSystem::RenderSystem()
    : m_window(nullptr)
{
    if(glfwInit() == -1) {
        throw std::runtime_error("Failed to inicialize glfw");
    }
    glfwSetErrorCallback(&glfwError);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

    m_window = glfwCreateWindow(800, 600, "Window", nullptr, nullptr);

    if(m_window == nullptr) {
        throw std::runtime_error("Failed to create GLFW window");
    }

}


void RenderSystem::process()
{

}
