#include <stdio.h>

/**
 * main - Entry
 * Description: prints the lowercase alphabet in reverse
 *Return: 0
 */

int main(void)
{
	char d;
        d = '0';
	char c;
	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}