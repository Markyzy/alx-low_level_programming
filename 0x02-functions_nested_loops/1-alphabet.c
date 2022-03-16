#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabet, followed by a new line.
 */

void print_alphabet(void)
{
	char c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
}
