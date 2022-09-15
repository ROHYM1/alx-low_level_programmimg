#include "main.h"
/**
 * islower - function to check lower case character
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0); 
}
