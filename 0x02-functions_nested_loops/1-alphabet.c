#include <stdio.h>
/**
 * main - Entry code
 * Description: prints lowercase alphabet, followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';
	for (c = 'a'; c <= 'z'; c++){
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
