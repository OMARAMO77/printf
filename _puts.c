#include "main.h"

/**
 * _puts - prints a string
 * @H: argument
 *
 * Return: returns the number printed
 */

int _puts(va_list H)
{
	int counter = 0;
	char *s = va_arg(H, char *);

	while (*s)
	{
		_putchar(*s++);
		counter++;
	}
	return (counter);
}
