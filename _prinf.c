#include "main.h"

/**
 * _printf - prints characters.
 * @format: the format string.
 *
 * Return: the number of printer characters.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int value = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					value += print_char(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					value++;
					i += 2;
					break;
				case 's':
					value += print_str(args);
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}
		_putchar(format[i]);
		value++;
		i++;
	}
	return (value);
}
