#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("----------------------------------\n");
    // strtod
    // converts a sequence of characters representing a floating-point
    // value to double.
    const char *number = "37.3% is : "; // initialize string
    // const char* is a mutable pointer to an immutable character/string. You cannot 
    // change the contents of the location(s) this pointer points to.
    char *numberPtr; // create char pointer

    double d = strtod(number, &numberPtr);
    printf("%s\n", number);
    printf("double value : %.3f", d);

    printf("\n----------------------------------");

    // Example
    char array[20] = "45.7$yusuf";
    char *arrayPtr;
    double result;

    result = strtod(array, &arrayPtr);
    printf("\nBefore : %s\nAfter : %.2f", array, result);
    printf("\nString : %s", arrayPtr);

    printf("\n----------------------------------");

    // strtol
    // converts to long int a sequence of characters representing an integer
    const char *new_string = "384782Yusuf?";
    char *new_stringPtr;
    int base = 0;

    long result2 = strtol(new_string, &new_stringPtr, base);

    printf("\nBefore : %s\nAfter : %ld\nString : %s", new_string, result2, new_stringPtr);

    printf("\n----------------------------------");

    // strtoul
    // converts to unsigned long int a sequence of characters representing an unsigned long int value.
    char new_string2[] = "-64444983X)@";
    char *new_string2Ptr;
    int base2 = 10;   // between 2 and 36, also 0

    unsigned long long result3 = strtoul(new_string2, &new_string2Ptr, base2);

    printf("\nBefore : %s\nAfter : %ld\nString : %s", new_string2, result3, new_string2Ptr);


        return 0;
}
