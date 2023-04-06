#include <stdio.h>

/*
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

int fibonacci(int limited);

int main(){
	int limited;
	
		printf("Enter the number which does not exceed 4 million : ");
		scanf("%d",&limited);
		
		if(limited>4000000){
			printf("Your number more than 4000000");
		}
	
		printf("%d",fibonacci(limited));
	
	return 0;
}



int fibonacci(int limited){
	
	int a1=0,a2=1,b,i,sum=0; 
	
	for(i=0;i<limited;i++){
	
	b=a1+a2;
	
	if(b>4000000)
		break;
		
	else if(b%2==0)
		sum+=b;
	
	a1=a2;
	a2=b;
	
	}
	
	
return sum;
}
