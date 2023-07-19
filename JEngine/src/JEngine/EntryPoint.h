#pragma once

#ifdef JE_PLATFORM_WINDOWS

extern JEngine::Application* JEngine::CreateApplication();

int main(int argc, char** argv) 
{
	printf("JEngine initialized\n");
	auto app = JEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif