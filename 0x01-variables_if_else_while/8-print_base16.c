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
char c;
for (x = '0'; x <= '9'; x++)
{
	putchar(x);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}   
putchar('\n');
return (0);
}
