#include "main.h"
/**
* _isahlpha - checks for alphabet character
*@c the character to be checked
*Return :1 if c is a letter, 0 otherwise 
*/
int _isaipha(int c)
{
	return((c <='a'&& c<='z')||(c >='A' && c <='Z'));
}
