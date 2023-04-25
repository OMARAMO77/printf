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

	if (format == NULL)
	{
		return (-1);
	}
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
				case 'b':
					counter += _printbinary(va_arg(args, unsigned int));
					break;
				case 'x':
					counter += _printhex(va_arg(args, unsigned int));
					break;
				case 'X':
					counter += _printHEXA(va_arg(args, unsigned int));
					break;
				case 'o':
					counter += _printoct(va_arg(args, unsigned int));
					break;
				case 'u':
					counter += _printuns(va_arg(args, unsigned int));
					break;
				default:
					counter += _putchar('%');
					counter += _putchar(*format);
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
