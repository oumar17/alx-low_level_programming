#include <stdio.h>
/**
*_strcmp - compare two string
*@s1: input char (*) dest
*@s2: inputchar (*) src
*Return: int value
*/
int _strcmp(char *s1, char *s2)
{
	int j, ret;

	j = 0;
	ret = 0;
	for (; s1[j] != '\0' && s2[j] != '\0'; j++)
	{
		ret = s1[j] - s2[j];
		if (ret != 0)
			break;
	}
	return (ret);
}
