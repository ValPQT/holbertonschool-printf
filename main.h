#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * function _printf
 */
int _printf(const char *format, ...);

int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
#endif
