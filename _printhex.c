#include "main.h"

/**
* _printhex - converts an unsigned int into hexadecimal number
* @x: a decimal number
*
* Return: returns the number of characters printed
*/

int _printhex(unsigned int x)
{
	char hex[8];
	int i = 0;
	int counter = 0;
	int n;

	while (x)
	{
		n = x % 16;
		if (n < 10)
		{
			hex[i] = '0' + n;
		}
		else
		{
			hex[i] = 'a' + n - 10;
		}
		x /= 16;
		i++;
	}
	while (i--)
	{
		counter += _putchar(hex[i]);
	}
	return (counter);
}
