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
	int dgt3;

	for (dgt1 = 0; dgt1 <= 9; dgt1++)
	{
		for (dgt2 = 0; dgt2 <= 9; dgt2++)
		{
			for (dgt3 = 0; dgt3 <= 9; dgt3++)
			{

				if (dgt1 >= dgt2 || dgt2 >= dgt3)
					continue;
				putchar(dgt1 + '0');
				putchar(dgt2 + '0');
				putchar(dgt3 + '0');
				if (dgt1 == 7 && dgt2 == 8 && dgt3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
