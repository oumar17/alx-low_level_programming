/**
*print_number - print input number
*@c: input to _putchar
*Return: returns 0
*/

int _putchar(char c);

void print_number(int n)
{
	int i, j;
	char temp[11] = "";

	i = 0;
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	for (i = 0; n % 10 || n / 10 ; i++)
	{
		temp[i] = n % 10;
		n = n / 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(temp[j] + '0');
	}
}
