cmake_minimum_required(VERSION 3.23)
project(CoffeeProject VERSION 1.0.0)

set(ENGINE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src)

# --- GLFW Stuff ---
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(GLFW_BUILD_EXAMPLES "Build the GLFW example programs" OFF)
option(GLFW_BUILD_TESTS "Build the GLFW test programs" OFF)
option(GLFW_BUILD_DOCS "Build the GLFW documentation" OFF)
option(GLFW_INSTALL "Generate installation target" ON)
add_subdirectory(../third-party/glfw third_party/glfw)

# --- Vulkan headers Stuff ---
set(VULKAN_HEADERS_ENABLE_INSTALL ON)
add_subdirectory(../third-party/vulkan-headers third_party/vulkan_headers)

# --- Vulkan loader Stuff ---
set(UPDATE_DEPS ON)
add_subdirectory(../third-party/vulkan-loader third_party/vulkan_loader)
