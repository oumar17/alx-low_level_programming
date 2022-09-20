/**
*print_rev - prit in reverse lenght of char array
*@s: input char (*) s
*@s: input to _strle char (*) s
*Return:Always return 0
*/
int _strlen(char *s);
int _putchar(char c);
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
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
