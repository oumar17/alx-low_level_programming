#include "main.h"
#include <stdio.h>

/**
 * _strchr - set memory withcosntant byte
 *@s: the address of memory to print
 *@c: byt to write
 *Return: *s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *ret =  NULL;

	i = 0;
	while (s[i] !=  '\0')
	{
		if (s[i] ==  c)
		{
			ret = (i + s);
			break;
		}
		i++;
	}
	return (ret);
}
