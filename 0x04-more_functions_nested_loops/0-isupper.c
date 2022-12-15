#include "main.h"
#include <stdio.h>
int _isupper(int c);
/**
 * uppercase - check code
 * @int number c
 * Return 1 or 0
 */
int _isupper(int c)
{
int value;
if(c >='A' || c <= 'Z')
{
	value= 1;
}
else
{
value= 0;
}
return (value);
}
