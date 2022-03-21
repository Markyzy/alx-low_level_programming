#include "main.h"

 /**
  * _puts - function that prints a string followed by a new line
  * str : input
  * Return: String
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] !='\0'; i++)
	{
		_puts(str[i]);
	}
		_puts('\n');
}
