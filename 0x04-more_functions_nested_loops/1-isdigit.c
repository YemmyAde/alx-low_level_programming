#include "main.h"
#include <stdio.h>

/**
*_isdigit - checks if c is a digit
*
*Return: return 1 if it a digit
*else return 0
*
*/

int _isdigit(int c)
{
	if (c >= "0" && c <= "9")
	{
		return (1);
	}
	return (0);
}
