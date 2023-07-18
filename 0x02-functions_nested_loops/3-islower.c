#include "main.h"
  2 /**
  3   * main - Entry point 
  4   * Description: " function that checks for lowercase character" 
  5   * Return: Always 0 (Success)
  6   */
  int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
