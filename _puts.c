#include "main.h"

/**
 * _puts - prints a string
 * @s: a string
 *
 * Return: returns the number printed
 */

int _puts(char *s)
{
	int counter = 0;

	while (*s)
	{
		_putchar(*s++);
		counter++;
	}
	return (counter);
}
