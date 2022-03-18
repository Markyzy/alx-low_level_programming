#include "main.h"

/**
 * _isupper - check if character is uppercase.
 *@c: test value
 * Return: 1 if character is uppercase and 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
