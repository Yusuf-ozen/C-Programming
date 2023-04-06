#include <stdio.h>

int main(){
	
int sayi,toplam=0,kalan;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);
    
    
    
    
    
    while(sayi!=0){              //  burada sýfýra esit degilse diyor.
    	
    	kalan=sayi%10;           //kalan 10 ile bolumden 
    	toplam=toplam+kalan;
    	sayi=sayi/10;
    	
	}
	
	printf("\nBasamaklar toplami:%d",toplam);
	
	
	
	
	return 0;
}
