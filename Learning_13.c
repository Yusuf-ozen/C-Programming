# include "stdio.h"
# include "stdlib.h"

int main(){

    FILE *dosya;
    char karakter;
    dosya = fopen("merhaba.txt", "r");
    if (dosya != NULL)
    {
        karakter = fgetc(dosya);   // tek karakteri alır ve okur.
        printf("Dosyadaki ilk karakter '%c' dir.", karakter);
    }
    
    else
    {
        printf("Dosya bos!");
    }

    fclose(dosya);

    //************************************//

    FILE *dosya2;
    //dosya2 = fopen("yeni.txt", "r"); // yeni.txt adında dosyo olması lazım.
    char karakter1[10], karakter2[10];
    int sayi;

    if((dosya2 = fopen("yeni.txt", "r")) != NULL){

        fscanf(dosya2, "%s", &karakter1);
        fscanf(dosya2, "%s", &karakter2);
        fscanf(dosya2, "%d", &sayi);

        printf("%s %s %d", karakter1, karakter2, sayi);
    }


    else
    {
        printf("dosya bos!!");
    }

    fclose(dosya2);

    //********************************************//

    FILE *dosya3;
    char kelime[40][30];
    int count;

    if((dosya3 = fopen("dizi.txt", "r")) != NULL){

        while (!feof(dosya3))    // dosya bitene kadar
        {

            fscanf(dosya3, "%s", kelime[count]);
            printf("%s", kelime[count]);
            count ++;

        }
        
    }




    else
    {
        printf("Dosya Bos!!");
    }
    
    fclose(dosya3);
    


    return 0;
}



