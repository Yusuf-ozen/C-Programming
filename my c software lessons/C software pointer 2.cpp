#include <stdio.h>
#include <string.h>


int main(){
	
	int soru;
	
		printf("Gireceginiz sayi miktarini belirtiniz : ");
		scanf("%d",&soru);
		
	int sayilar[soru];

int i=0;
	
	for(i=0;i<soru;i++){
		
		printf("Lutfen sayi %d giriniz : ",i+1);
		scanf("%d",&sayilar[i]);
	
	}
	
	int *pointer;
	
	for(i=0;i<soru;i++){
		
		pointer=&sayilar[i];
		
		printf("\nSayi %d nin bellekteki adresi %x\n",sayilar[i],pointer);
		
		
		
	}
	
		
		
		
	return 0;
}
