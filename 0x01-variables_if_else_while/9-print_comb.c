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
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
        if (x != '9')
        {
        putchar(',');
        putchar(' ');    
        }
	}
	putchar('\n');
	return (0);
}
