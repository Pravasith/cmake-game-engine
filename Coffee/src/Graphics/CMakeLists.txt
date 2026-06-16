add_library(Graphics STATIC)

target_sources(
  Graphics
  PUBLIC FILE_SET HEADERS BASE_DIRS ${ENGINE_INCLUDE_DIR}
         #
         FILES ${ENGINE_INCLUDE_DIR}/Coffee/Graphics/Graphics.h
  PRIVATE Graphics.cpp)

target_link_libraries(Graphics PRIVATE Renderer)

install(TARGETS Graphics FILE_SET HEADERS)
