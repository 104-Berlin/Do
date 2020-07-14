#include "prefix.h"


do_err do_load_plugin(const char* plugin_name)
{
    printf("ASLDKJASLDKJ\n");
    #ifdef _MAC
    void* lib_handle = dlopen(plugin_name, RTLS_LAZY);
    if (!lib_handle) { return DO_PLUGIN_LOADFAIL; }

    t_load_fn load_function = (t_load_fn) dlsym(lib_handle, DO_LOAD_PLUGIN_FUNCTION_NAME);
    if (!load_function) { return DO_NO_LOAD_FN; }
    #elif _WIN
    #elif _LIN
    #endif

    return DO_NOERROR;
}