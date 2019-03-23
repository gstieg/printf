#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * print_char - a function that prints a character
 * @arguments: Passed from _printf
 *
 * Return: Count
 */

int print_char(va_list arguments)
{
	return (_putchar(va_arg(arguments, int)));
}

/**
 * print_string - a function that prints a string
 * @arguments: Passed from _printf
 *
 * Return: Count
 */
int print_string(va_list arguments)
{
	unsigned int i;
	char *a;

	a = va_arg(arguments, char *);
	i = 0;
	if (a == NULL)
		a = "(null)";
	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	return (i);
}
