/**
*swap_int - swaps the values of two integers.
*@a: input int (*) a
*@b: input int (*) b
*Return:Always return 0
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
