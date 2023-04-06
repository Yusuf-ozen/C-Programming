#include <stdio.h>
#include <string.h>

	void sayiSirala(int a,int b){
		
		if(a<b){
			printf("%d>%d",b,a);
		}
		
		else if(b<a){
			printf("%d>%d",a,b);
		}
		
		else{
			printf("%d=%d",a,b);
		}
		
		
		
	}







int main(){
	
	int sayi1;
	int sayi2;
		printf("Lutfen sayi1 i giriniz:");
		scanf("%d",&sayi1);
		printf("Lutfen sayi2 yi giriniz:");
		scanf("%d",&sayi2);
	
	sayiSirala(sayi1,sayi2);
	
	
	
	return 0;
}
