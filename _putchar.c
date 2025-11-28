#include <unistd.h>

/*
 *_putchar - The fonction _putchar write a character on the standard output
 *
 *@c: The character to print
 *
 * Return : 1 for success
 *
 */

int _putchar(char c)

{
	return (write(1, &c,1));
}
