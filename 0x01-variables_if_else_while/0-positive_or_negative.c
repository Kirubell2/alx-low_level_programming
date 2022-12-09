#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: get a random number and print it
 * and if it is postive, negative or zero
 * Return: 0
 */
int main(void)
{ 
	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;
	if (n > 0)
		printf("%i is postive\n", n)
	else if (n < 0)
		printf("%i is negative\n", n);
	else 
		printf("%i is zero\n", n)
	return (0);
}
