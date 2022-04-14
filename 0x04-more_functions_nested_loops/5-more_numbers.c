#include "main.h"

/**
 * more_numbers - it prints 10 times the numbers for 0-14 followed by a new line
 * Return: no return type (void)
 */
void more_numbers(void)
{
  int i,j,k;

  for (i = 0; i <= 10; i++)
  {
    for (j= 48; j <= 57; j++)
    {
      _putchar(j + 50);
      
    }
    j = 49;
    for (k =48; k <= 51; k++)
    {
      _putchar(j);
      _putchar(k);
    }
    _putchar('\n');
  }
}
