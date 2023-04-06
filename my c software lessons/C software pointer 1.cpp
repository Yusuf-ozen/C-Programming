#include <stdio.h>
#include <string.h>


int main(void){
	
	int sayi1=10;
	int sayi2=20;
	char kelime='a';
	int *pointerBir,*pointerIki;
	pointerBir=&sayi1;
	pointerIki=&sayi2;
	
	*pointerBir+=1;
	int sayi3=*pointerBir + 5;
	printf("%d\n",sayi3);
	
	
	/*
			printf("sayi1 in degeri : %d\nSayi1 in bellekteki adresi : %d\nSayi1 in bellekteki adresi(hektadecimal cinsinden) : %x\n",sayi1,&sayi1,&sayi1);
			printf("\n\n\n");
			printf("sayi2 in degeri : %d\nSayi2 nin bellekteki adresi : %d\nSayi2 nin bellekteki adresi(hektadecimal cinsinden) : %x\n",sayi2,&sayi2,&sayi2);
			printf("\n\n\n");
			printf("kelimenin degeri : %c\nkelimenin bellekteki adresi : %d\nkelimenin bellekteki adresi(hektadecimal cinsinden) : %x\n",kelime,&kelime,&kelime);
			printf("\n\n\n");
			printf("pointerbir in kapladigi alan : %x",&pointerBir);
			printf("\npointerIki nin kapladigi alan : %x",&pointerIki);
	*/
	
	
			printf("sayi1 in degeri : %d\nSayi1 in bellekteki adresi(hektadecimal cinsinden) : %x\n",*pointerBir,pointerBir);
			printf("\n\n\n");
			printf("sayi2 in degeri : %d\nSayi2 nin bellekteki adresi(hektadecimal cinsinden) : %x\n",*pointerIki,pointerIki);
			printf("\n\n\n");
			

	return 0;
}
