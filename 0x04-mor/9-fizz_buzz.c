#include <stdio.h>

/**
 * main - it print 1-100, but for muliple of 3 print fizz, for 5 print Buzz, for 5 and 3 print FizzBuzz
 * Return: returns 0
 */
int main(void)
{
  int i;

  for (i = 1; i <= 100; i++)
  {
    if (i%3 == 0 && i%5 == 0)
    {
      printf("FizzBuzz ");
    }
    else if (i % 3 == 0)
      printf("Fizz ");
    else if (i % 5 == 0)
      printf("Buzz ");
    else
      printf("%i ", i);
  }
  putchar('\n');
}
