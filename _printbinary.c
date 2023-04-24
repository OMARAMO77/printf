#include "main.h"

/**
 * _printbinary - Prints the binary representation of an unsigned integer.
 * @x: unsigned integer to print in binary.
 *
 * Return: The number of characters printed.
 */
int _printbinary(unsigned int x)
{
	int counter = 0;
	int bits = 0;
	unsigned int divisor = 1;

	while ((x / divisor) >= 2)
	{
		divisor *= 2;
	}

	while (divisor != 0)
	{
		if ((x / divisor) % 2 != 0)
		{
			_putchar('1');
			counter++;
		}
		else if (counter > 0 || divisor == 1)
		{
			_putchar('0');
			counter++;
		}

		divisor /= 2;
	}

	return (counter);
}
