#include <stdio.h>
#include <string.h>

int tekCift(int b){
	
	if(b%2==0){
		printf("a degeri cift sayidir.");
	}
	
	else{
		printf("a degeri tek sayidir.");
	}
	
	
}

int main(){
	
	int a;
		printf("lutfen bir a degeri giriniz:");
		scanf("%d",&a);
	
	tekCift(a);    //yukar�ya hangi say�y� g�ndermek istiyorsan onu buraya yaz.
	
	
	return 0;
}
