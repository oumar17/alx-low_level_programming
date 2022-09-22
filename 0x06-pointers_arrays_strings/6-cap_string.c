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

	for (j = 0; str[j] != '\0'; j++)
	{
		if (check(str[j]) && str[j + 1] >= 'a' && str[j + 1] <= 'z')
		{
			if (str[j] == '\t')
				str[j] = ' ';
			str[j + 1] = str[j + 1] - 32;
			j++;
		}
	}
	return (str);
}


/**
 *check - compare  char
 * @c: input char
 *Return: ret 1 if match
 */

int  check(char c)
{
	int i, ret;
	char set[] = " \t\n ,, ;, ., !, ?, \"(){}";

	ret = 0;
	for (i = 0; i <= 28; i++)
		if (set[i] == c)
			ret = 1;
	return (ret);

}
