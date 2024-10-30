#include <stdio.h>

int main()
{

    int name, age;

    printf("Enter your name:");
    scanf("%d", &name);

    age = 13;

    if (age >= 15)
    {

        if (gender == male){
            printf("Welcome Mr %d", name);
        } else if (gender == female){
            printf("Welcome Miss %d", name);
        } else {
            printf("Invalid Gender.");
        }
    }
    else
    {

        printf("Sorry! Mr/Miss %d, you are underage.", name);
    }
}