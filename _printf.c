#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * _printf - The _printf function is the printf function that we recreated
 * on our own.
 *
 *@format : string containing text and specifiers
 *
 * Return : Total number of characters displayed
 */

int _printf(const char *format, ...)
{
	int count = 0, i;
	int (*j)(va_list);
	va_list args;

	if (!format)
		return (-1);

	{
		va_start(args, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i += 2;
				}
				else
				{
					j = search_func(format[i + 1]);
					if (j)
						count += j(args);
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				count += _putchar(format[i]);
				i++;
			}
		}
		va_end(args);
		return (count);
	}
	return (-1);
}
