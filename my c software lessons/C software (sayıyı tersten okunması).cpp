#include <stdio.h>

int main(){
	
int sayi,ters;


		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		
		
	while(sayi!=0)    //sayi esit degil 0 ise calistir
{
	
	
	ters=ters*10;
	ters=ters+sayi%10;         // say�%10,say�n�n 10 ile bolumunden kalan� verir.
	sayi=sayi/10;
	
	
}
	
		printf("Girdiginiz sayinin tersi sudur:%d",ters);
	
	return 0;
}
