include(CMakeFindDependencyMacro)

find_dependency(glfw3 REQUIRED PATHS ${CMAKE_CURRENT_LIST_DIR}/../../../)
find_dependency(VulkanLoader REQUIRED PATHS ${CMAKE_CURRENT_LIST_DIR}/../../../)
find_dependency(VulkanHeaders REQUIRED PATHS
                ${CMAKE_CURRENT_LIST_DIR}/../../../)

include(${CMAKE_CURRENT_LIST_DIR}/CoffeeTargets.cmake)
