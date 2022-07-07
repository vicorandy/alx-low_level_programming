#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int vic;

	for (vic = 48; vic < 58; vic++)
	{
		if (vic != 50 && vic != 52)
			_putchar(vic);
	}
	_putchar('\n');
}
