#include "prefix.h"

int main(int argc, char** argv)
{
    t_load_fn loadFn;
    DO_SUCCEED(do_load_plugin("/Users/lucaherzke/Documents/DEV/Do/plugins/libtest_plugin.so", &loadFn),
        loadFn();
    )
    return 0;
}