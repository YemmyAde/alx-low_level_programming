#include <stdio.h>

/*
 *main -every c programme has
 *a main function
 *
 *Description: The program prints all base 10 digits
 *Return 0
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
