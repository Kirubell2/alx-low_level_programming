#include "main.h"

/**
 * print_sign  -> prints the sign of a number
 * @n : parameter is integer numbers
 * Return: return 1 or 0 or -1 depending on the outcome
 */

int print_sign(int n)
{
	int print_sign(int n);

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
