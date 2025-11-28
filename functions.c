#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - print a character
 * @args: argument for character
 * Return : number of characters
 */

int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_s - print a string
 * @args: argument for string
 * Return : number of characters
 */

int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}

/*
 * print_percent - pass the percent sign
 * @args: argument for string
 * Return: return the percent sign
 */

int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return(*str);
	}
	return(*str);
}
