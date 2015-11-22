// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <CommCtrl.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: reference additional headers your program requires here
#ifdef _M_X64
	#pragma comment(lib, "vendor/sciter-sdk-3/lib/sciter64.lib")
#else
	#pragma comment(lib, "vendor/sciter-sdk-3/lib/sciter32.lib")
#endif
#define STATIC_LIB
#include "sciter-x.h"

#include "HostWindow.h"
#include "HostSciter.h"
