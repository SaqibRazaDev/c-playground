#include <stdio.h>
#include <conio.h>

void main (){


    int salary ;
    float newSalary;


    printf("Enter your salary: ");
    scanf("%d", &salary);

    if (salary >= 20000){
        newSalary = salary - (salary * 7/100);
    } else if (salary >= 10000){
        newSalary = salary - 1000 ;
    } else {
        newSalary = salary ;
    }

    printf("New Salary is = %f",newSalary);

    getch();



}