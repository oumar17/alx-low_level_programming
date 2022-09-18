#include <stdio.h>
/**
 * main - Entry point
 * print print letter of alphabetin lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == 'q' || chr == 'e')
			continue;
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
