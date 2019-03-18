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
	unsigned int i, j, flag;
	unsigned int len = 0;

	print_t print [] = {
		{"c", p_char}, {"s", p_str}, {"d", p_dec}, {"i", p_int},
		{NULL, NULL}
	};

	va_start(arg,format);

	if (format == NULL || (format [0] == '%' && format [1] == '\0'))
		return (0);
