#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 5)
	{
		if (n == 0)
		{
			printf("last digit of %d and is 0\n", n);
		}
		else
			(n < 6 && n != 0);
		{
			printf("last digit of %d and is greater than 6 and not 0\n", n);
		}
	}
	else
	{
		printf("last digit of %d is greater than 5\n", n);
	}
	return (0);
}
