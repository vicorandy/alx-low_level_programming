#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s: input string.
 *Return: no return.
 */
void print_rev(char *s)
{
	int size = 0;

	while (size >= 0)
	{
		if (s[size] == '\0')
		{
			break;
		}
		size++;
	}
	int i;

	for (i = size; size >= 0; size--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
