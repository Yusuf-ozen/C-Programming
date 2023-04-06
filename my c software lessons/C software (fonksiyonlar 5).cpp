#include <stdio.h>
#include <string.h>


int usHesaplama(int a,int b){
	int cevap=2;
	
	
	for(int i=0;i<b;i++){
	
	cevap*=a;
	
	}
	
	printf("sayinin kuvveti :%d",cevap);
	
}








int main(void){
	
	int sayi;
	int us;
	
		printf("lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		printf("lutfen kacinci kuvvetini alacaginizi yaziniz:");
	    scanf("%d",&us);
	
	usHesaplama(sayi,us);
	
	return 0;
}
