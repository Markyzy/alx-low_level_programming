#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: destination copy
 * @src: source copy
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
