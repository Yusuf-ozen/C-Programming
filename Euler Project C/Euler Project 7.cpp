#include <stdio.h>

int checkPrime(long long int number);


int main(){
	
	unsigned long int counter;
	unsigned long long int number, wanted;
	
		printf("Enter the wanted:  ");
		scanf("%llu",&wanted);
		
	for(number=2;;number++){
		if(checkPrime(number) == 1)
		counter++;
		
		if(counter == wanted)
		break;
	}
	
	printf("%llu",number);
	
	
	return 0;
}

int checkPrime(long long int number){
	
	long int i,in=1;
	
	for(i=2;i<=number/2;i++){
		
		if(number%i==0){
			in=0;
			break;
		}
		
		
	}
	return in;
}
















/*

int main(){
	

int i,j,counter=0;
    for(i=2;i<100;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                counter++;
        }
            if(counter==2)
        {
            counter=i;
            printf("%d \n",counter);
            
        }
        counter=0;
    }
	
	printf("\nwe have %d prime number");
	
	
	
	return 0;
}

*/
