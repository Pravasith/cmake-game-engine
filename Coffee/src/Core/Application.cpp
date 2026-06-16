#include "Coffee/Core/Application.h"
#include "Coffee/Core/Window.h"
#include <iostream>

namespace Core {
Application *Application::s_instance = new Application();

Application::Application() { std::cout << "Application Created" << '\n'; }
Application::~Application() {
  Window::Destroy();
  std::cout << "Application Destroyed" << '\n';
}

void Application::Init() {
  // window stuff
  m_window = &Window::Get();
  m_window->Create();
  m_window->StartGameLoop();
}

Application &Application::Get() { return *s_instance; }

void Application::Destroy() {
  if (s_instance)
    delete s_instance;
  else {
    // throw error, log
  }
}

} // namespace Core
