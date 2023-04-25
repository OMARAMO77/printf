#include "main.h"
/**
 * _printf - selects the correct function to print
 * @format: identifier to look for
 *
 * Return: the length of the printed string
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", _puts}, {"%c", _printchar}, {"%%", _printpercent},
		{"%i", _printint}, {"%d", _printint},
		{"%b", _printbinary}, {"%u", _printuns},
		{"%o", _printoct}, {"%x", _printhex}, {"%X", _printHEXA},
	};

	va_list H;
	int i = 0, j, counter = 0;

	va_start(H, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

loop:
	while (format[i])
	{
		j = 0;
		while (j <= 9)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				counter += m[j].f(H);
				i = i + 2;
				goto loop;
			}
			j++;
		}
		_putchar(format[i]);
		counter++;
		i++;
	}
	va_end(H);
	return (counter);
}
