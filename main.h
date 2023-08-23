#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void printNumbers(int count, ...);
int string_printf(char *string);
int char_printf(char achar);
int _printf(const char *format, ...);

#endif
