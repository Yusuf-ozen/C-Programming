//TASK 2  C PROGRAMME THAT CAN FÝND WHETHER THE NUMBER ÝS PRÝME NUMBER OR NOT



#include <stdio.h>

int main(){
	
int number;        //defining the variable for the number
int counter=1;     //assign the counter to one


		printf("Please enter a number:");  //asking the user for the number
		scanf("%d",&number);   //read number
		
		
		for(i=2;i<number;i++){   //increase i by one number
			
		if(number%i==0){   // if number divides exactly by value i
			counter++;     // increment counter by one
		}	
			
		}
		
	
	   if(counter==1){      //if counter don't change
	   	printf("\nnumber is prime");   // displaying the prime number on the screen
	   }
	   
	   
	   else{       //if counter changes
	   	printf("This number is not prime");  //displaying the not prime number on the screen
	   }
	
	
	return 0;      //successful program termination
}
