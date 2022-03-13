#include <stdio.h>

/**
 * main - Entry
 * Description: prints the lowercase alphabet in reverse
 *Return: 0
 */

int main(void)
{
	char f, s;
        f = '0';

	while (f <= '9')
	{
		putchar(f);
		f++;
	}
	s = 'a';
	while (s <= 'f')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
