#include <stdio.h>
#include <string.h>                //yazdýgýmýz sayýlarý altta tekrar yazdýrýyor.

int main(){
	
	int matris[3][3];
	
	for(int i=0;i<3;i++){
		
		for(int j=0;j<3;j++){
			
			printf("su an %d sutununda bulunuyorsunuz\n %d satirini doldurunuz",i,j);
			scanf("%d",&matris[i][j]);
		}
		
		printf("\n");
		
	}
	
	
	for(int i=0;i<3;i++){
		
		for(int j=0;j<3;j++){
			
			printf("%d\t",matris[i][j]);
		}
		
		printf("\n");
		
	}
	
	
	return 0;
}
