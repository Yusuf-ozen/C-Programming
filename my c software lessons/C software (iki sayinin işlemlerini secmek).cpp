#include <stdio.h>

int main(){
	
int alinacakSayi1,alinacakSayi2,secim;	
   printf("Birinci sayiyi giriniz :");	
   scanf("%d",&alinacakSayi1);	
   printf("Ikinci sayiyi giriniz :");	
   scanf("%d",&alinacakSayi2);
   
   
   printf("Asagidakilerden birini seciniz\n[1]-Toplama Islemi\n[2]-Cikarma Islemi\n[3]-Carpma Islemi\n[4]-Bolme Islemi");
	printf("Lutfen bir secim yapiniz");
	scanf("%d",&secim);
	
	switch(secim){
		
		case 1:printf("Birinci durumu sectiniz.\nGirdiginiz sayilarin toplami sudur : %d",alinacakSayi1+alinacakSayi2);break;
		case 2:printf("Ikinci durumu sectiniz.\nGirdiginiz sayilarin cikarimi sudur : %d",alinacakSayi1-alinacakSayi2);break;
		case 3:printf("Ucuncu durumu sectiniz.\nGirdiginiz sayilarin carpimi sudur : %d",alinacakSayi1*alinacakSayi2);break;
		case 4:printf("Dorduncu durumu sectiniz.\nGirdiginiz sayilarin bolumu sudur : %d",alinacakSayi1/alinacakSayi2);break;
		default:printf("Girdiginiz seyler hatalidir tekrar deneyin");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}


