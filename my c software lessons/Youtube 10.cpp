#include <stdio.h>
#include <stdlib.h>



int kupbul(int sayi){
	
	int sonuc=sayi*sayi*sayi;
	return sonuc;
}


int main(){
	
   int s;
   		printf("enter a number : ");
   	    scanf("%d",&s);
   	    
   	    kupbul(s);
   	    	printf("sonucumuz : %d",kupbul(s));
	
	
	
	
	return 0;
}







