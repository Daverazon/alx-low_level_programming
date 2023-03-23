#include <stdio.h>


int main(void)
{
	long int m,n;

	long int i = 612852475143, answer = 0;

	for (n = i - 1; n > 1; n--)
	{
		if (i % n != 0)
			continue;
		for (m = n - 1; m > 1; m--)
		{
			if (n % m == 0)
				break;
			else
				answer = n;
		}
		if (answer > 0)
			break;
	}
	printf("%ld\n", answer);
	return (0);
}
