#include <stdio.h>

/**
 * print_alphabet - function prints 10 times the alphabet, in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (c = 'a'; c <= 'z'; c++){
	for (i = 0; i <= 10; i++)
	putchar(c);
	putchar('\n');
}
}