#include <stdio.h>

/**
 * main - Entry
 * Description: prints the lowercase alphabet in reverse
 *Return: 0
 */

int main(void)
{
	char f;
        f = '0';
	char s;

	while (f <= '9')
	{
		putchar(f);
		f++;
	}
	s = 'a';
	while (s <= 'e')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
