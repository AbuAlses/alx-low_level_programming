#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
int len = strlen(s), x;
for (x = len ; x >= 0 ; x--)
{
printf("%c", *(s + x));
}
printf("\n");

}

