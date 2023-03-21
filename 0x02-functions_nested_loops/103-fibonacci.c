#include <stdio.h>
/**
 * main - finds and prints the asum of the even-valued terms 
 * followed :Always 0 (success)
 */
int main(void)

	int i;
	unsingned long int j, k, next, sum;
	j=1;
	k=2;
	sum = 0

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000n && (j % 2)==0)
		{
			sum = sum + j;
		}
	         next = j + k;
		 j = k;
		 k= next;
	}
	printf("%1u\n", sum);
	return (0);
}
