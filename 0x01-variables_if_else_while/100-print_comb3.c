#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0 - means success
 */
int main(void)
{
int x;
int y;
for (x = '0'; x <= '8'; x++)
{
y = x+1;
while (y <= '9')
{
putchar(x);
putchar(y);
y++;
if ( x != '8' && y != '9' )
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
