#include "main.h"

/**
 * _printchar - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int _printchar(va_list H)
{
	_putchar(va_arg(H, int));
	return (1);
}
