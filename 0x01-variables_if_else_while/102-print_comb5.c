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
        for (x = '0'; x <= '9'; x++)
        {
            while (y <= '9')
            {
                putchar(x);
                putchar(y);
                y++;
                           
            }
        }
    putchar('\n');
    return (0);
}
