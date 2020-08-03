#include "prefix.h"

typedef u32 p_state;

static const p_state PSTATE_LINE_IS_COMMAND = BIT(0);
static const p_state PSTATE_LINE_IS_COMMENT = BIT(1);


p_state parser_state = 0;
/**
 * ---------------------------- 
 * STATE HELPER
 */
void parser_state_activate(p_state state)
{
    parser_state |= state;
}

void parser_state_deactivate(p_state state)
{
    parser_state &= ~(state);
}

bool parser_state_is_active(p_state state)
{
    return (parser_state & state);
}

//----------------------------




do_err parse_file(const car* file_path)
{
    FILE* file = fopen(file_path, "r");
    if (!file)
    {
        fprintf(stderr, "Failed loading file %s\n", file_path);
        return DO_ERR_FILE_NOT_FOUND;
    }

    car* current_char;
    car* prev_char;
    while ((current_char = fgetc(file)) != EOF)
    {
        DO_SUCCEED(process_char(current_char, prev_char),);
    }
}

do_err process_char(car* current_char, car* previous_char)
{
    if (isalpha(current_char))
    {
        current_char = tolower(current_char);
    }
    
}  