#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character.
 i* @c: the int for the paramaters of my function
 * Return: 1 if true, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
