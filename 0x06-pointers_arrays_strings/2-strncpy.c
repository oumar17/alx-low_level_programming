#include <stdio.h>
/**
*_strncpy -concatenate two string
*@*dest: input char (*) dest
*@*src: inputchar (*) src
*@s: input char* to strlen
*Return: char (*) string
*/
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n)
{
	int j, t;

	j = 0;
	t = _strlen(src);
	for (j = 0; j <= n; j++)
		dest[j] = src[j];
	for (j = 0; j <= (n - t); j++)
		dest[j + t] = '\0';
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
