#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0 - means success
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';

	for (; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9' ; b++)
		{
			for (c = b + 1; c <= '9' ; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
