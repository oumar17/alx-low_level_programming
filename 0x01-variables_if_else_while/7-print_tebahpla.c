#include <stdio.h>
/**
 * main - Entry point
 * print print letter of alphabetin lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
		putchar(chr);
	putchar('\n');
	return (0);
}
