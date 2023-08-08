#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strdup - duplicates a string
  *@str: the string to be duplicated
  *
  * Return: string duplicated
  */

char *_strdup(char *str)
{
	char *s;
	int i = 1, a = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
