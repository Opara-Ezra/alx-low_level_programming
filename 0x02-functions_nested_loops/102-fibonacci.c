# include "main.h"
/**
* man -Prints first 50 Fibonaci numbers,starting with 1 and 2,
*     separated by a comma followed by a space
*
* Return Always 0
*/
 	int count
	unsigned long fib1=0, fib2=1, sum;
	for (count =0;count < 50; count++)

	{ 	sum=fib1 + fib2;
		printf("\%1u", sum);

		fib1 = fib2;
		fib2 = sum;

		if(count == 49)
			printf("\n");
		else 
			printf(",");
	}
	return (0);
}
