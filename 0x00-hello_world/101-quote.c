#include <stdio.h>
#include "_putchar.c"
/**
* main - Entry point
* print some char to
*
* the screen
* Return: Always 0 (Success)i
*/
int _putchar(char c);

int main(void)
{
	int i = 0;

	char c [57]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	do
	{
		_putchar(c[i]);
		i++;	
	} while(i<=57)
	return (0);
}
