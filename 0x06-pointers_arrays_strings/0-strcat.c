#include <stdio.h>
/**
*_strcat -concatenate two string
*@*dest: input char (*) dest
*@*src: inputchar (*) src
*Return: char (*) string
*/
int _strlen(char *s);
char *_strcat(char *dest, char *src)
{
	int i, j, t;

	j = 0;
	t = _strlen(src);
	i = _strlen(dest);
	do {
		dest[j + i] = src[j];
		j++;
	} while (j <= t);
	return (dest);
}

/**
*_strlen - return lenght of char array
*@s: input char (*) s
*Return:Always return 0
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
