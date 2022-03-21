#include "main.h"
 /**
  * int_strlen - function that takes char as a parameter
  * and returns the length of a string
  * @s : input value
  * Return : always 0
  */
int _strlen(char *s)
{
	int c = 1, add =0;
	char p = s[0];

	while (p != '\0')
	{
		add++;
		p = s[c++];
	}
	return (add);
}
