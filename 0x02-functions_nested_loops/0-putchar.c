#include <stdlib.h>
#include <time.h>

/**
 * main - Entry code
 * Description: prints _putchar, followed by a new line.
 * Return: 0
 */
 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	    char p = "_putcher\n";
	    printf("%d", p);
    return 0;
}
