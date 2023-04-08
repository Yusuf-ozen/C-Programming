# include "stdio.h"
# include "stdlib.h"
# include "string.h"



struct Student{
    int ID_no;
    char stud_name[30];
    float mark1, mark2, mark3;

};



    float total_marks1(struct Student A){
        float total1;

        total1 = A.mark1 + A.mark2 + A.mark3;  // >>> buyuk
        //total2 = B.mark1 + B.mark2 + B.mark3;


        return total1;


    }


    float total_marks2(struct Student B){
        float total2;

        total2 = B.mark1 + B.mark2 + B.mark3;


        return total2;


    }





    float average1(struct Student X){

        return total_marks1(X) / 3;
    }

    
    float average2(struct Student Y){

        return total_marks2(Y) / 3;
    }




int main(){

    struct Student student1, student2;

    printf("Enter Record for Student-1\n----------------------------------------------------\n");
    printf("Enter Roll-No     : ");
    scanf("%d", &student1.ID_no);

    printf("\nEnter Name        : ");
    scanf("%s", &student1.stud_name);
    
    printf("\nEnter Marks of subject 1 : ");
    scanf("%f", &student1.mark1);
    
    printf("\nEnter Marks of subject 2 : ");
    scanf("%f", &student1.mark2);
    
    printf("\nEnter Marks of subject 3 : ");
    scanf("%f", &student1.mark3);

    printf("\n---------------------------------\n");
    printf("Enter Record for Student-2\n----------------------------------------------------\n");
    
    printf("Enter Roll-No     : ");
    scanf("%d", &student2.ID_no);

    printf("\nEnter Name        : ");
    scanf("%s", &student2.stud_name);
    
    printf("\nEnter Marks of subject 1 : ");
    scanf("%f", &student2.mark1);
    
    printf("\nEnter Marks of subject 2 : ");
    scanf("%f", &student2.mark2);
    
    printf("\nEnter Marks of subject 3 : ");
    scanf("%f", &student2.mark3);

    printf("\n------------------------------------------\n");
    printf("Records in Descending Order.\n (According to Total-Marks)");
    printf("\n----------------------------------------\n");

    printf("%s\t%s\t%s\t%s", "ROLLNO", "NAME", "TOTAL-MARKS", "AVG");
    printf("\n");

    if (total_marks1(student1) > total_marks1(student1))
    {
        printf("%-10d\t%-10s\t%-10.2f\t%-10.2f", student1.ID_no, student1.stud_name, total_marks1(student1), average1(student1));
        printf("\n");
        printf("%-10d\t%-10s\t%-10.2f\t%-10.2f", student2.ID_no, student2.stud_name, total_marks2(student2), average2(student2));

    }
    

    else
    {
        printf("%d\t%s\t%.2f\t%.2f", student2.ID_no, student2.stud_name, total_marks2(student2), average2(student2));
        printf("\n");
        printf("%d\t%s\t%.2f\t%.2f", student1.ID_no, student1.stud_name, total_marks1(student1), average1(student1));
       

    }
    


    //printf("%s\t%s\t%s\t%s", "ROLLNO", "NAME", "TOTAL-MARKS", "AVG");
    



    return 0;
}

