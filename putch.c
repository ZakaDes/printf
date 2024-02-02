#include "main.h"

/**
 * putch - print the character c to stdout
 * @c: The character to print
 *
 * Return:1
 */
int putch(char c)
{
	return (write(1, &c, 1));
}
