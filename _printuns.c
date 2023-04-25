#include "main.h"

/**
* _printuns - print an unsigned number
* @u: a decimal number
*
* Return: returns the number of characters printed
*/
int _printuns(unsigned int u)
{
	char dec[12];
	int i = 0;
	int n;
	int counter;

	while (u)
	{
		n = u % 10;
		dec[i] = '0' + n;
		u /= 10;
		i++;
	}
	while (i--)
	{
		counter += _putchar(dec[i]);
	}
	return (counter);
}
