/**
*rev_string - prit in reverse lenght of char array
*@s: input char (*) s
*@s: input to _strle char (*) s
*Return:Always return 0
*/
int _strlen(char *s);
int _putchar(char c);
void rev_string(char *s)
{
	int len, i;
	char *revs;

	len = _strlen(s);
	i = 0;
	revs = "\0";
	while (len >= 0)
	{
		*(revs + i) = s[len];
		len--;
		i++;
	}
	s = revs;
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
