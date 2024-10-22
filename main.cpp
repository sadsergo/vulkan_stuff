#include "vulkan/vulkan.h"
#include "vulkan_files/vk_engine.h"
#include <iostream>

int
main(int argc, char* argv[])
{
    VulkanEngine engine;

    engine.init();

    engine.run();

    engine.cleanup();

    return 0;
}