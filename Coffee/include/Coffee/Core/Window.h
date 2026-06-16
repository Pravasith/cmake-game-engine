#pragma once

#include <GLFW/glfw3.h>

namespace Core {
class Window {
public:
  static Window &Get();
  static void Destroy();

  Window(const Window &) = delete;
  Window &operator=(const Window &) = delete;
  Window(Window &&) = delete;
  Window &operator=(Window &&) = delete;

  void Create();
  void StartGameLoop();

private:
  Window();
  ~Window();

private:
  GLFWwindow *m_window = nullptr;

  static Window *s_instance;
};

} // namespace Core
