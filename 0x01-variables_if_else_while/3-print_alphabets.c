#include <stdio.h>

/**
 * main - ilphabet in lowercase, and then uppercase
 *
 *
 * Return: returns zero ar the end
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (alpha = 'A'; alpha <= 'Z'; alpha++)

{
putchar(alpha);
}

putchar('\n');

return (0);
}
