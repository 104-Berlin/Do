#include "prefix.h"


do_err do_load_plugin(const char* plugin_name, t_load_fn* oFn)
{
    #ifdef _MAC
    void* lib_handle = dlopen(plugin_name, RTLD_LAZY);
    if (!lib_handle) { fprintf(stderr, "%s\n", dlerror()); return DO_PLUGIN_LOADFAIL; }

    t_load_fn load_function = (t_load_fn) dlsym(lib_handle, DO_LOAD_PLUGIN_FUNCTION_NAME);
    if (!load_function) { fprintf(stderr, "%s\n", dlerror()); return DO_NO_LOAD_FN; }

    *oFn = load_function;
    #elif _WIN
    #elif _LIN
    #endif

    return DO_NOERROR;
}