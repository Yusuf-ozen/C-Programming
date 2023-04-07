#include <stdio.h>
#include <stdlib.h>



int main(void){
	
	
	int sayi=10;
	int sayi2=20;
	double sayi3=3.25;
	char kelime='a';
	
		printf("%d\n",sayi);
		printf("%d\n",sayi2);
		printf("%.2f\n",sayi3);
		printf("%c\n",kelime);
	
		printf("\n\n  bellekteki adresleri \n\n");
		
		
		printf("%x\n",&sayi);
		printf("%x\n",&sayi2);
		printf("%x\n",&sayi3);
		printf("%x",&kelime);
	
	return 0;
}
