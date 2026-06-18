cmake_minimum_required(VERSION 3.23)
project(GameApp VERSION 1.0.0)

add_executable(game)
target_sources(game PRIVATE game.cpp)

# find_package(glfw3 3.4 REQUIRED PATHS ${CMAKE_SOURCE_DIR}/../install)

# OPTION 1: Link to the binary directly
# --- BAD ---
# target_include_directories(game PRIVATE ../install/include) find_library(
# engineLibFileLocation NAMES Core PATHS ../install/lib)
# target_link_libraries(game PRIVATE ${engineLibFileLocation} glfw)
# --- BAD ---

# OPTION 2: Build the ext lib from source
add_subdirectory(../Coffee third_party/Coffee_dir)
# target_link_libraries(game PRIVATE Core Graphics)
target_link_libraries(game PRIVATE Coffee)

install(TARGETS game)
