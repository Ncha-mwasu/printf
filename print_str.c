#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: number of printed char.
 */
int _puts(char *str)
{
	int q = 0;

	while (str[q])
	{
		_putchar(str[q]);
		q++;
	}
	return (q);
}

/**
 * print_str - prints string.
 * @args: takes argument list.
 *
 * Return: printed characters
 */
int print_str(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
