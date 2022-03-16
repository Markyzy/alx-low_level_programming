#include <stdio.h>
/**
 * main - Entry code
 * Description: prints lowercase alphabet, followed by a new line.
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z'; c++){
	putchar(c);
	c++;
}
	putchar('\n');
}
