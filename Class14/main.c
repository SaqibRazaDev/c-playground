#include <stdio.h>
#include <conio.h>

int main (){

    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("%d is the Max Number.", a);
    } else if(b > a && b > c){
        printf("%d is the Max Number.", b);
    } else {
        printf("%d is the Max Number.", c);
    }
}