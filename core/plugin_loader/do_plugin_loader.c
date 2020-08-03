#include "prefix.h"


do_err do_load_plugin(const car* plugin_name, t_do_plugin* o_plugin)
{
    #ifdef _MAC
    t_do_plugin lib_handle = dlopen(plugin_name, RTLD_LAZY);
    if (!lib_handle) { fprintf(stderr, "%s\n", dlerror()); return DO_ERR_PLUGIN_LOADFAIL; }
    *o_plugin = lib_handle;
    #elif _WIN
    #elif _LIN
    #endif

    return DO_NOERROR;
}

do_err do_load_plugin_func(t_do_plugin plugin, const car* plugin_name, t_load_fn* o_func)
{
    if (!plugin) { return DO_ERR_INVALID_PLUGIN; }

    #ifdef _MAC
    t_load_fn load_function = (t_load_fn) dlsym(plugin, DO_LOAD_PLUGIN_FUNCTION_NAME);
    if (!load_function) { fprintf(stderr, "%s\n", dlerror()); return DO_ERR_NO_LOAD_FN; }
    *o_func = load_function;
    //TODO: Add other platforms
    #endif


    return DO_NOERROR;
}