#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	
   int satir,sutun,i,j,k,n;
   
   		printf("satir sayisi : ");
   		scanf("%d",&satir);
   		printf("sutun sayisi : ");
   		scanf("%d",&sutun);
   
   
   	int matris[satir][sutun];
   	
   	
   	  for(i=0;i<satir;i++){
   	  	
   	  	
   	  	for(j=0;j<sutun;j++){
   	  		
   	  		printf("\n [%d][%d] degeriniz --->",i+1,j+1);
   	  		scanf("%d",&matris[i][j]);
   	  		
			 }
   	  	
   	  	
		 }
	
	
	
	for(k=0;k<satir;k++){
		
		for(n=0;n<sutun;n++){
			
			printf("\n%d",matris[k][n]);
		}
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
