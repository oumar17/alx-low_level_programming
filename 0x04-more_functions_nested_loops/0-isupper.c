/**
* _isupper - Checks whether the input character is upper case
* @c: the char to be checked
* Return: 1 if c is uppercase, 0 otherewise
*/
int _isupper(int c)
{
	int ret = 0;

	if (c >= 'A' && c <= 'Z')
	{
		ret  = 1;
	}

	return (ret);
}
