#include "main.h"
  2 /**
  3   * main - Entry point 
  4   * Description: "function that checks for alphabetic character"  
  5   * Return: Always 0 (Success)
  6   */
  int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
