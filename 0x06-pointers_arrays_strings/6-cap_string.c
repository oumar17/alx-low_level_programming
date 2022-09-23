#include <stdio.h>
/**
* *cap_string - capitalize
*@str: input char (*) dest
*Return:char * value
*/
char *cap_string(char *str)
{
	int j, i;
	char set[] = "\n,;\t. !?\"(){}";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i <= 15; i++)
		{
			if  (set[i] == str[j] &&  str[j + 1] >= 'a' && str[j + 1] <= 'z')
			{
				str[j + 1] = str[j + 1] - 32;
				j++;
			}
		}
	}
	return (str);
}
