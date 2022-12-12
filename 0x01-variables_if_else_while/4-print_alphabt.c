#include <stdio.h>
/**
 * main - prints the alphbet in lowercase
 * followed by a newline, except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}

	putchar('\n');
	return (0);
}
