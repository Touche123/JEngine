#pragma once

#ifdef JE_PLATFORM_WINDOWS
	#ifdef JE_BUILD_DLL
		#define JENGINE_API __declspec(dllexport)
	#else
		#define JENGINE_API __declspec(dllimport)
	#endif
#else
	#error JEngine only supports windows!
#endif

#define BIT(x) (1 << x)