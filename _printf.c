#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	char *str;

	va_list list;

	va_start(list , format);

	if (format)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			return (-1);
		else
			printf("%s", str);

		printf("\n");

		va_end(list);
	}
	return 0;
}
