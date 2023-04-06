#include <stdio.h>

int main(){

unsigned long long int number;

int ex,i,a,in=1;

printf("Enter the number :  ");
scanf("%llu",&number);

i = number / 2 + 1;
ex = number;
number *= (number / 2 + 1);

a = number;
	
	while(in == 1){
		
		if(number % i == 0 && i < (ex - 1))
		i++;
		
		else if(number % i == 0 && i == (ex - 1))
		in = 0;
		
		else{
			
			i = ex / 2 + 1;
			number += a;
		}
		
	}

		printf("%llu",number);

	return 0;
}




/*

int main(){
	
	int x,y,smallest;
	
	x = 1;
	y = 1;
	smallest = 0;
	
	
	while(x > 0){
		
		y=1;
		
		while((x % y == 0) && (y <= 20)){
			
			if(y == 20){
				
				smallest = x;
				break;
			}
			
			y++;
		}
		
	x++;
	
	if(smallest > 0){
		
		
		break;
		
	}	
	
	
		 
	}
	
	
	printf("%d\n",smallest);

	
	return 0;
}



*/











