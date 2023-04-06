#include <stdio.h>



int main(){
	
char isim[10];	
char soyisim[10];	
int yas;	
    printf("Lutfen adinizi giriniz :");	
	scanf("%s",&isim);
	printf("Lutfen soyadinizi giriniz :");
	scanf("%s",&soyisim);
	printf("\nLutfen yasinizi giriniz :");
	scanf("%d",&yas);
	
if(yas>=18){
	printf("\nkullanici adiniz sudur:%s\nsoyadiniz sudur:%s",isim,soyisim);
	printf("\nEhliyet alabilirsiniz");
	
}	
	
else	
{
	printf("\nehliyet alamazsiniz");
	}	
	
	
	
	
	
	
	
	return 0;
}
