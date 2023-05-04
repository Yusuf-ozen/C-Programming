// File Processing
// File yapısı file pointer olarak adlandırılır.
// File *dosya; şeklinde tanımlanır.
// fopen() ve fclose() dosya acma kapatma için kullanılır.

/* Modes:
    r = ReadOnly >> dosyanın açılması için önceden olusturulmalıdır.
    w = WriteOnly >> Dosya kayıtlı olsa da yeniden oluşturulur.
    a = append >> Kayıtlı bir dosyanın sonuna veri 
    r+ = read and write >> açılmış olan bir dosyanın önceden olması gerekir.
    w+ = read and write >> dosya olsa olmasa yeniden oluşturulur.
    a+ = read abd write >> kayıtlı bir dosyanın sonuna veri eklenir. 
*/

/* Functions:
    fgetc() >> dosyaya bir karakter veri okur.
    fgets() >> dosyaya bir karakter dizi okur.
    fread() >> dosyaya bir kayıt diziyi veya karakteri ikili olarak okur.
    fscanf() >> dosyadaki verileri biçimlendirerek okur. 
*/

// feof() >> dosyanın sonunu denetlemek için kullanılır.
// fputs() >> dosyaya bir karakter dizisi kaydeder.
// fprintf() >> dosyaya biçimlendirilmiş veri kaydetmek için kullanılır.


# include "stdio.h"
# include "stdlib.h"

int main(){

    FILE *dosya;
    dosya = fopen("yusuf.txt", "w");
    fclose(dosya);

//******************************************//

    FILE *dosya1;
    char name[] = "Yusuf";
    dosya1 = fopen("yusuf1.txt", "w");
    fprintf(dosya1, "Dosya : %s ", name);  // artık yusuf1.txt dosyasında "Dosya : Yusuf" yazılı olacak.
    fclose(dosya1);


//*****************************************//

    FILE *dosya2;
    dosya2 = fopen("Carpim_Tablosu", "w");

    for (int i = 1; i <= 10; i++)
    {
        fprintf(dosya2, "\n%d Carpma", i);
        for (int j = 1; j <= 10; j++)
        {
            fprintf(dosya2, "%d * %d = %d\n", i, j, i * j);
        }
        
    }
    
    fclose(dosya2);


//****************************************//

    FILE *dosya3;
    dosya3 = fopen("ogrenci.txt", "w");
    char name[20], okul[20], bolum[20];

    printf("\nAdiniz : "); 
    gets(name);    // scanf kullanırsan bosluktan sonraki stringleri almaz.
    //scanf("%s", &name);
    printf("\nOkulunuz : ");
    gets(okul);
    //scanf("%s", &okul);
    printf("\nBolumunuz : ");
    gets(bolum);
    //scanf("%s", &bolum);

    fprintf(dosya3, "Ogrencinin:\nAdi : %s\nOkulu : %s\nBolumu : %s", name, okul, bolum);
    fclose(dosya3);

    // yeni bilgiler girmek için "w" yerine "a" kullanılır. "w" kullanıldıktan sonra kayıtlı bir bilgi zaten var tekrar kullanılırsa 
    // kayıtlı olanı silip yenisini koyar.

    //***************************************//

    FILE *dosya4;
    dosya4 = fopen("merhaba.txt", "w");  // "a" kullanıldıgında yeni kayıt ekler.
    fputs("Hello World", dosya4); // karakter dizisini direkt dosyaya kaydeder.
    fclose(dosya4);


    return 0;
}


