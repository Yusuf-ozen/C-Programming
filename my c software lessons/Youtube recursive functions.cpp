#include "stdio.h"
#include "math.h"


int usAl(int sayi,int us){
	
	if(us == 1){
		return sayi;
	}
	
	return sayi*usAl(sayi,us-1);
}




int main(){
	
	int sayi,us;
	
		printf("sayi ve ussu giriniz : \n");
		scanf("%d %d",&sayi,&us);
	
	
	printf("sonuc : %d",usAl(sayi,us));
	
	
	return 0;
}
