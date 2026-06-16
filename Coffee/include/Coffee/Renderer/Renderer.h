#pragma once

namespace Gfx {
class Renderer {
public:
  static Renderer &Get();
  static void Destroy();

  Renderer(const Renderer &) = delete;
  Renderer &operator=(const Renderer &) = delete;
  Renderer(Renderer &&) = delete;
  Renderer &operator=(Renderer &&) = delete;

  // void Init();

private:
  Renderer();
  ~Renderer();

private:
  static Renderer *s_instance;
};

} // namespace Gfx
