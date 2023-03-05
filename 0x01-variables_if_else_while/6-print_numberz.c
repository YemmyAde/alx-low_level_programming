#include <stdio.h>

/**
*main - entry point
*
*Description: prints base 16 digits
*
*Return: always return 0
*/

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

	}
	putchar('\n');
	return (0);
}
