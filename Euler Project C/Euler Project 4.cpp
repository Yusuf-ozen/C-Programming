#include <stdio.h>

/*
      Find the largest palindrome made from the product of two 3-digit numbers.
*/
	unsigned long long int palindrome(unsigned long long number);


int main(){
	
	unsigned long long int a,b,i,j,maximum=0;
	
	printf("Enter the two max number include 9 : ");
	scanf("%llu  %llu",&i,&j);
	
	
	for(a=i;a>=(i/10 +1);a--){
			
	for(b=j;b>=(j/10 +1);b--){
		
		if(palindrome(a*b)>maximum){
			
			maximum=a*b;
		
		}
		
	}
	
	
		
	}
		printf("%llu\n",maximum);

}


	unsigned long long int palindrome(unsigned long long int number){
		
		unsigned long long int ex=number,reverse=0;
		
		while(ex>0){
			
			reverse=reverse*10 +(ex%10);
			
			ex /=10;
		}
		
	return (reverse == number)? number : 0;     //   reverse == number ise return number yap değilse 0 yap	
		
	}




















