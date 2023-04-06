# include "stdio.h"
# include "stdlib.h"

// c how to program with paul

int main(){

    // stream(akım, akıntı) : verinin kaynağına (genelde birbirinden ayrı bitlere ya da karakterlere) denir.
    // integer conversion specifiers
    // printf

    printf("1 : %d\n", 455);  // Display as a signed decimal integer.
    printf("2 : %i\n", 455);  // Display as a signed decimal integer. i and d specifiers are different when used with scanf.
    printf("3 : %d\n", +455);  // artıyı yazdırmaz.
    printf("4 : %d\n", -455);  // eksiyi yazdırır.
    printf("5 : %i\n", +455);  // artıyı yazdırmaz.
    printf("6 : %i\n", -455);  // eksiyi yazdırır.

    printf("7 : %hd\n", 30000);    // 30000
    printf("8 : %hd\n", +30000);   // 30000
    printf("9 : %hd\n", -30000);   // -30000

    printf("10 : %ld\n", 8000000000L);    // 800000000    L suffix makes literal a long int
    printf("11 : %hd\n", +8000000000L);   // 20480
    printf("12 : %hd\n", -8000000000L);   // -20480

    printf("13 : %o\n", 30000);    // 72460  octal
    printf("14 : %o\n", +30000);    // 72460
    printf("15 : %o\n", -30000);     // 37777705320

    printf("16 : %u\n", 600);   // 600
    printf("17 : %u\n", +600);   // 600
    printf("18 : %u\n", -600);   // 4294966696

    printf("19 : %x\n", 450);   // 1c2        hexadecimal with lowercase letters
    printf("20 : %x\n", +450);   // 1c2
    printf("21 : %x\n", -450);   // fffffe3e

    printf("22 : %X\n", 450);   // 1C2         hexadecimal with lowercase letters
    printf("23 : %X\n", 450);   // 1C2
    printf("24 : %X\n", -450);   // FFFFFE3E

    // floating-point conversion specifiers

    printf("25 : %e\n", 1234567.89);   // 1.234568e+06
    printf("26 : %e\n", +1234567.89);   // 1.234568e+06
    printf("27 : %e\n", -1234567.89);   // -1.234568e+06

    printf("28 : %e\n", 1234567.89);   // 1.234568e+06
    printf("29 : %e\n", +1234567.89);   // 1.234568e+06
    printf("30 : %e\n", -1234567.89);   // -1.234568e+06

    printf("31 : %E\n", 1234567.89);   // 1.234568E+06
    printf("32 : %E\n", +1234567.89);   
    printf("33 : %E\n", -1234567.89);    

    printf("34 : %f\n", 1234567.89);   // 1234567.890000    #six digits to right of decimal point
    printf("35 : %f\n", +1234567.89);   // 1234567.890000
    printf("36 : %f\n", -1234567.89);    // -1234567.890000

    printf("37 : %g\n", 1234567.89);   // 1.23457e+06    // prints with lowercase e
    printf("38 : %g\n", +1234567.89);   // 1.23457e+06
    printf("39 : %g\n", -1234567.89);    // -1.23457e+06

    printf("40 : %G\n", 1234567.89);   // 1.23457E+06    // prints with uppercase e
    printf("41 : %G\n", +1234567.89);   // 1.23457E+06
    printf("42 : %G\n", -1234567.89);    // -1.23457E+06

    printf("\n-----------------------------------------------\n");

    // Using the p and % conversion specifiers
    int num = 12345;
    int *p;
    p = &num;

    printf("The value of p : %p\n", p);         // 0x7ffe84bed79c
    printf("The address of num : %p\n", &num);   // 0x7ffe84bed79c
    printf("The value of p : %p\n", num);    // 0x3039

    printf("\n---------------------------------------------\n");

    // Right justifying

    printf("%5d\n", 1);
    printf("%5d\n", 12);
    printf("%5d\n", 123);
    printf("%5d\n", 1234);
    printf("%5d\n", 12345);

    printf("%5d\n", -1);
    printf("%5d\n", -12);
    printf("%5d\n", -123);
    printf("%5d\n", -1234);
    printf("%5d\n", -12345);

    printf("\n-----------------------------------------\n");

    int i = 897;
    printf("\t%.4d\n\t%.9d\n\n", i , i);
    double k = 897.3452;
    printf("\t%.4f\n\t%.3e\n\t%.3g\n", k , k, k);
    char string[] = "Heelloo Worlllld";
    printf("\t%.12s\n", string);

    printf("\n-----------------------------------------\n");

    printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);  // hello         7         a  1.230000    // right justifying
    // sağa dogru sığdırıyor.
    printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);   // hello     7         a         1.230000   // left justifying
    // soldan baslayıp sıgdirıyor.

    printf("%d\n%d\n", 972, -972);  // 972    -972
    printf("%+d\n%+d\n", 421, -421);  // +421  -421
    printf("% d\n% d\n", 547, -547);   // ikisini de aynı hizadan yazmaya başlar.

    printf("\n--------------------------------------\n");
    
    // # flag
    int a = 2345;
    printf("%#o\n", a);   // 02623
    printf("%#x\n", a);   // 0x593
    printf("%#X\n", a);   // 0x593

    double b = 2345.0;
    printf("\n%g\n", b);  // 2345
    printf("%#g\n", b);   // 2345.00

    printf("\n%09d", 356);    // 000000356 >>> 9 karaktere tamamlar sayının degerini değiştirmeden.
    printf("\n%+09d\n", 356);  // +00000356   >>> "+" ile beraber 9 karaktere tamamlar.


    return 0;
}



