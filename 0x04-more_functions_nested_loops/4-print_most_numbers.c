#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - print numbers
*
*Return: returns void
*/

void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++
	}
	_putchar('\n');
}
