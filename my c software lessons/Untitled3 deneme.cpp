#include <stdio.h>
#include <string.h>


int main(){
	
	char kelimeler[20];
	
	
	int *pointerKelimeler;
	
	pointerKelimeler=&kelimeler;
	
		printf("%x",pointerKelimeler);
	
	
	return 0;
}
