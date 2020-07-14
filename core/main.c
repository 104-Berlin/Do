#include "prefix.h"

int main(int argc, char** argv)
{
    t_do_plugin test_plugin;
    DO_SUCCEED(do_load_plugin("/Users/lucaherzke/Documents/DEV/Do/plugins/libtest_plugin.so", &test_plugin),
        t_load_fn load_func;
        DO_SUCCEED(do_load_plugin_func(test_plugin, DO_LOAD_PLUGIN_FUNCTION_NAME, &load_func),
            load_func();
        )
    )
    return 0;
}