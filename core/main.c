#include "prefix.h"

do_err dummyFunction()
{
    return DO_ANYERROR;
}

do_err testFn()
{
    return DO_NOERROR;
}

int main()
{
    DO_SUCCEED(dummyFunction(), 
        DO_SUCCEED(testFn(),
            printf("Succeded!\n");
        )
    )

    printf("Hello World\n");
    return 0;
}