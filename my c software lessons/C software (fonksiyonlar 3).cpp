#include <stdio.h>
#include <string.h>

int sayiToplami(int a,int b){
	
	int toplam=a+b;
	printf("toplamlari:%d",toplam);
}

int sayiCikarimi(int a,int b){
	int cikarim;
	if(a>b){
		cikarim=a-b;
	}
	
	else if(b>a){
		cikarim=b-a;
	}
	else{
		cikarim=0;
	}
	printf("\ncikarimlari :%d",cikarim);
}




int main(){
	
	int sayi1;
	int sayi2;
	
		printf("Lutfen sayi1 i giriniz:");
		scanf("%d",&sayi1);
		printf("Lutfen sayi2 yi giriniz:");
	    scanf("%d",&sayi2);
	
	sayiToplami(sayi1,sayi2);
	sayiCikarimi(sayi1,sayi2);
	return 0;
}
