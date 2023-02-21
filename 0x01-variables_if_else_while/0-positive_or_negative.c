#include <stdio.h>

/**
 *main - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d\n is positive", n);
	}
	else if (n == 0)
	{
		printf("%d\n is zero", n);
	}
	else
	{
		printf("%d\n is negative", n);
	}
}
