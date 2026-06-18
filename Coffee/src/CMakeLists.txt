add_subdirectory(Core)
add_subdirectory(Graphics)
add_subdirectory(Renderer)

add_library(Coffee INTERFACE)

target_sources(
  Coffee
  PUBLIC FILE_SET HEADERS BASE_DIRS ${ENGINE_INCLUDE_DIR}
         #
         FILES ${ENGINE_INCLUDE_DIR}/Coffee/Coffee.h)

target_link_libraries(Coffee INTERFACE Core Graphics)

# --- INSTALL LIBS ---

# install(TARGETS Core FILE_SET HEADERS) install(TARGETS Graphics FILE_SET
# HEADERS) install(TARGETS Renderer) install(TARGETS Coffee FILE_SET HEADERS)

install(TARGETS Coffee Core Graphics Renderer FILE_SET HEADERS)
