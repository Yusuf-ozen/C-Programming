#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int number;
	double result;
	
		printf("Please enter a number:");
		scanf("%d",&number);
		
		result=sqrt(number);
			
			printf("result:%.2f",result);   //% den sonra , kac tane sayı girecegını yazar.	
	
	return 0;
}
