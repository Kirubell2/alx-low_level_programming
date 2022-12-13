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
	int n, Lastnum;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	Lastnum = n % 10;
	if (Lastnum> 5)
		printf("last digit of %d is %d and is greater than 5\n", n, Lastnum);
	else if (Lastnum == 0)
		printf("last digit of %d is %d and is 0\n", n, Lastnum);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, Lastnum);
	return (0);
}
