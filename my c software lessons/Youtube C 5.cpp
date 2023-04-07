#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	double degree,sinValue,cosValue;
	
			printf("Enter degree : ");
			scanf("%lf",&degree);
			
		sinValue=sin(degree);
			printf("Sinus value : %lf",sinValue);
		cosValue=cos(degree);
			printf("\nCosinus value : %lf",cosValue);

	
	return 0;
}
