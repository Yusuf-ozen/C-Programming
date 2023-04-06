#include <stdio.h>
#include <string.h>


void hosgeldinizFonksiyonu(){
	
		printf("Bilgi yarismasina hosgeldiniz.Asagidaki kurallari okuyunuz.\n"
		
		"Yarismamiz puan sistemlidir\nLutfen kullanici adinizi dogru giriniz,kayitli degilseniz lutfen uye olunuz."
		);
}



int secimFonksiyonu(){
	int secim;
	
		printf("\nLutfen asagidaki seceneklerden birini seciniz\n[1]-giris yap\n[2]-kayit ol\n");
	    scanf("%d",&secim);
	return secim;
}

int girisFonksiyonu(char isim[200],char sifre[200]){
	
char alinanIsim[200];
char alinanSifre[200];
	bool kontrol=false;
	while(kontrol=false){
		
	
	
	printf("Lutfen adinizi giriniz:");
	scanf("%s",&alinanIsim);
	printf("Lutfen sifrenizi giriniz:");
	scanf("%s",&alinanSifre);
	
	if(strcmp(isim,alinanIsim)==0 && strcmp(sifre,alinanSifre)==0){
		printf("Sisteme Hosgeldiniz");
		kontrol=true;
	}
	
	else{
		printf("hatali giris");
	}
}
	
}




int main(void){
	
	char isim[200]="yusuf";
	char sifre[200]="12345";
	
	hosgeldinizFonksiyonu();
	
int secim=secimFonksiyonu();
	
	if(secim==1){
		
	girisFonksiyonu(isim,sifre);
		
	}
	
	else if(secim==2){
		
	}
	
	
	return 0;
}







