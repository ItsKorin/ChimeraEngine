#pragma once

#include "Core.h"

namespace Chimera {

	class CHIMERA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//SHOULD BE DEFINED IN CLIENT
	Application* CreateApplication();

}