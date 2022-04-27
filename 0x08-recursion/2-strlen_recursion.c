/**
 * _strlen_recursion - prints length of the string
 * @s: string
 * Retrun: string length on sucess
 */

int _strlen_recursion(char *s)
{
	int count=0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		count++;
	}
	return count;
}
