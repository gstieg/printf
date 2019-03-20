#include "holberton.h"

/**
 * _strlen(char *s)- a function that returns the length of a string.
 *@s: Char
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
