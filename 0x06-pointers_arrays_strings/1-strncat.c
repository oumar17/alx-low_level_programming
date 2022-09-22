#include <stdio.h>
/**
*_strncat -concatenate two string
*@*dest: input char (*) dest
*@*src: inputchar (*) src
*@s: input char* to strlen
*Return: char (*) string
*/
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n)
{
	int i, j, t;

	j = 0;
	t = _strlen(dest);
	i = _strlen(dest);
	do {
		dest[j + i] = src[j];
		j++;
	} while (j <= n && j <= t);
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
