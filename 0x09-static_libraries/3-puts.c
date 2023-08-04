#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: the string to print
 *_putchar prints a new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
