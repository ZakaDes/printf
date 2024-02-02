#include "main.h"

/**
 * put - a function to print a string
 * @c: the string to print
 *
 * Return: the string
 */

int put(char *c)
{
	int count;

	count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count ++)
		{
			putch(c[count]);
		}
	}
	return (count);



}
