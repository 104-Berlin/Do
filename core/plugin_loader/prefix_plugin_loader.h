#pragma once
#include <stdlib.h>

#ifndef _WIN
#include <dlfcn.h>
#endif

DO_DEFINE_ERROR(DO_PLUGIN_LOADFAIL, "Could not find or load the plugin from the path!")
DO_DEFINE_ERROR(DO_NO_LOAD_FN, "Could not find the initialization function of the plugin!")
DO_DEFINE_ERROR(DO_INVALID_PLUGIN, "The given plugin is invald! Maybe it wasn't loaded yet..");

#define DO_LOAD_PLUGIN_FUNCTION_NAME "load_plugin"
typedef void (*t_load_fn)();

typedef void* t_do_plugin;


#include "plugin_loader.h"
