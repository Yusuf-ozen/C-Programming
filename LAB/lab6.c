# include "stdio.h"
# include "stdlib.h"
# include "string.h"


struct Student
{
    int Roll_Number;
    char Name[20];
    char date[20];
    char admission_date[20];
} ;


int main(){

    printf("Enter Student Details\n--------------------------------\n");
    struct Student first;
    printf("Enter Roll-Number    : ");
    scanf("%d", first.Roll_Number);

    printf("\nEnter Name         : ");
    scanf("%s", first.Name);

    printf("Enter Birth-Date     : ");
    scanf("%s", first.date);
    
    printf("Enter Admission-Date : ");
    scanf("%d", first.Roll_Number);
    
    

    /*
    first.Roll_Number = 1;
    strcpy(first.Name, "Sapna");
    strcpy()

*/

    return 0;
}


