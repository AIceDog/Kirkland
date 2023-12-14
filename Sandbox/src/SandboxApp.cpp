#include <Kirkland.h>

class Sandbox : public Kirkland::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Kirkland::Application* Kirkland::CreateApplication()
{
	return new Sandbox();
}