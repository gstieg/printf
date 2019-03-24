#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * print_char - a function that prints a character
 * @arguments: Passed from _printf
 *
 * Return: Character
 */

int print_char(va_list arguments)
{
	_putchar(va_arg(arguments, int));
	return (1);
}

/**
 * print_string - a function that prints a string
 * @arguments: Passed from _printf
 *
 * Return: String
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

/**
 * print_percent - a function that prints a string
 * @arguments: Passed from _printf
 *
 * Return: percent symbol
 */
int print_percent(__attribute__((unused))va_list arguments)
{
	_putchar('%');
	return (1);
}

/**
 * print_d - a function that prints a decimal
 * @arguments: Passed from _printf
 *
 * Return: Decimal
 */

int print_dec(va_list arguments)
{
	int num = va_arg(arguments, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num/10)
		print_dec(num/10);
	_putchar(num%10 + '0');
	return(1);
}
