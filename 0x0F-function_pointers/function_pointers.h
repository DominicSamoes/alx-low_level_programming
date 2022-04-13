#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

/*
 * File: function_pointers.h
 * Auth: Dominic Samo
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0E-function_pointers directory.
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif
