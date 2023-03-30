# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// union : structlarla aynı şekilde kulanılır sadece bellekte tuttukları yer farklı. Unionda en buyuk olana gore bellekte bir arada tutulurlar.

union variables{

    int a;
    float b; 
    char c[10];

};

int main(){

    union variables letters;

    letters.a = 3;
    printf("\n%d", letters.a);
    letters.b = 34.567;
    printf("\n%.2f", letters.b);
    strcpy(letters.c, "abc");
    printf("\n%s", letters.c);
    printf("\nmemory values of union : %d", sizeof(letters));



/*
    letters.a = 3;
    letters.b = 34.567;
    strcpy(letters.c, "abc");
    printf("%s%d\n%s%.2f\n%s%s", "first variables : ", letters.a, "Second variables : ", letters.b,"third variables : ", letters.c);
*/
    printf("\n-----------------------------------------------\n");

struct Car
{
    int sold;

    union Car_sell
    {
        int price;
        char brand[20];

    };
    
    
};

/*
    struct Car car_A;
    car_A.sold = 0;
    
    union Car_sell new;
    strcpy(new.brand, "Anadol");


    printf("the car was not sold : (%s)\nsell situation : %d", new.brand, car_A.sold);
    */

    printf("\n----------------------------------------\n");

    struct Car car_A;
    car_A.sold = 1;

    union Car_sell new;
    //strcpy(new.brand, "Anadol");
    new.price = 20000;

    printf("the car was sold : \nsell situation : %d\nprice : %d", car_A.sold, new.price);

    return 0;
}