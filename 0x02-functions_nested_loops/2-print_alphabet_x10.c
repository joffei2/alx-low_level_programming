#include "main.h"
  2 /**
  3   * main - Entry point 
  4   * Description:  
  5   * Return: Always 0 (Success)
  6   */
  void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
