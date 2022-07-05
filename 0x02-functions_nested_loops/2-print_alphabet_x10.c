#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int v;

	for (v = 0; v < 10; v++)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('/n');
}
