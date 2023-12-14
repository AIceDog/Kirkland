#pragma once

#ifdef KL_PLATFORM_WINDOWS
	#ifdef KL_BUILD_DLL
		#define KIRKLAND_API __declspec(dllexport)
	#else	
		#define KIRKLAND_API __declspec(dllimport)
	#endif  
#else
	#error Kirkland only support Windows!
#endif	