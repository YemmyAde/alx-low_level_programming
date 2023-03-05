#include <stdio.h>

/**
*main - entry point
*
*Description: print number
*
*Return: return 0
*/

int main(void)
{

	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
			if (c != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);

}

