#pragma once

#ifdef JE_PLATFORM_WINDOWS

extern JEngine::Application* JEngine::CreateApplication();

int main(int argc, char** argv) 
{
	JEngine::Log::Init();
	JE_CORE_WARN("Initialized log!");
	int a = 5;
	JE_INFO("Hello! Var={0}", a);

	auto app = JEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif