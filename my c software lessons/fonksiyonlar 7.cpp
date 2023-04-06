#include <stdio.h>
#include <string.h>


int sayilarEsitmi(int a,int b){
	
	if(a==b){
		
		return 1;  //dogru bir cıkıstır demek
	}
	else{
			return 0;   //yanlıs bir cıkıs demek
	}
	
	
}

int main(void){
	
	int sayi1;
	int sayi2;
		scanf("%d %d",&sayi1,&sayi2);
		
	bool deger= sayilarEsitmi(sayi1,sayi2);  //dogru ve yanlısın degiskeni booldur.
	
  if(deger){
  	
  	printf("girilen sayilar esittir.");
  }	
	
	else{
		printf("girilen sayilar esit degildir.");
	}
	
	
	
	
	return 0;
}








