#include "main.h"

/*
 * search_func.c - searches for the functions
 * idkk
 * idk lorum ipsum
 * probably something goes here
 * filler text because betty sucks
 */

int (*search_func(char x))(va_list)
{

        int i = 0;
        spec arr[] = {
            {"c", print_c},
            {"s", print_s},
            {"%", print_percent},
            {NULL, NULL}
        };

        while (arr[i].valid){
		if (x == arr[i].valid[0])
			return (arr[i].f);
           i++;
        }
        return (NULL);


}
