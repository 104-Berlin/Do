#pragma once


/**
 * Writes the used command line in output array
 * 
 * @param argc Argument Count
 * @param argv Argument Array
 * 
 * Default params from c main(int argc, char** argv)
 */ 
extern do_err do_get_input_commands(i32 argc, chr** argv, car** output);