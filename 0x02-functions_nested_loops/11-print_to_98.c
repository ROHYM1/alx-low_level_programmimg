#include "main.h"
/**
 * print_to_98 - prints all natural numbers from input to 98,
 * in order seprated by a comma folloed by space.
 * @n: the numbe to begin counting
 */
void print_to_98(int n)

{
 
if (n >= 98)

{
while (n > 98)

printf("%d, ", n--);

printf("%d\n", n);

}

else

{
while (n < 98)

printf("%d, ", n++);
printf("%d\n", n);
