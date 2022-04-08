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
int a;
int b;
for (x = '0'; x <= '9'; x++)
{
y = '0';
while (y <= '9')
{
for (a = '0'; a <= '9'; a++)
{
b = '0';
while (b <= '9')
{
if ((x < a) || (x == a && y < b))
{
putchar(x);
putchar(y);
putchar(' ');
putchar(a);
putchar(b);
if (!(x == '9' && y == '8'))
{
putchar(',');
putchar(' ');
}
}
b++;
}
}
y++;
}
}
putchar('\n');
return (0);
}
