#include <stdio.h>
#include <stdlib.h>


    struct kayit{
    	
char ad[20];
int no;
int sinif;    	
float ort;
    	
	};
    
	struct kayit ogr;
    
    int main(void){
    	
    	
    		printf(" ad soyad : ");
    		scanf("%s",&ogr.ad);
    		printf("no : ");
    		scanf("%d",&ogr.no);
    		printf("sinif : ");
    		scanf("%d",&ogr.sinif);
    		printf("ort : ");
    		scanf("%f",&ogr.ort);
    	
    	printf("\n%s",ogr.ad);
		printf("\n%d",ogr.no);
		printf("\n%d",ogr.sinif);
		printf("\n%f",ogr.ort);	
    	
    	
    	return 0;
	}
