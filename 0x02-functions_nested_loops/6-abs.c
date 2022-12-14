#include "main.h"

/**
 * _abs -> computes the absolute value of an integer
 * @int: parameter is integers
 * Return: always 0
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
