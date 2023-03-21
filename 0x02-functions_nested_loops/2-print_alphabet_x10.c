#include "man.h"

/**
*print _aiphabet_x10 -prints 10 times the aiphabet,in lowercase.
*followed by a nwe line
*/
void print _alphabet_x10(void)
	char ch,
	int i,

	i=0

	while(i <=10)
	{

		ch ='a';
		while (ch <= 'z')
		{	
			_putcheard(ch),
			ch++;
	}
	_putchar('\n');
	i++;
	}
} 
