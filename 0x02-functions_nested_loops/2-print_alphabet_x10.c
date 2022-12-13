#include<stdio.h>
/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet_x10 in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
int i;
char ch;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z' ; ch++)
{
putchar (ch);
}
putchar('\n');
}
}
