#include <stdio.h>
/**
 * p_int - swaps the values of two integers
 * a: %p1
 * b: %p2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
