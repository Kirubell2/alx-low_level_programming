#include "main.h"
 /**
  * swap_int - function that swaps the values of two integers
  * @a: an input integer
  * @b: an input integer
  * Return: Noting
  */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
