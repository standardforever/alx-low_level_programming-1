#include "main.h"

/**
 * print_line - the function draws a straight line in the terminal
 * @n: it takes in an argument of type int 
 * Return: it has no return types(void)
 */
void print_line(int n)
{
  int i;
  for (i = 1 ; i < n; i++)
  {
    _putchar(95);
  }
  _putchar('\n');
}
