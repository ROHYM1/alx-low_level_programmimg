#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that print numbers 0 to 14 ten times
 *
 * Return: returns nothing
 */
void more_numbers(void)
{

int n1, n2;

for (n2 = 0; n2 <= 9; n2++)

{

for (n1 = 0; n1 <= 14; n1++)

{

if (n1 > 9)

{

putchar((n1 / 10) + '0');

}

putchar((n1 % 10) + '0');

}
putchar('\n');

}


}
