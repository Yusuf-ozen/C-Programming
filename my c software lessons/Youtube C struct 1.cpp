#include <stdio.h>
#include <stdlib.h>


    struct kitapBilgi{
    	
    
    	char kitapAd[20];
    	char yazar[20];
        int fiyat;    
		float puan;
    	
    	
	};


int main(void){
	
	
	struct kitapBilgi kb={"insannedir", "twain", 15, 35.56};
	
		printf("kitap ad : %s\n",kb.kitapAd);
		printf("yazar : %s\n",kb.yazar);
		printf("fiyat : %d\n",kb.fiyat);
		printf("puan : %.2f",kb.puan);
	
	return 0;
}
