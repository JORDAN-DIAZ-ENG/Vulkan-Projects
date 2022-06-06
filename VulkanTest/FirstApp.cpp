#include "FirstApp.h"

namespace lvew
{
	void FirstApp::run()
	{
		while (!lveWindow.shouldClose())
		{
			glfwPollEvents();
		}
	}
}