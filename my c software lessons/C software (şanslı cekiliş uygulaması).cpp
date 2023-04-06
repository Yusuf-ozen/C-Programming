#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
    char isim[10],soyisim[10];	
	
	int secim;
	int sayi;
	
	printf("Sansli cekilis uygulamamiza hosgeldiniz\nLutfen isminizi giriniz : ");
	scanf("%s",&isim);
	printf("Lutfen soyisminizi giriniz : ");
	scanf("%s",&soyisim);
	printf("\nAsagidaki secimlerden birini yapiniz\n[1]-Sansli cekilis uygulamasini dene\n[2]-kullanici bilgilerinizi kontrol ediniz.");
	printf("\nLutfen birini seciniz");
	scanf("%d",&secim);
	if(secim==1){
		
		printf("Suanda sansli cekilis uygulamasindasiniz lutfen bir ve bes arasinda bir sayi seciniz ");
		scanf("%d",&sayi);
		srand(time(NULL));           //bunun anlami tek bir sayiya baglanma demektir.
		int randomSayi=1+rand()%5;    //bu birden beþe kadarki sayilardan birini sec demektir.
		
		if(sayi=randomSayi){
		printf("Girdiginiz sayi:%d\nCekilisteki sayi:%d",sayi,randomSayi);	
		printf("\nKAZANDINIZ");	
		}
		
		else
		{
			printf("Girdiginiz sayi:%d\nCekilisteki sayi:%d",sayi,randomSayi);	
			printf("\nBir daha dene");
		}
		
		
		
		
		
	}
	
	else if(secim==2){
		printf("Kullanici adiniz : %s\nkullanici soyadiniz : %s",isim,soyisim);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}























