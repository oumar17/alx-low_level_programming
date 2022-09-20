/**
*_puts - return lenght of char array
*@*str: input char (*) s
*@c: input to _putch
*Return:Always return 0
*/
int _putchar(char c);
void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
