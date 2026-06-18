add_library(Renderer STATIC)

target_sources(
  Renderer
  PRIVATE FILE_SET
          myPrivateHeaders
          TYPE
          HEADERS
          BASE_DIRS
          ${ENGINE_INCLUDE_DIR}
          #
          FILES
          ${ENGINE_INCLUDE_DIR}/Coffee/Renderer/Renderer.h
  PRIVATE Renderer.cpp)

target_link_libraries(Renderer PRIVATE Vulkan::Loader Vulkan::Headers)
