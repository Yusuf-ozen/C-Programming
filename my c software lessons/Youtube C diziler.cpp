#include <stdio.h>

int main(){
	
	
	int sayilar[]={10,20,30,40,50,60,70};
	int i;
	int toplam=0;
	
	for(i=0;i<7;i++){
		
		printf("%d\n",sayilar[i]);
	toplam=toplam+sayilar[i];
		
	}
	printf("sonuc=%d",toplam);
	
	return 0;
}
