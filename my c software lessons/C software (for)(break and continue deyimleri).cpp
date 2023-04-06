#include <stdio.h>

int main(){
	
	for(int i=0;i<10;i++){
		
		if(i%2==0){                                                 // bu ise cift sayilari yazma demektir.
	       continue;                                               //	break;   5 sonrasini durduruyor.
		}                                                          //   continue; 5 hariç digerlerini alir.
		
		printf("%d",i);
		
		
	}
	
	
	
	
	
	
	return 0;
}
