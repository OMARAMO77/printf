#include "main.h"
/**
 * _printbinary - coverts unsigned integer to binary
 * @x: unsigned interger parameter.
 * Return: Binary value.
 */
int _printbinary(unsigned int x)
{
	unsigned int num;
	unsigned int modul;
	unsigned int quontient;

	if (x <= 0)
	{
		return (0);
	}
	modul = x % 2;
	quontient = x / 2;

	num = _printbinary(quontient);
	_putchar('0' + modul);
	return (num + 1);
}
