#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - A function that prints strings, followed by a new line
 * @format: String input
 *
 * Return: Nothing.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int (*ptr)(va_list arguments);
	va_list arguments;

	va_start(arguments, format);
	while(format && format[i] != '\0')
	{
		if(format[i] == '%')
		{
			ptr = get_op_func(format[i + 1]);
			count += ptr(arguments);
/* Incrementing by two to get passed format specifier */
			i += 2;
		}
		count += _putchar(format[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}
