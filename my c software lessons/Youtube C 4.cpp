#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	double sum1,sum2,number;
	
	
		printf("enter a number : ");
		scanf("%lf",&number);
	
	sum1=fabs(number);           //fabs mutlak deger� almaya saglar.
	
	
		printf("Absolute value : %.lf",sum1);
		
		sum2=log(number);           //10 taban�nda logaritmas�n� al�r.
		
			printf("\nresult : %.lf",sum2);
		
	return 0;
}
