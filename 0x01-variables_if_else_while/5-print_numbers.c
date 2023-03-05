#include <stdio.h>

/**
*main - entry point
*
*Description: The program prints all base 10 digits
*
*
*Return: Always 0
*/

int main(void)
{

	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");
	return (0);
}
