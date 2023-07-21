#include "jepch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace JEngine 
{
	Application::Application() {
		
	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication)) {
			JE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput)) {
			JE_TRACE(e);
		}

		while (true);
	}
}