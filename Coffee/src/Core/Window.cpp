#include "Coffee/Core/Window.h"
#include <iostream>

namespace Core {
Window *Window::s_instance = new Window();

Window::Window() { std::cout << "Window Created" << '\n'; }
Window::~Window() { std::cout << "Window Destroyed" << '\n'; }

void Window::Create() {
  if (!glfwInit())
    std::cout << "Error initing glfw" << '\n';

  /* Create a windowed mode window and its OpenGL context */
  m_window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
  if (!m_window) {
    glfwTerminate();
    // throw err
  }

  /* Make the window's context current */
  glfwMakeContextCurrent(m_window);
}

void Window::StartGameLoop() {
  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose(m_window)) {
    /* Swap front and back buffers */
    glfwSwapBuffers(m_window);

    /* Poll for and process events */
    glfwPollEvents();
  }

  glfwTerminate();
}

Window &Window::Get() { return *s_instance; }

void Window::Destroy() {
  if (s_instance)
    delete s_instance;
  else {
    // throw error, log
  }
}

} // namespace Core
