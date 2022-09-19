
#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: nothing
 */

void _puts(char *str)

{
	int r = 0;
	while (*(str + r) != '\0')
	{
	putchar(*(str + r));
	r++;
	}
	putchar(10);

}
