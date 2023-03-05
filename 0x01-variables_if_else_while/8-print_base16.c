#include <stdio.h>

/**
*main - entry point
*
*Description: print base 16 digits
*
*Return: return 0
*/

int main(void)
{
	char num = '0';
	char alp = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alp < 'g')
	{
		putchar(alp);
		alp++;
	}

	putchar('\n');
	return (0);

}
