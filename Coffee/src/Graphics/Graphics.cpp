#include "Coffee/Graphics/Graphics.h"
#include <iostream>

namespace Gfx {
Graphics *Graphics::s_instance = new Graphics();

Graphics::Graphics() { std::cout << "Graphics Created" << '\n'; }
Graphics::~Graphics() { std::cout << "Graphics Destroyed" << '\n'; }

// void Graphics::Init() {
// }

Graphics &Graphics::Get() { return *s_instance; }

void Graphics::Destroy() {
  if (s_instance)
    delete s_instance;
  else {
    // throw error, log
  }
}
} // namespace Gfx
