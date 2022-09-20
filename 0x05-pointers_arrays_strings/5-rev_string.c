/**
*rev_string - prit in reverse lenght of char array
*@s: input char (*) s
*@s: input to _strle char (*) s
*Return:Always return 0
*/
int _strlen(char *s);
void rev_string(char *s)
{
	int len, i;
	char *temp;

	len = _strlen(s);
	i = 0;
	temp = s; 
	while (len)
	{
		temp[i] = s[len];
		i++;
		len--;
	}
	s = temp; 
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
