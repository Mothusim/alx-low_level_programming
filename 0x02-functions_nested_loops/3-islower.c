#include "main.h"
#include <stdio.h>

/**
*_islower - function to check for lowercase character
*@c - is the int that we will use for the argument of the function
*main - check the code
*Return: 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
