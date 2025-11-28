#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct specifier - type of specifier in input
 * @valid: the valid character 
 * @f : the functions associated
 */

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);

int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int (*search_func(char x))(va_list);

#endif
