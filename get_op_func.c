#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * get_op_func - Checks format specifier
 *
 * @s: Format specifier
 *
 * Return: result or NULL
 */
int (*get_op_func(char s))(va_list arguments)
{
	specifier_t specifier_array[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{NULL, NULL}
	};

	va_start(arg, format);

	if ( format == NULL || (format[0] == '%' && format [1] == '/0'))
		return (0);

	int i;

	i = 0;
	while (specifier_array[i].s)
	{
		if (s == specifier_array[i].s)
		{
			return (specifier_array[i].function_ptr);
		}
		i++;
	}
	return (0);
}
