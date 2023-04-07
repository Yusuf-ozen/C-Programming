/*
      Student Name : Yusuf ÖZEN
      Student ID : 2019502094
      Description : EED 1005 PRELIMINARY  WORK #8
      Date : 31.12.2020
*/

// TASK 1     CONSÝDER A 3-BY-2  INTEGER ARRAY T                        

/*

a-)int t[3][2]
b-)t have 3 rows
c-)t have 2 columns
d-)t have 6 elements
e-)[2][0] and [2][1] are the elements in the third row
f-)t[0][0] = {0},  t[0][1] = {0}, t[1][0] = {0}, t[1][1] = {0}, t[2][0] = {0}, t[2][1] = {0}

*/

//TASK 2     CALCULATE THE AVERAGE OF THE AGES


#include <stdio.h>

int main()
{
    int n, i , age[100], sum = 0, average;         //defining the variable  for n ,i ,num ,sum ,average
   

    printf("Enter the amount of the ages : ");     //asking the user for the amount of the ages
    scanf("%d", &n);         //read the amount of the number


    for(i = 0; i < n; ++i)        // initialization, iteration condition, and increment
    {
        printf(" Enter the %d. ages : ", i+1);      //displaying ages on the screen
        scanf("%d", &age[i]);        // read num
        sum = sum + age[i];       //calculate the sum
    }                             

    average = sum / n;              //calculate the average
    printf("Average : %d", average);      //displaying average on the screen

    return 0;             //successful program termination
}
