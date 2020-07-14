#pragma once
#include <stdlib.h>

#ifndef _WIN
#include <dlfcn.h>
#endif

DO_DEFINE_ERROR(DO_PLUGIN_LOADFAIL, "Could not find or load the plugin from the path!")
DO_DEFINE_ERROR(DO_NO_LOAD_FN, "Could not find the initialization function of the plugin!")


#define DO_LOAD_PLUGIN_FUNCTION_NAME "load_plugin"
typedef void (*t_load_fn)();


#include "plugin_loader.h"
