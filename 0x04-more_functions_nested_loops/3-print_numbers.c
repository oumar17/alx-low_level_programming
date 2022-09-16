/**
* print_numbers - print number  0 to 9
* @c: internal variable tohold number
* Return: void
*/

int _putchar(char c);

void  print_numbers(void)
{
	int i = 48;

	char c = '\n';

	while (i++ <= 56)
	{
		c = (char) i;
		_putchar(c);
	}
	_putchar('\n');
}
