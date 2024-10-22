cmake_minimum_required (VERSION 3.13)
project (prj)

find_package(SDL2 REQUIRED)
include_directories(prj ${SDL2_INCLUDE_DIRS})

add_executable(prj main.cpp vk-bootstrap/VkBootstrap.cpp vulkan_files/vk_descriptors vulkan_files/vk_engine vulkan_files/vk_images vulkan_files/vk_initializers vulkan_files/vk_loader vulkan_files/vk_pipelines vulkan_files/vk_types)
target_link_libraries(prj vulkan)
target_include_directories(prj PUBLIC vk-bootstrap)

find_package(fmt)
target_link_libraries(prj fmt::fmt ${SDL2_LIBRARIES})


