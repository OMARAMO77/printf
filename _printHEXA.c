#include "main.h"

/**
 * _printHEXA - converts an unsigned int into hexadecimal number
 * @X: a decimal number
 *
 * Return: returns the number of characters printed
 */

int _printHEXA(unsigned int X)
{
	char hex[8];
	int i = 0;
	int counter = 0;
	int n;

	while (X)
	{
		n = X % 16;
		if (n < 10)
		{
			hex[i] = '0' + n;
		}
		else
		{
			hex[i] = 'A' + n - 10;
		}
		X /= 16;
		i++;
	}
	while (i--)
	{
		counter += _putchar(hex[i]);
	}
	return (counter);
}
