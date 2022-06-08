#pragma once

#include "LittleVulkanEngineWindow.h"
#include "lvePipeline.h"

namespace lvew
{
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
		LvePipeline lvePipeline{ "Shaders\\simple_shader.vert.spv", "Shaders\\simple_shader.frag.spv" };
	};
}