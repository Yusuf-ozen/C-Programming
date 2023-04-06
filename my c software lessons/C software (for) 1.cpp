#include <stdio.h>

int main(){
	
int i;
int sayi;
int ciftSayiToplam=0;
int tekSayiToplam=0; 

		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);

for(i=0;i<=sayi;i++){
	
	
	if(i%2==0){
		
		
		ciftSayiToplam=ciftSayiToplam+i;
	}
	
	
	else{
		tekSayiToplam+=i;
	}
	
}	
	printf("Girdiginiz sayiya kadarki olan cift sayilarin toplami sudur:%d",ciftSayiToplam);
	printf("\nGirdiginiz sayiya kadarki olan tek sayilarin toplami sudur:%d",tekSayiToplam);
	
	return 0;
}
