#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0' ; a <= '7' ; a++)
	{
		for (b = '1' ; b <= '8' ; b++)
		{
			for (c = '2' ; c <= '9' ; c++)
			{
			if (a < b && b < c)
			{
			putchar(a);
			putchar(b);
			putchar(c);
			}
			if (a < b && b < c && a != '7')
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
