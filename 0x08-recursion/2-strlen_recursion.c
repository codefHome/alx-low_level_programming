/**
 * _strlen_recursion - prints length of the string
 * @s: string
 * Return: string length on sucess
 */
int count = 0;
int _strlen_recursion(char *s)
{
	

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	
	}
	return count;
}
