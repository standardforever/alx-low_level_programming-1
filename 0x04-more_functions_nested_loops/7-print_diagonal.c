#include "main.h"

/**
 * print_diagonal - the function draw a diagonal
 * @n: takes n integer
 * Return: has no return type(void)
 */
void print_diagonal(int n)
{
  int i,j;
  for (i = 1; i <=n; i++)
  {
    _putchar(92);
    _putchar('\n');
    for (j = 1; j <=i; j++)
    {
      _putchar(' ');
    }
  }
  _putchar('\n');
}
