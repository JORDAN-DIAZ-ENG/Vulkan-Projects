#pragma once

#include "LveWindow.h"
#include "LvePipeline.h"
#include "LveDevice.h"

namespace lve
{
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		LveWindow lveWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };
		LveDevice lveDevice{ lveWindow };
		LvePipeline lvePipeline
		{ 
			lveDevice, 
			"Shaders\\simple_shader.vert.spv", 
			"Shaders\\simple_shader.frag.spv", 
			LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)
		};
	};
}