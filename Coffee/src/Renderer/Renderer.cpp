
#include "Coffee/Renderer/Renderer.h"
#include <iostream>

namespace Gfx {
Renderer *Renderer::s_instance = new Renderer();

Renderer::Renderer() { std::cout << "Renderer Created" << '\n'; }
Renderer::~Renderer() { std::cout << "Renderer Destroyed" << '\n'; }

// void Renderer::Init() {
// }

Renderer &Renderer::Get() { return *s_instance; }

void Renderer::Destroy() {
  if (s_instance)
    delete s_instance;
  else {
    // throw error, log
  }
}

} // namespace Core
