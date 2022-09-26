#include "main.h"
#include <stdio.h>

/**
 * _memcpy - set memory withcosntant byte
 *@dest: the address of memory to print
 *@src: byt to write
 *@n: input int
 *Return: *s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
