#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an arrays of chars
*@size: the size of the arrray
*@c: the char to fill in the array
*
*Return: the array filled
*/

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
