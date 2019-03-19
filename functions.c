#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_char - prins char c
 *
 * @arg: char
 *
 * Return: number of chars
 */
int p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	_putchar(c);

	return (1);
}

/**
 * p_str - prints a string
 *
 * @arg: string
 *
 * Return: number of chars
 */
int p_str(va_list arg)
{
	unsigned int i;
	char *a;

	a = va_arg(arg, char *);

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
 * p_dec - prints dec
 *
 * @arg: dec to pring
 *
 * Return: number of chars
 */
int p_dec(va_list arg)
{
	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * p_int - prints integer
 *
 * @arg: argument
 *
 * Return: number of chars
 */
int p_int(va_list arg)
{
	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
