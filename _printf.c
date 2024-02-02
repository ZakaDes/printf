#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: the format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;

	unsigned int i, count = 0, strc;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
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
		else if (format[i + 1] == 's')
		{
			strc = put(va_arg(arg, char *));
			i++;

			count += (strc - 1);
		}
		else if (format[i + 1] == '%')
		{
			putch('%');
		}
		count += 1;
	}
va_end(arg);
return (count);
}
