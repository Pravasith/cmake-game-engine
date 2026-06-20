#include "Coffee/Graphics/Graphics.h"
#include "Coffee/Logs.h"
#include "Coffee/Renderer/Renderer.h"

namespace Coffee {
namespace Gfx {
Graphics *Graphics::s_instance = new Graphics();

Graphics::Graphics(){COFFEE_PRINT("Graphics Created")}

Graphics::~Graphics() {
  Renderer::Destroy();
  COFFEE_PRINT("Graphics Destroyed")
}

void Graphics::Init() {
  m_renderer = &Renderer::Get();
  m_renderer->Init();
}

Graphics &Graphics::Get() { return *s_instance; }

void Graphics::Destroy() {
  if (s_instance)
    delete s_instance;
  else {
    // throw error, log
  }
}
} // namespace Gfx
} // namespace Coffee
