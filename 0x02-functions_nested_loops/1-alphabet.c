#include "main.h"
#include <stdio.h>

/**
*main - Enrt point
*Return: 0
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
