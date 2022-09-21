/**
*rev_string - prit in reverse lenght of char array
*@s: input char (*) s
*@s: input to _strle char (*) s
*Return:Always return 0
*/
int _strlen(char *s);
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j  = _strlen(s) - 1;
	do {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	} while (j >= i);
}
/**
*_strlen - return lenght of char array
*@s: input char (*) s
*Return:Always return 0
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
