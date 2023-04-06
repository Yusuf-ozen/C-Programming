#include <stdio.h>

int main(){
	
	int sayilar[10];
	int girilecekSayi;
	
	
		printf("lutfen kac sayi gireceginizi belirtiniz:");
		scanf("%d",&girilecekSayi);
		
	for(int i=0;i<girilecekSayi;i++){
		printf("\n sayi %d:",i+1);
		scanf("%d",&sayilar[i]);
		
	}
	
	for(int j=0;j<girilecekSayi;j++){
		
		printf("\n %d",sayilar[j]);
	}
	
	
	
	return 0;
}
