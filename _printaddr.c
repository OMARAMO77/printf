#include "main.h"

/**
 * _printaddr - prints an address
 * @H: arguments
 * Return: counter
 */

int _printaddr(va_list H)
{
	unsigned int arr[16];
	unsigned int i, sum = 0;
	unsigned long p, hex = 1152921504606846976;
	char *str = "(nil)";
	int counter = 0;

	p = va_arg(H, unsigned long);
	if (p == 0)
	{
		for (i = 0; str[i]; i++)
		{
			counter += _putchar(str[i]);
		}
		return (counter);
	}
	counter += _putchar('0');
	counter += _putchar('x');

	arr[0] = p / hex;
	for (i = 1; i < 16; i++)
	{
		hex /= 16;
		arr[i] = (p / hex) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += arr[i];
		if (sum || i == 15)
		{
			if (arr[i] < 10)
				counter += _putchar('0' + arr[i]);
			else
				counter += _putchar('0' + ('a' - ':') + arr[i]);
		}
	}
	return (counter);
}
