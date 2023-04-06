#include <stdio.h>
#include <string.h>
int main(){
	
char isim[5]="Ali";
int parola=1234;
int bakiye=250;	
int secim;
char istenecekIsim[10];	
int istenecekParola;
int yatirilacakPara;
int cekilecekPara;	
    printf("Bankamatige Hosgeldiniz\nLutfen kullanici adinizi giriniz:");	
	scanf("%s",&istenecekIsim);

	printf("\nLutfen sifrenizi giriniz:");
	scanf("%d",&istenecekParola);
	
	
	
	if(strcmp(isim,istenecekIsim)==0 && istenecekParola==parola)               //burada isim ve istenecekIsim eþitse çalýþtýrýr
	{	
		printf("Kullanici bilgileri eslesmistir\n\n");
		printf("Asagidaki islemlerden birini seciniz.\n[1]-Para yatirma\n[2]-Para cekme\n[3]Kullanici Bilgilerini Gorme\nSeceneklerden birini seciniz:");
		scanf("%d",&secim);
		
		
		
		if(secim==1){
			
		printf("\nPara yatirma islemindesiniz kac para yatirmak istersiniz:");
		scanf("%d",&yatirilacakPara);
		bakiye=bakiye+yatirilacakPara;	      //  bakiye +=yatirilacakPara      seklinde de yazilabilir
		printf("Para yatirma isleminiz basarili\nYatirdiginiz para miktari:%d\nSuan ki bakiyeniz:%d",yatirilacakPara,bakiye);
		}
		
		else if(secim==2){
			
		printf("\nPara cekme islemindesiniz kac para cekmek istersiniz:");	
		scanf("%d",&cekilecekPara);	
		bakiye=bakiye-cekilecekPara;         //  bakiye -=cekilecekPara	seklinde de yazilir
		printf("\nPara cekme isleminiz basarili\nCektiginiz para miktari:%d\nSuan ki bakiyeniz:%d",cekilecekPara,bakiye);	
		}
		
		else if(secim==3)
		{
		printf("Kullanici arayuzune hosgeldiniz\nkullanici adiniz:%s\nkullanici parolaniz:%d\nHesabinizdaki bakiye:%d",istenecekIsim,istenecekParola,bakiye);	
			
		}
		
		
		else{
			printf("Yanlis secim yaptiniz\Lutfen tekrar deneyiniz");
		}
		
		
		
	}
	
	else
	{
		
		printf("Kullanici adi ya da sifre yanlis girilmistir");
	}
	
	
	
	
	
	
	
	
	return 0;
}

