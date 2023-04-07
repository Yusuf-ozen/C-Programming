#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
	
	double number,sum1,sum2;
	
		printf("Enter number : ");
		scanf("%lf",&number);
		
		
	sum1=floor(number);                    //sayıyı alta yuvarlar.
		printf("result1 : %.f",sum1);
	sum2=ceil(number);                     //sayıyı yukarıya yuvarlar.
	    printf("\nresult2 : %.f",sum2);
	return 0;
}
