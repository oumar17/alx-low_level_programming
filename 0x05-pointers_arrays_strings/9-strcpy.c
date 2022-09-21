#include <stdio.h>
/**
*_strcpy - return a char array
*@*dest: input char (*) dest
*@*src: inputchar (*) src
*@s: input to _strlen function
*Return: char (*) string
*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;
	i = _strlen(src);
	do {
		dest[j] = src[j];
		j++;
	} while (j <= i);
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
