#include <stdio.h>
 
 
 void dortgen(int kisa,int uzun){
 	
 	int i,j;
 	
 	for(i=0;i<uzun;i++){
 		
 		for(j=0;j<kisa;j++){
 			
 			printf("+");
		 }
 		
 	printf("\n");
	 }
 	
 	
 }
 
 
 
 
int main() {
	
	
	dortgen(4,10);
	
	
	
  return 0;
}
