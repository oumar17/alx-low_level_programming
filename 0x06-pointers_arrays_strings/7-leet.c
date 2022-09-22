#include <stdio.h>
/**
* *leet - encode text wordtwo string
*@*str: input char (*) dest
*@c: input to check
*Return:char * value
*/
int check(char c);
char *leet(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (check(str[j]) >= 0)
			str[j] = (char) check(str[j]);
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
	char set[] = "aAeEoOtTlL4433007711";

	ret = -1;
	for (i = 0; i < 10; i++)
		if (set[i] == c)
			ret = set[i + 10];
	return (ret);

}
