#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i = 0, j;


	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');
		putchar(92);
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
