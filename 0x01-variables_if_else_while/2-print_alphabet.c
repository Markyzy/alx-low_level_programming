#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Description: print"Alphabet lowercase and uppercase"
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
