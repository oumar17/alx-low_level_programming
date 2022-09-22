#include <stdio.h>
/**
*string_toupper - compare two string
*@str: input char (*) dest
*Return:chr * value
*/
char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = str[j] - 32;
	}
	return (str);
}
