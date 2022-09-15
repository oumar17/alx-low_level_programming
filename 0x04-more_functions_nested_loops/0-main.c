#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'y';
    printf("%c: %d\n", c, _isupper(c));
    c = 'U';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
