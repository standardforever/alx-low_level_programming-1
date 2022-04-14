#include "main.h"

/**
 * _isdigit(intc ) - it check for a digit(0-9)
 * @c: takes argument of type int 
 * Return: returns 1 if c is digit else 0
 */
int _isdigit(int c)
{
  return (c >= 48 && c <= 57);
}
