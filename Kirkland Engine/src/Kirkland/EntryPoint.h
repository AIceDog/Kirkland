#pragma once

#ifdef KL_PLATFORM_WINDOWS

extern Kirkland::Application* Kirkland::CreateApplication();

int main(int argc, char** argv)
{
	printf("Kirkland Engine\n");
	auto app = Kirkland::CreateApplication();
	app->Run();
	delete app;
}

#endif