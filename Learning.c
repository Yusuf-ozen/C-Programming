# include "stdio.h"
# include "string.h"
#include "ctype.h"
int main(){

    char name[] = "yusuf";  // creates a 5-element array
    // name containing the characters 'y', 'u', 's', 'u', 'f' and '\0'.
    
    const char *namePtr = "yusuf";
    // create pointer variable namePtr that points 
    // to the string "yusuf" somewhere in read-only memory


    // The preceding array definition could also have been written
    char color[] = {'y', 'u', 's', 'u', 'f', '\0'};

    // char word[20];

    //#####################################################

    // printf("enter a word : ");
    
    //stores a string in character array word[20]:
    //scanf("%19s", word);


    // FUNCTIONS
    // isdigit()
    printf("%s \n%s%s \n%s%s \n%s%s \n\n", "According to isdigit : ", 
    isdigit('8') ? "8 is a " : "8 is not a ", "digit",
    isdigit('a') ? "a is a " : "a is not a ", "digit",
    isdigit('#') ? "# is a " : "# is not a ", "digit");
    
    // isalpha()
    printf("%s \n%s%s \n%s%s \n%s%s \n%s%s \n\n", "According to isalpha : ",
    isalpha('A') ? "A is a " : "A is not a ", "letter",
    isalpha('a') ? "a is a " : "a is not a ", "letter",    
    isalpha('9') ? "9 is a " : "9 is not a ", "letter",
    isalpha('?') ? "? is a " : "? is not a ", "letter");

    // isalnum()
    printf("%s \n%s%s \n%s%s \n%s%s \n%s%s \n\n", "According to isalnum : ",
    isalnum('Y') ? "Y is a " : "Y is not a ", "digit or letter",
    isalnum('b') ? "b is a " : "A is not a ", "digit or letter",
    isalnum('7') ? "7 is a " : "7 is not a ", "digit or letter",    
    isalnum('#') ? "# is a " : "? is not a ", "digit or letter");

    // isxdigit()
    printf("%s \n%s%s \n%s%s \n%s%s \n%s%s \n%s%s \n\n", "According to isxdigit : ",
    isxdigit('Y') ? "Y is a " : "Y is not a ", "hexadecimal",
    isxdigit('f') ? "f is a " : "f is not a ", "hexadecimal",
    isxdigit('F') ? "F is a " : "F is not a ", "hexadecimal",
    isxdigit('4') ? "4 is a " : "4 is not a ", "hexadecimal",
    isxdigit('@') ? "@ is a " : "@ is not a ", "hexadecimal"
    );

    // islower()
    printf("%s \n%s%s \n%s%s \n%s%s \n%s%s \n\n", "According to islower : ",
    islower('Y') ? "Y is a " : "Y is not a ", "lower case",
    islower('y') ? "y is a " : "y is not a ", "lower case",
    islower('8') ? "8 is a " : "8 is not a ", "lower case",
    islower('*') ? "* is a " : "* is not a ", "lower case"
    );

    // isupper()
    printf("%s \n%s%s \n%s%s \n%s%s \n%s%s \n\n", "According to islower : ",
    isupper('Y') ? "Y is a " : "Y is not a ", "upper case",
    isupper('y') ? "y is a " : "y is not a ", "upper case",
    isupper('8') ? "8 is a " : "8 is not a ", "upper case",
    isupper('*') ? "* is a " : "* is not a ", "upper case"
    );

    // tolower
    printf("%s%c \n%s%c \n\n",
    "Y with tolower : ", tolower('Y'),
    "y with tolower : ", tolower('y')
    );

    // toupper
    printf("%s%c \n%s%c \n\n",
    "Y with tolower : ", toupper('Y'),
    "y with tolower : ", toupper('y')
    );




    







    return 0;
}
