#include "main.h"
#include <stdio.h>

/**
*print_numbers - function to print numbers from
*0 to 9
*
*Return: void
*/

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
