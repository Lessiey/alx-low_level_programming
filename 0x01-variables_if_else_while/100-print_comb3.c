#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, m = '0', n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = m; n <= '9'; n++)
		{
			if (i != n)
			{
				putchar(i);
				putchar(n);
			}
			if (i == n)
			{
				continue;
			}
			if (i == '8' && n == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		m++;
	}
	putchar('\n');
	return (0);
}
