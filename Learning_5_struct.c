# include "stdio.h"
# include "stdlib.h"
# include "string.h"


// struct : they’re constructed using objects of other types




 typedef struct // Five_point
    {
        char name[20];
        float p1, p2;
    } Five_point;



struct Car
    {
            int model;
            char color[15];
            int km;
        
    }; 

    struct Student
    {
        char name[10];
        char surname[10];
        int age;
    };


    // point struct
    struct point{

        float x;
        float y;
    };
    

    // Void function of 5 points
    void display(Five_point calc[], int number){

        for (int i = 0; i < number; i++)
        {
            printf("\n%s : %.2f, %.2f", calc[i].name, calc[i].p1, calc[i].p2);
        }
        

    }

    


int main(){

    struct Car Honda;
    Honda.model = 2020;
    strcpy(Honda.color, "Purple");
    Honda.km = 30000;

    printf("%s%d\n%s%s\n%s%d", "model year : ", Honda.model, "Car color : ", Honda.color, "Car km : ", Honda.km);

    struct Student yusuf = {"yusuf", "Ozen", 20};

    printf("\n%s%s\n%s%s\n%s%d", "name : ", yusuf.name, "Surname : ", yusuf.surname, "Age : ", yusuf.age);

/*
    struct Date{
        int day;
        char month[15];
        int year
    };

*/
    printf("\n--------------------------------------------\n");

    struct Student_information
    {
        int school_number;
        char name[20];
        char department[50];
        int age;
    }; 
    struct Student_information Student_1, Student2;

    Student_1.school_number = 201950;
    strcpy(Student_1.name, "Yusuf ÖZEN");  // use for string
    strcpy(Student_1.department, "Electrical and Electronics Engineering");
    Student_1.age = 22;

    Student2 = Student_1;

    printf("%s%d\n%s%s\n%s%s\n%s%d", "School Number : ", Student2.school_number, "Name : ", Student2.name, "Department : ", Student2.department, "Age : ", Student2.age); 

    printf("\n----------------------------------------------------------\n");

    struct point operation;
    operation.x = 3;
    operation.y = 2;
    printf("%s%.2f\n%s%.2f", "X : ", operation.x, "Y : ", operation.y);

    printf("\n---------------------------------------------\n");


    typedef struct point_2
    {
        float X;
        float Y;
    } point_2;
    // point 


    // struct point_2 operation_2 olması gerekirken typedef kullandığımız için gerek kalmadı. 
    point_2 operation_2;
    operation_2.X = 2.345;
    operation_2.Y = 3.789;

    printf("%s%.2f\n%s%.2f", "typedef X : ", operation_2.X, "typedef Y : ", operation_2.Y);
    
    printf("\n---------------------------------------------------\n");

   

    Five_point result[5] = {{"point1", 4, 5}, {"point2", 6, 7}, {"point3", 8, 9}, {"point4", 3, 5}, {"point5", 6, 8}};  // variable
    
    display(result, 5);  // void function


    return 0;
}


