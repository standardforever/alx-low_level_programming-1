<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * infinite_add - a functions that add to numbers
 * @n1: the first number and of type char
 * @n2: second number and of type char
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: the function returns a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bg = c1;
	else
		bg = c2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	c1--, c2--, size_r--;
	dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
			*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - 48;
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
=======

 ​/*​* 
 ​ * infinite_add - add 2 numbers together 
 ​ * @n1: text representation of 1st number to add 
 ​ * @n2: text representation of 2nd number to add 
 ​ * @r: pointer to buffer 
 ​ * @size_r: buffer size 
 ​ * Return: pointer to calling function 
 ​ ​*/ 
  
 ​char​ *​infinite_add​(​char​ *n1, ​char​ *n2, ​char​ *r, ​int​ size_r) 
 ​{ 
 ​        ​int​ overflow = ​0​, i = ​0​, j = ​0​, digits = ​0​; 
 ​        ​int​ val1 = ​0​, val2 = ​0​, temp_tot = ​0​; 
  
 ​        ​while​ (*(n1 + i) != ​'​\0​'​) 
 ​                i++; 
 ​        ​while​ (*(n2 + j) != ​'​\0​'​) 
 ​                j++; 
 ​        i--; 
 ​        j--; 
 ​        ​if​ (j >= size_r || i >= size_r) 
 ​                ​return​ (​0​); 
 ​        ​while​ (j >= ​0​ || i >= ​0​ || overflow == ​1​) 
 ​        { 
 ​                ​if​ (i < ​0​) 
 ​                        val1 = ​0​; 
 ​                ​else 
 ​                        val1 = *(n1 + i) - ​'​0​'​; 
 ​                ​if​ (j < ​0​) 
 ​                        val2 = ​0​; 
 ​                ​else 
 ​                        val2 = *(n2 + j) - ​'​0​'​; 
 ​                temp_tot = val1 + val2 + overflow; 
 ​                ​if​ (temp_tot >= ​10​) 
 ​                        overflow = ​1​; 
 ​                ​else 
 ​                        overflow = ​0​; 
 ​                ​if​ (digits >= (size_r - ​1​)) 
 ​                        ​return​ (​0​); 
 ​                *(r + digits) = (temp_tot % ​10​) + ​'​0​'​; 
 ​                digits++; 
 ​                j--; 
 ​                i--; 
 ​        } 
 ​        ​if​ (digits == size_r) 
 ​                ​return​ (​0​); 
 ​        *(r + digits) = ​'​\0​'​; 
 ​        ​rev_string​(r); 
 ​        ​return​ (r); 
 ​}
>>>>>>> 2b331a3b7fb56254ec8577975bcfe94c61d8df86
