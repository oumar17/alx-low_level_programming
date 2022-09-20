/**
*puts2 - return lenght of char array
*@*str: input char (*) s
*@c: input to _putch
*Return:Always return 0
*/
int _putchar(char c);
void puts2(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 2;
	}
	_putchar('\n');
}
