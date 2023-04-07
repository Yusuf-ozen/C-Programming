#include <stdio.h>
#include <stdlib.h>




int main(void){
	
	
	int sayi = 10;
	int *s = &sayi;
	
		//sayiyi ekrana yazdirma
		printf("Deger : %d",sayi);
		
		//adresi ekrana yazdirma
	    printf("\n%x\n\n\n",s);
	
	char harf = 'a';
	char *h = &harf;
	
	//harfi ekrana yazdýrma
	printf("Harf : %c\n",harf);
	
	//adresi ekrana yazdýrma
	printf("%x\n",h);
	return 0;
}



