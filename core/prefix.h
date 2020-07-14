#pragma once
#include <stdio.h>


typedef char* do_err;
static do_err __last_error = 0;             // WATCH THESE NEED TO BE SYNC. SO DONT SWITCH THE TYPES CARELESS


#define DO_DEFINE_ERROR(errDsc, errString) static do_err errDsc = errString;
#define DO_GETERR __last_error

DO_DEFINE_ERROR(DO_NOERROR, NULL)
DO_DEFINE_ERROR(DO_ANYERROR, "Unkown Error")
DO_DEFINE_ERROR(DO_TESTERROR, "This is shit and should be removed later!")


#define DO_SUCCEED(fn, code) if ((__last_error = fn) == DO_NOERROR) {code} else {printf("ERROR: %s\n", DO_GETERR);}

// Other error codes. Allway return them in funciton calls