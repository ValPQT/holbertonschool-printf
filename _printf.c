#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
        unsigned int n;
        char *str;
        int i;     

        va_list list;

        va_start(list , format);

        if (format)
        {
                for (i = 0; i < n; i++)
                {
                        str = va_arg(list, char*);

                        if (str <= 0)
                                return (-1);
                        else
                                _printf("%s, va_arg(list, char*))
                }

                printf("\n");

                va_end(list);
        }
}
