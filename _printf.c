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
	char ch;

	va_start(args, format);

	while ((ch = *format++) != '\0')
	{
		if (ch == '%')
		{
			ch = *format++;
			switch (ch)
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
				default:
					counter += _putchar('%');
					counter += _putchar(ch);
			}
		}
		else
		{
			counter += _putchar(ch);
		}
	}

	va_end(args);
	return (counter);
}
