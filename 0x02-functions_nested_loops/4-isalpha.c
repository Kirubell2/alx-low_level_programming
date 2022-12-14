#include "main.h"

/**
 * _isalpha -> check for alphabetical letters
 * @c: a character to check on
 * Return: retuen 0 and depending of the outcome
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
