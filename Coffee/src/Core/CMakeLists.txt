add_library(Core STATIC)

target_sources(
  Core
  PUBLIC FILE_SET HEADERS BASE_DIRS ${ENGINE_INCLUDE_DIR}
         #
         FILES ${ENGINE_INCLUDE_DIR}/Coffee/Core/Application.h
  PRIVATE FILE_SET
          myPrivateHeaders
          TYPE
          HEADERS
          BASE_DIRS
          ${ENGINE_INCLUDE_DIR}
          #
          FILES
          ${ENGINE_INCLUDE_DIR}/Coffee/Core/Window.h
  PRIVATE Application.cpp Window.cpp)

target_link_libraries(Core PRIVATE glfw)

install(TARGETS Core FILE_SET HEADERS FILE_SET myPrivateHeaders)
