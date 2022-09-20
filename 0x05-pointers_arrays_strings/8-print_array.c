#include <stdio.h>
/**
*print_array - return lenght of char array
*@a: input char (*) s
*@n: input char (*) s
*Return:Always return 0
*/
void print_array(int *a, int n)
{
	int  i;

	i = 0;
	if (n)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i = i + 1;
		}
		if (n - 1)
		printf("%d\n", a[n - 1]);
	}
}
