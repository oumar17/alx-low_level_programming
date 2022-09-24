/**
*print_number - print input number
*@c: int input
*
*Return: returns 0
*/

int _putchar(char c);
void print_number(int n)
{
	int i, temp;

	temp = 0;
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	for (i = 0; n % 10 || n / 10 ; i++)
	{
		temp = (temp * 10) + (n % 10);
		n = n / 10;
	}
	for (; temp / 10 || temp % 10;)
	{
		_putchar((temp % 10) + '0');
		temp = temp / 10;
	}
}
