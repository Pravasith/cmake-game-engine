// #include "Coffee/Core/Application.h"
// #include "Coffee/Graphics/Graphics.h"

#include "Coffee/Coffee.h"

int main() {
  using namespace Coffee;

  Core::Application &appInstance = Core::Application::Get();
  Gfx::Graphics &gfxInstance = Gfx::Graphics::Get();

  appInstance.Init();
  gfxInstance.Init();

  Core::Application::Destroy();
  Gfx::Graphics::Destroy();

  return 0;
}
