#include <stdio.h>

int main(){
	
int girilecekSayi;	
    printf("Lutfen hesaplanmasini istediginiz sayiyi giriniz:");
	scanf("%d",&girilecekSayi);
	int i=1;
	int faktoriyel=1;
	
	while(i<=girilecekSayi){
	faktoriyel=faktoriyel*i;	
	i++;	
		
	}	
	
	printf("sonuc sudur:%d",faktoriyel);
	
	
	
	return 0;
}
