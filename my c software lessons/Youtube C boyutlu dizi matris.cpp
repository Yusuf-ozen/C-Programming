#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	int matris[2][3]={10,20,30,40,50,60};
		
		printf("%d",matris[1][2]);
	    printf("\n\t%d",matris[0][1]);
	    printf("\n\t\t%d",matris[1][0]);
	    printf("\n %d\n\n\n\n\n",matris[1][1]);
	
	
	int i,j;
	
	   for(i=0;i<2;i++){
	   	
	   	for(j=0;j<3;j++){	
	   		
		   printf("\t%d",matris[i][j]);
		   
		   }
	   	
	   }
	
	
	
	return 0;
}
