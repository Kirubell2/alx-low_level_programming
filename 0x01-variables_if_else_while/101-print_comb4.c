#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * considered the same combination of the three digits 0, 1 and 2
 * Print only the smalles
 * Return: always 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
