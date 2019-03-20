#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - a function that prints a character
 *@arguments: Passed from print_all
 */
void print_char(va_list arguments)
	{
		printf("%c", va_arg(arguments, int));
	}

/**
 * print_int - a function that prints integers
 *@arguments: Passed from print_all
 */
void print_int(va_list arguments)
{
	printf("%i", va_arg(arguments, int));
}

/**
 * print_float - a function that prints a float
 *@arguments: Passed from Print_all
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - a function that prints a string
 *@arguments: Passed from print_all
 */
void print_string(va_list arguments)
{
	char *str = va_arg(arguments, char*);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - a function that prints strings, followed by a new line
 *@format:
 *@...: Various inputs
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	specifier_t specifier_array[] = {
			{'c', print_char},
			{'i', print_int},
			{'f', print_float},
			{'s', print_string}
		};

	char *separator = "";
	int i = 0;
	int j;
	void (*fp)();

	va_list arguments;

	va_start(arguments, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (specifier_array[j].s == format[i])
/* if "c,i,f or s" in the specifier[] match the char in the "ceis" string*/
			{
				printf("%s", separator);
				fp = specifier_array[j].f_ptr;
				fp(arguments);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
