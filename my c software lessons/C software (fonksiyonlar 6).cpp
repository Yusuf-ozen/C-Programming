#include <stdio.h>
#include <string.h>


int sayiTopla(int a,int b){
	
	int toplam=a+b;
	return toplam;
}





int main(){
	
	int sayi1;
	int sayi2;
	printf("iki sayi giriniz:");
	scanf("%d %d",&sayi1,&sayi2);
	
	int cevap=sayiTopla(sayi1,sayi2);
	
printf("%d",sayiTopla(sayi1,sayi2));
//printf("%d",cevap);	
	
	
	return 0;
}
