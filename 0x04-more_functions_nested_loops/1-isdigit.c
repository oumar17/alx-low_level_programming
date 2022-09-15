/**
* _isdigit - Checks whether the input character is digit
* @c: the char to be checked
* Return: 1 if c is digit, 0 otherewise
*/
int _isdigit(int c)
{
	int ret = 0;

	if (c >= 0 && c <= 9)
	{
		ret  = 1;
	}

	return (ret);
}
