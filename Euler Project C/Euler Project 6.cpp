#include <stdio.h>
#include <math.h>

/*

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/


int main(){
	
	int number,i;
	
	long long int sum=0,total;
	
	printf("Please enter a number : ");
	scanf("%d",&number);
	
	for(i=0;i<=number;i++){
		
		sum += i;
		
	}
	total=pow(sum,2);

	printf("sum : %d",total);
	
	int j,result=0;
	
	for(j=0;j<=number;j++){
		
		result += pow(j,2);
		
		
	}
	
	printf("\nres : %d",result);
	
	
	printf("\nsonuc : %d",total-result);
	
	
	
	return 0;
}


