#include <stdio.h>
#include <stdlib.h>

	
	
	int main (void)
{
 int exp, base;
 int product=, i;
 printf ("Enter integer base and exponent: ");
 scanf ("%d%d", &base, &exp);
 for (i = 1; i < exp; i++)
 {
 product *= base;
 
 }

 printf ("%d to the power %d is: %d\n", base, exp, product);

 return 0;
}

