#include<stdio.h>
/**
 * print_sign - Check sing
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
int value;
if (n > 0)
{
value = 1;
putchar('+');
putchar('\n');
}
else if (n == 0)
{
value = 0;
putchar('0');
putchar('\n');
}
else
{
value = -1;
putchar('-');
putchar('\n');
}
return (value);
}
