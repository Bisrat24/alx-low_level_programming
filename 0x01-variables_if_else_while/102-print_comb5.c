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
            y = '0';
            while (y <= '9')
            {
                putchar(x);
                putchar(y);
                y++;
                       for (a = '0'; a <= '9'; a++)
                        {
                            b = '0';
                            while (b <= '9')
                            {
                                putchar(' ');
                                putchar(a);
                                putchar(b);
                                b++;
                            }
                        }        
            }
        }
    putchar('\n');
    return (0);
}
