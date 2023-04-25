#include "main.h"

/**
 * _printbinary - converts an unsigned int into hexadecimal number
 * @H: arguments.
 *
 * Return: returns the number of characters printed
 */

int _printbinary(va_list H)
{
	char bin[12];
	int i = 0;
	int counter;
	int n;
	unsigned int b = va_arg(H, unsigned int);

	while (b)
	{
		n = b % 2;
		bin[i] = '0' + n;
		b /= 2;
		i++;
	}
	while (i--)
	{
		counter += _putchar(bin[i]);
	}
	return (counter);
}
