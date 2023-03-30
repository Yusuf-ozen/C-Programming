# include <stdio.h>
# include <stdlib.h>
#include <string.h>


    // enumerations are uniform symbolic lists
    // 0, 1, 2 diye devam eder.
    enum colors{

        yellow,
        purple,
        pink,
        green, 
        blue
        
    };


    typedef enum colors2{
        black,
        brown, 
        white,
        orange
    } color;



    typedef enum {
        january = 1,  // before first value was 0
        february, 
        march, 
        april, 
        may,
        june,
        july,
        august, 
        september,
        october, 
        november, 
        december
    } year;

    // month fucntion
    void show_month(year function_months){

        printf("Chosen Month : %d", function_months);
    }

int main(){

    enum colors rainbow = yellow;
    printf("%d\n", rainbow);  // return 0 because yellow index is 0;
    /*
    enum colors rainbow = green;
    printf("%d", rainbow);   // return 3
    */

    color new = white;
    printf("%d", new);  // return 2

    printf("\n-------------------------------------\n");

    year months = october;

    show_month(months);

    return 0;
}



