#include "main.h"

/**
 *_islower - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z')||(c >= 'Z' && c <= 'Z'))
		return (1);
	else
		return (0);
}
