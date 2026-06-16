#pragma once

namespace Core {
class Window;

class Application {
public:
  static Application &Get();
  static void Destroy();

  Application(const Application &) = delete;
  Application &operator=(const Application &) = delete;
  Application(Application &&) = delete;
  Application &operator=(Application &&) = delete;

  void Init();

private:
  Application();
  ~Application();

private:
  Window *m_window = nullptr;

  static Application *s_instance;
};

} // namespace Core
