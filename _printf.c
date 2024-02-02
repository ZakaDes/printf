#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: the format
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;

	int i, count;

	count = 0;
	i = 0;

	va_start(arg, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putch(format[i]);
		}



		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			putch(va_arg(arg, int));
			i++;
		}

		count += 1;
	}
va_end(arg);

return (count);
}
