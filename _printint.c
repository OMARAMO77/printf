#include "main.h"

/**
* _printint - prints a number
* @n: a number
*
* Return: returns the number printed
*/

int _printint(int n)
{
	int counter = 0;

	if (n < 0)
	{
		_putchar('-');
		counter++;
		n = -n;
	}
	if (n > 9)
	{
		counter += _printint(n / 10);
	}
	_putchar(n % 10 + '0');
	return (counter + 1);
}
