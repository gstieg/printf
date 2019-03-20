#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - a function that prints a character
 *@arguments: Passed from print_all
 */

int print_char(va_list arguments)
{
	return (_putchar(va_arg(arguments, int)));
}

/**
 * print_string - a function that prints a string
 *@arguments: Passed from print_all
 */
int print_string(va_list arguments)
{
	unsigned int i;
	char *a;

	a = va_arg(arguments, char*);
	i = 0;
        if (a == NULL)
                a = "(null)";
	while(a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
        return(i);
}
