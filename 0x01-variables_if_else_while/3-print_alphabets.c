#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main : main block
 * description: prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * return: 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
{
	putchar(c);
	c++;
}
      char c = 'A';
      while (c <= 'Z')
{
	putchar(c);
	c++;
} 
       putchar('\n');
       return(0);
}
