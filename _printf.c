#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Return: returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					counter += _putchar(va_arg(args, int));
					break;
				case 's':
					counter += _puts(va_arg(args, char *));
					break;
				case '%':
					counter += _putchar('%');
					break;
				case 'd':
				case 'i':
					counter += _printint(va_arg(args, int));
					break;
			}
		}
		else
		{
			counter += _putchar(*format);
		}
		format++;
	}

	va_end(args);
	return (counter);
}
