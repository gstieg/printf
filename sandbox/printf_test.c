#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - A function that prints strings, followed by a new line
 * @format: Input string describing what to print.  Everything inside this
 *                string is printed verbatim except for the % conversions.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int (*ops_ptr)(va_list arguments);
	va_list arguments;

	va_start(arguments, format);

	if (format || format[i] == '\0')
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			ops_ptr = get_op_func(format[i + 1]);
			count += ops_ptr(arguments);
/* Incrementing by two to get passed format specifier */
			i += 2;
		}
		count += _putchar(format[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}
