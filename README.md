_printf

_printf is a fucntion/command used in the C language to produce an output according to the specific output.


Symbols or flags for _printf

c - character
s - string
% - percentage
i - integer
d - decimal
------------------------------------------------

holberton.h - holberton.h is our header file tha holds all of our specific prototypes for this directory and or repositroy.


Prototype: int _printf(const char *format, ...);

-------------------------------------------------

_putchar - this command writes a single character to stdout

types_of_funtions.c - a file that has the definitions to words in our file
 		  p_char - prints character
		  p_str - prints a string
		  p_dec - prints a decimal
		  p_int - prints an integer
		  all using _putchar

------------------------------------------------
Examples:

String: _printf("%s\n", "Hello, Holberton")
Output: Hello, Holberton


Char: _printf("%c\n", "A")
Output: A


Dec: _printf("%d\n", "1000")
Output: 1000


Int: _printf("%i\n", "24")
Output: 24