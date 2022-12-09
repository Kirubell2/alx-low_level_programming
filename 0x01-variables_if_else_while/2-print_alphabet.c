#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - main block
 * Description: print the lower case alphabets
 * Return: 0
 */
int main(void)
{
	
       	char c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return(0);
}
            	     
