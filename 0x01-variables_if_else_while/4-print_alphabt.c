#include <stdio.h>
/**
 * main - prints the alphbet in lowercase
 * followed by a newline, except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la)
	}

	putchar('\n');
	return (0);
}
