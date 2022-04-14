#include "main.h"

/**
 * print_triangle - the function print a triangle
 * @size: take in an argument of type int
 * Return: is of type void
 */
void print_triangle(int size)
{
  int i,j;
  for (i = 1; i <= size; i++)
  {
    for (j = size -1; j >= 1 ;j--)
    {
      _putchar(' ');
    }  
    for (int k = 1; k <= size; k++)
    {
	_putchar(35);
     }
   
    _putchar('\n');
  }
  _putchar('\n');
}
