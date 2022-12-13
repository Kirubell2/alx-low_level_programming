#include <stdio.h>
/**
 * main -print all different comninabtion of to numbers
 *
 * Return: always 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)
	{
		for (ones = '0'; ones <= '0'; ones++)
		{
			if (!((ones == tens) || (ones > tens)))
			{
				putchar(tens);
				putchar(ones);
				if (ones == '9' && tens == '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
