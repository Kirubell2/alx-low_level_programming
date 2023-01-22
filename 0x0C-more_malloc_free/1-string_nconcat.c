#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, lens1 = 0, lens2 = 0;


	if (s1 == NULL)
		s1 = "";


	while (s1[lens1])
		lens1++;


	if (s2 == NULL)
		s2 = "";


	while (s2[lens2])
		lens2++;


	if (n >= lens2)
		n = lens2;


	new_str = malloc(lens1 + n + 1);
	if (new_str == NULL)
		return (NULL);


	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}