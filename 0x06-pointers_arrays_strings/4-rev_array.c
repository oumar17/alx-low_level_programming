/**
 * reverse_array - print  check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp, j;

	i = n;
	j = 0;
	temp = 0;
	while (j <= n / 2)
	{
		temp =  a[i];
		a[i] = a[j];
		a[j] = temp;
		i--;
		j++;
	}
}
