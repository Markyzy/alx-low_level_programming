#include <stdio.h>
/**
 * main - Entry code
 * Description: prints lowercase alphabet, followed by a new line.
 */
print_alphabet()
{
	char c = 'a';
	for (c = 'a'; c <= 'z'; c++){
	putchar(c);
	c++;
}
	putchar('\n');
}
