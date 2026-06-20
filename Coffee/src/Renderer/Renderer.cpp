#include "Coffee/Logs.h"
#define VULKAN_HPP_NO_STRUCT_CONSTRUCTORS

#include "Coffee/Renderer/Renderer.h"
#include <iostream>
// #include <vulkan/vulkan.h>

#if defined(__INTELLISENSE__) || !defined(USE_CPP20_MODULES)
#include <vulkan/vulkan_raii.hpp>
#else
import vulkan_hpp;
#endif

namespace Coffee {
namespace Gfx {
Renderer *Renderer::s_instance = new Renderer();

vk::Instance vkInstance;

Renderer::Renderer(){COFFEE_PRINT("Renderer Created")}

Renderer::~Renderer() {
  COFFEE_PRINT("Renderer Destroyed")
}

void Renderer::Init() {
  constexpr vk::ApplicationInfo appInfo{
      .pApplicationName = "Hello Triangle",
      .applicationVersion = VK_MAKE_VERSION(1, 0, 0),
      .pEngineName = "No Engine",
      .engineVersion = VK_MAKE_VERSION(1, 0, 0),
      .apiVersion = vk::ApiVersion14};

  vk::InstanceCreateInfo createInfo{.pApplicationInfo = &appInfo};

  vkInstance = vk::createInstance(createInfo);

  if (vkInstance)
    std::cout << "VULKAN INITED!!" << '\n';
}

Renderer &Renderer::Get() { return *s_instance; }

void Renderer::Destroy() {
  if (s_instance)
    delete s_instance;
  else {
    // throw error, log
  }
}

} // namespace Gfx
} // namespace Coffee
