#include "prefix.h"

do_err do_get_input_commands(i32 argc, car** argv, car** output)
{
    if (argc <= 1) { return DO_ERR_NO_COMMAND_FOUND; }
    i32 arg_ptr = 1;
    car* current_arg = argv[arg_ptr];

    if (current_arg[0] == '-') { return DO_ERR_COMMAND_FIRST; }
    if (!isalpha(current_arg[0]))
    {
        fprintf(stderr, "A Command need to start with an letter!");
        return DO_ERR_UNKNOWN_CHAR;
    }


}