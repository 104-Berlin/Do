#pragma once

// STANDARD INCLUDES
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int32_t i32;
typedef int64_t i64;

typedef char car;

typedef char *do_err;
static do_err __last_error = 0; // WATCH THESE NEED TO BE SYNC. SO DONT SWITCH THE TYPES CARELESS

#define DO_DEFINE_ERROR(errDsc, errString) static do_err errDsc = errString;
#define DO_GETERR __last_error

DO_DEFINE_ERROR(DO_NOERROR, NULL)
DO_DEFINE_ERROR(DO_ERR_ANY, "Unkown Error")

#define DO_SUCCEED(fn, code)               \
    if ((__last_error = fn) == DO_NOERROR) \
    {                                      \
        code                               \
    }                                      \
    else                                   \
    {                                      \
        printf("ERROR: %s\n", DO_GETERR);  \
        exit(1);                           \
    }

#define BIT(x) (1 << x)

// Other error codes. Allway return them in funciton calls

// Includes

#include "plugin_loader/prefix_plugin_loader.h"
#include "parser/prefix_parser.h"