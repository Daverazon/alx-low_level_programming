#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible different combinations of two two-digit numbers
 *
 * Return: Always returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			for (k = 48 ; k < 58 ; k++)
			{
				for (l = 49 ; l < 58 ; l++)
				{
					if (!((i == k && j == l) || k < i || (i == k && l <= j)))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (!((i == 57 && j == 56) && (k == 57 && l == 57)))
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
