#include <stdio.h>
#include <stdlib.h>






int main(void){
	
	
	char harf = 'k';
	char *pt = &harf;
	
		printf("adres : %x",pt);
	    pt++;
	
		printf("\nadres2 : %x\n",pt);
		pt--;
		
		printf("adres3 : %x\n",pt);
		pt = pt + 5;
		
		printf("adres4 : %x",pt);
	return 0;
}
