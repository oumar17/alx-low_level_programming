#include <stdio.h>
/**
* *leet - encode text wordtwo string
*@str: input char (*) to leet
*Return:char (*) str
*/
char *leet(char *str)
{
	int j, i;
	char set[] = "aAeEoOtTlL4433007711";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (str[j] == set[i])
			str[j] = (char)  set[i + 10];
		}
	}
	return (str);
}
