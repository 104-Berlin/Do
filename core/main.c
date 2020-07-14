#include "prefix.h"

int main()
{
    DO_SUCCEED(do_load_plugin("../../plugins/test_plugin.so"),
        printf("Succeed\n");
    )

    printf("Hello World\n");
    return 0;
}