#include "main.h"
  2 /**
  3   * main - Entry point 
  4   * Description:  
  5   * Return: Always 0 (Success)
  6   */
  int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
