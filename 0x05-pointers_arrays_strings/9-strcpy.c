#include "main.h"

/**
 * *_strcpy - copies string to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * Description: cpies string src to buffer
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int xy;
	xy = 0;

	while (xy >= 0)
	{
	dest[xy] = src[xy];
	if (src[xy] == '\0')
	return (dest);
	xy++;
	}
	return (dest);

}
