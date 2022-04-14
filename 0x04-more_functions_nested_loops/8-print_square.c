#include "main.h"

/**
 * print_square - this function print a square
 * @size: take an integer size
 * Return: no return type(void)
 */
void print_square(int size)
{
  int i, j;
  for (i = 1; i <= size; i++)
  {
    for (j = 1; j <= size; j++)
    {
      _putchar(35);
    }
    _putchar('\n');
  }
  _putchar('\n');

}
