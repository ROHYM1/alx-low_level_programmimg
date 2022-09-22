#include <stdio.h>
#include "main.h"



/**
 * print_triangle - prints a triangle
 * @size: parameter
 * Return: returns nothing
 */
void print_triangle(int size)
{
int p, q;

for (p = 1; p <= size; p++)

{
for (q = size - p; q > 0; q--)

putchar(' ');

for (q = p; q > 0; q--)
putchar('#');
putchar('\n');

}

if (size < 1)

putchar('\n');
}
