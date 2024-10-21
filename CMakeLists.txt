cmake_minimum_required (VERSION 3.8)
project (prj)

add_executable(prj main.cpp vk-bootstrap/VkBootstrap.cpp)
target_link_libraries(prj vulkan)
target_include_directories(vk-bootstrap)