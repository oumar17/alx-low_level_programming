/**
*puts_half - return lenght of char array
*@*str: input char (*) s
*@s: input char (*) s
*Return:Always return 0
*/
int _strlen(char *s);
int _putchar(char c);
void puts_half(char *str)
{
	int len;
	int  i;

	len = _strlen(str);
	i = (len - 1) / 2  + 1;
	while (i <= len)
	{
		_putchar(str[i]);
		i = i + 1;
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
