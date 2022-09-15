#include <stdio.h>
/**
* main - Entry point
* print some char to the screen
* Return: Always 0 (Success)
*/
int main(void)
{
	puts("Size of a char: ", sizeof(char));
	puts("Size of an int: ", sizeof(int));
	puts("Size of a long int: ", sizeof(long int));
	puts("Size of a long loint: ", sizeof(long));
	puts("Size of a float: ", sizeof(float));
	return (0);
}
