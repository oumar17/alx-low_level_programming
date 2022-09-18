#include <stdio.h>
/**
 * main - Entry point
 * print digit
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chr;

	for (chr = 0; chr <= 9; chr++)
		putchar(chr + '0');
	putchar('\n');
	return (0);
}
