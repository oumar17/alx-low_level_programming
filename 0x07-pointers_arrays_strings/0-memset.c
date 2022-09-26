#include "main.h"
#include <stdio.h>

/**
 * _memset - set memory withcosntant byte
 *@s: the address of memory to print
 *@b: byt to write
 *@n: input int
 *Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
