#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('/n');
	return (0);
}
