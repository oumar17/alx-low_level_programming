#include <stdio.h>
/**
 * main - Entry point
 * print digit
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dgt1;
	int dgt2;

	for (dgt1 = 0; dgt1 <= 9; dgt1++)
	{
		for (dgt2 = 0; dgt2 <= 9; dgt2++)
		{
			if (dgt1 >= dgt2)
				continue;
			putchar(dgt1 + '0');
			putchar(dgt2 + '0');
			if (dgt1 == 9 && dgt2 == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
