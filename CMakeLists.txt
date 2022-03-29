cmake_minimum_required (VERSION 3.0)

set(PROJECT_NAME VoxelEngine)

project (${PROJECT_NAME})

add_executable (${PROJECT_NAME} src/main.cpp "src/window/Window.h" "src/window/Window.cpp" "src/window/Events.h" "src/window/Events.cpp")

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} glad)
