#pragma once

#include "Core.h"

namespace Kirkland {

	class KIRKLAND_API Application
	{
	public:
		Application();	
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
