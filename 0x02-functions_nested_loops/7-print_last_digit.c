#include<stdio.h>
/**
 * main - check the code for School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  int r;

  print_last_digit(98);
  print_last_digit(0);
  r = print_last_digit(-1024);
  putchar('0' + r);
  putchar('\n');
  return (0);
}
