#include "main.h"

/**
 * print_alphabet_10x -> prints the lowercase alphabets 10x
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
