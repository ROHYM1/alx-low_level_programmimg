#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */
void print_diagonal(int n)

{

int x, y;

for (y = 1; y <= n; y++)

{

for (x = 1; x < y; x++)

putchar(' ');

putchar('\\');

putchar('\n');

}

if (n < 1)

putchar('\n');

}
