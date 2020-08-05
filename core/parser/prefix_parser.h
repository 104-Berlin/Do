#pragma once

DO_DEFINE_ERROR(DO_ERR_FILE_NOT_FOUND, "Could not find file!");
DO_DEFINE_ERROR(DO_ERR_NO_COMMAND_FOUND, "Could not find any command!");
DO_DEFINE_ERROR(DO_ERR_COMMAND_FIRST, "The first argument of do has to be a command. Dont use a \"-\" at the start. Choose a command to run!");
DO_DEFINE_ERROR(DO_ERR_UNKNOWN_CHAR, "Wrong char deteted!");

#include "do_parser.h"
#include "do_cmd_parser.h"