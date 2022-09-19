#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print strings in reverse
 * @s: reverse strings
 * Return: nothing
 */

void print_rev(char *s)
{
int i = 0;
 
while (s[i] != '\0')
i++;

for (i = i - 1; i >= 0; i--)
putchar(s[i]);
putchar('\n');
}
