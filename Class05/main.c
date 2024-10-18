#include <stdio.h>
#include <conio.h>

int main()
{

    // Selection Controll structure
    int a, b;
    
    printf("Enter number a: ");
    scanf("%d", &a);
    
    printf("Enter number b: ");
    scanf("%d", &b);
    
    if (a * a == b){
        printf("b is square of a");
    }
}