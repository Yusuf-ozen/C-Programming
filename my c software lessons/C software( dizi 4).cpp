#include <stdio.h>
#include <string.h>

int main(){
	
	
	
	char isim[50];
	char sifre[50];
	char isimVeri[]={"yusuf"};
	char sifreVeri[]={"12345"};
	
		printf("please enter your name:");
		scanf("%s",&isim);
		printf("please enter your password:");
		scanf("%s",&sifre);
		
		
		    if(strcmp(isim,isimVeri)==0 && strcmp(sifre,sifreVeri)==0){
		    	
		    	printf("you are true");
		    	
			}
	
	else{
		printf("you are false");
	}
	
	
	return 0;
}
