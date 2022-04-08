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
for (x = '0'; x <= '8'; x++)
{
while (y <= '9')
{
putchar(x);
putchar(y);
y++;
        for (a = '0'; a <= '8'; a++)
        {
        while (b <= '9')
        {
        putchar(a);
        putchar(b);
        b++;
        if (a != '8')
        {
        putchar(',');
        putchar(' ');
        }
        }
        }       
}
}
}
putchar('\n');
return (0);
}
