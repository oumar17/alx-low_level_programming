#include <stdio.h>
/**
* *cap_string - capitalize wordtwo string
*@*str: input char (*) dest
*@c: input to check
*Return:char * value
*/
int check(char c);
char *cap_string(char *str)
{
	int j;
	char set[] = "\n ,, ;, ., !, ?, \"(){}";
	int i, ret;

	for (j = 0; str[j] != '\0'; j++)
	
	{
		
			if (str[j] == '\t')
			{	str[j] = ' ';
				continue
			}
			else if  (str[j] >= 'a' && str[j] <= 'z')
			{
				for (i = 0; i <= 22; i++)
					if (set[i] == str[j])
			if (str[j] == '\t')
				str[j] = ' ';
			str[j + 1] = str[j + 1] - 32;
			j++;
		}
	}
	return (str);
}
