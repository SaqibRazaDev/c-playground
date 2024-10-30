// Problem 11.13

#include <stdio.h>

int main (){



    float radius, area, circumference;

    printf("Enter Radius of the Circle: ");
    scanf("%f", &radius);

    const float pi = 3.14 ;

    area = pi * radius * radius ;
    circumference = 2 * pi * radius ;

    int choice ;
    printf("Enter 1 for Radius, 2 for circumference and 3 for both.");

    scanf("%d", &choice);

    if (choice == 1){
        printf("Radius of Circle = %f", radius);
        printf("Area of Circle = %f", area);
    }else if (choice == 2){
        printf("Radius of Circle = %f", radius);
        printf("Circumference of Circle = %f", circumference);
    }else if (choice == 3){
        printf("Radius of Circle = %f", radius);
        printf("Area of Circle = %f", area);
        printf("Circumference of Circle = %f", circumference);
    }else{
        printf("Invalid Choice.");
    }
}