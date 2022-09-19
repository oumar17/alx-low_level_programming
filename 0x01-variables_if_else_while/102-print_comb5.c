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
	int dgt4;
	int cn1;
	int cn2;

	cn1 = 0;
	cn2 = 0;
	for (dgt1 = 0; dgt1 <= 9; dgt1++)
	{
		for (dgt2 = 0; dgt2 <= 9; dgt2++)
		{
			cn1++;
			cn2 = 0;
			putchar(dgt1 + '0');
			putchar(dgt2 + '0');
			putchar(' ');
			for (dgt3 = 0; dgt3 <= 9; dgt3++)
			{
				for (dgt4 = 0; dgt4 <= 9; dgt4++)
				{
					cn2++;
					if (cn1 >= cn2)
						continue;
					putchar(dgt3 + '0');
					putchar(dgt4 + '0');
					if (dgt1 == 9 && dgt2 >= 8 && dgt3 == 9 && dgt4 == 9)
					{
						dgt2 = 10;
						dgt3 = 9;
						dgt1 = 10;
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
