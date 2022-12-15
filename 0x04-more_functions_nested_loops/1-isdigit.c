#include<stdio.h>
#include "main.h"
/**
 * _isdigit - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isdigit(int c)
{
int value=0;
if(c >= 0 || c <= 9)
{
	value= 1;
}
else
{
value= 0;
}
return (value);
}
