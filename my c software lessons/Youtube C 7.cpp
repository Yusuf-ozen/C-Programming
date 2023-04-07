#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	char bilgi[50];
	
		printf("Mesaj : ");
		scanf("%s",&bilgi);
		
		printf("%s",bilgi);
		
		printf("\n");
		printf("%10s",bilgi);   //bosluk býrakýr.
		
		printf("\n");
		
		printf("%20.5s",bilgi);     //20 karakterlik yer ayýr ve 5 'ini kullan.
		
		printf("\n\n");
		printf("%-20s",bilgi);        
	
	
	
	
	return 0;
}


