#include <stdio.h>
/*
What is the largest prime factor of the number 600851475143 ?
*/

	int checkPrime(unsigned long long int number);
	
int main(){
	
	unsigned  long long int number=600851475143,i;
	
	int counter;
	


	
	for(i=2;i<=number;i++){
		
		counter=0;
		while(checkPrime(i)==1 && (number%i)==0){
		
		
		number=number/i;
		counter++;
		
	}
	
	if(counter > 0)
		
		printf("\n %llu to power %d",i,counter);
	
	
	
	}
	
	
	
	return 0;
}	


int checkPrime(unsigned long long int number){
	
	int i,in=1;
	
	for(i=2;i<number/2;i++){
		
		if((number%i)==0){
		
		in=0;	
	    break;
	}
	}
	
	return in;
	
}


