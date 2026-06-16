#pragma once

namespace Gfx {
class Graphics {
public:
  static Graphics &Get();
  static void Destroy();

  Graphics(const Graphics &) = delete;
  Graphics &operator=(const Graphics &) = delete;
  Graphics(Graphics &&) = delete;
  Graphics &operator=(Graphics &&) = delete;

  // void Init();

private:
  Graphics();
  ~Graphics();

private:
  static Graphics *s_instance;
};

} // namespace Gfx
