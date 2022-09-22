#include <stdio.h>
#include "main.h"

/**
 * print numbers - function that print all numbers from 0 to 9
 * @n:
 * Return: returns nothing
 */
void print_numbers(void)
{

char n;

for (n = 48; n < 58; n++)

{

putchar(n);

}

putchar('\n');

}
