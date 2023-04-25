#include "main.h"

/**
 * _printoct - converts an unsigned int into hexadecimal number
 * @o: a decimal number
 *
 * Return: returns the number of characters printed
 */

int _printoct(unsigned int o)
{
	char oct[12];
	int i = 0;
	int counter;
	int n;

	while (o)
	{
		n = o % 8;
		oct[i] = '0' + n;
		o /= 8;
		i++;
	}
	while (i--)
	{
		counter += _putchar(oct[i]);
	}
	return (counter);
}
