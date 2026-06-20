#include "Coffee/Core/Application.h"
#include "Coffee/Core/Window.h"
#include "Coffee/Logs.h"

namespace Coffee {
namespace Core {
Application *Application::s_instance = new Application();

Application::Application() {
  COFFEE_PRINT("Application Created")

#ifdef COFFEE_Debug
  std::cout << "Hey COFFEE_Debug is defined in Core target" << '\n';
#endif
}

Application::~Application() {
  Window::Destroy();
  COFFEE_PRINT("Application Destroyed")
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
} // namespace Coffee
