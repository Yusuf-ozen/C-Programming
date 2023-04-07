#include <stdio.h>



int main(void){
	
	int dizi[100];
	int i,sayi;
	int ort;
	
		printf("Eleman sayisi : ");
		scanf("%d",&sayi);
		
	for(i=0;i<sayi;i++){
		
		printf("Dizinin %d. degerini giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	printf("\n\n");
	
	
	for(i=0;i<sayi;i++){
		
		printf("\n %d",dizi[i]);
		
	}
	

	
	return 0;
}
