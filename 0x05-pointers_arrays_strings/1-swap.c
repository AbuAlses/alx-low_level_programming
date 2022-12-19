#include "main.h"
/**
 * swap_int switch to value by referance
 * @x int 
 * @*b point to int
 * @*b point to int
 * return 0
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;

}
