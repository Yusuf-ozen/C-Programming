# include "stdio.h"
# include "stdlib.h"

// scanf
int main(){

    int x1, x2, x3, x4, x5, x6, x7;

    printf("Enter 7 integers : ");
    scanf("%d %i %i %i %o %u %x", &x1, &x2, &x3, &x4, &x5, &x6, &x7);

    printf("displaying on the screen :  \n&d %d %d %d %d %d %d %d", x1, x2, x3, x4, x5, x6, x7);

    printf("\n------------------------------------\n");

    double y1, y2, y3;
    printf("Enter 3 floating point numbers : ");
    scanf("%le%lf%lg", &y1, &y2, &y3);

    printf("displaying on the screen");
    printf("%f\n%f\n%f", y1, y2, y3);

    printf("\n----------------------------------\n");

    char x;
    char y[9];

    printf("Enter a string : ");
    scanf("%c%8s", &x, &y);  // ilki %c'ye kalan 8'i %s'e  

    printf("The character :  '%c' and string :  '%s' \n", x, y);   // 'y' and string : 'usuf' 

    printf("\n---------------------------------\n");

    // Scan set
    char string[20];
    printf("Enter a string :  ");
    scanf("%9[aeiou]", string);   // search for characters  >>> sıraya göre bakar once a'ları yazar >> [farklı sey de olabilir.]
    //sonra eger e yoksa bitirir varsa devam eder.  >>> unluler galiba
    printf("The input  : '%s' \n", string);
    // aaaaaaeeeouuukkks
    // 'aaaaaaeee'

    char string2[20];
    printf("Enter a string :  ");
    scanf("%9[^kld]", string2);

    printf("The input :  '%s' ", string2);  // sadece unsuzler herhalde

    printf("\n---------------------------------\n");

    int z1, z2;
    printf("Enter 8 digit number :  ");
    scanf("%2d%d", &z1, &z2);   //   '12' and '345678'
    printf("The integers :  '%d' and '%d' ", z1, z2);

    // Reading and discarding characters from the input stream
   
    int day = 0, month = 0, year = 0;
    printf("%s", "Enter a date in form mm-dd-yyyy :  ");
    scanf("%d %*c %d %*c %d", &month, &day, &year);
    printf("Month : %d\tDay : %d\tYear : %d\t", month, day, year);

    printf("\n%s", "Enter a date in form mm/dd/yyyy :  ");
    scanf("%d %*c %d %*c %d", &month, &day, &year);
    printf("Month : %d\tDay : %d\tYear : %d\t", month, day, year);
    /*
    Enter a date in form mm-dd-yyyy :  12-12-2012
    Month : 12	Day : 12	Year : 2012	
    Enter a date in form mm/dd/yyyy :  12/20/2012
    Month : 12	Day : 20	Year : 2012	
    */


    return 0;
}