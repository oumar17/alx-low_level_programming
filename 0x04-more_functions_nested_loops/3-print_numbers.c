/**
* print_numbers - print number  0 to 9
*
* Return: void
*/
void  print_numbers(void)
{
	int i = 0;
	char c = "\n";
	while (i++ <= 10)
	{
		c = (char) i;
		_putchar( c );
	}
	_putchar('\n');
}
