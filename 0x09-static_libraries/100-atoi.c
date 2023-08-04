#include "main.h"

/**
 * _atoi - converting a string into an integer.
 *
 * @s: string to use in the program.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int resign = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		resign = (resign * 10) + (s[i] - '0');
		i++;
	}
	resign *= sign;
	return (resign);
}
