#include "main.h"

/**
 * 3-islower - check if c is lower case
 * @c: int
 * Return: Always 0(Sucess)
 */

int _islower(int c)
{
	char alpha;

	for (alpha = 'a '; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}

return (0);
}
