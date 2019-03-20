#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - is a fucntion/command used in the C language to produce an output according to the specific output.
 *
 * @format: char string
 *
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, l, flag;
	unsigned int len = 0;

	print_t print [] = {
		{"c", p_char}, {"s", p_str}, {"d", p_dec}, {"i", p_int},
		{NULL, NULL}
	};

	va_start(arg,format);

	if (format == NULL || (format [0] == '%' && format [1] == '\0'))
		return (0);

	i = 0;
	while (format[i] != '\0')
	{
		l = 0;
		flag = 0;
		while (print[l].p != NULL)
		{
			if (format[i + 1] == print[l].print[0])
			{
				len = len + print[l].p(arg);
				flag = 1;
				i++;
			}
			l++;
		}
		if (flag == 0)
		{
			_putchar('%');
			i++;
			len = len + 1;
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i++;
	}
	va_end(arg);

	return (len);
}
