#include<stdio.h>
#include "main.h"
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
