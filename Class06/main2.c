#include <stdio.h>
#include <conio.h>

int main()
{

    // Selection Controll structure (If)
    int firstNum, secondNum, thirdNum, max;

    printf("Enter First Number:");
    scanf("%d", &firstNum);
    printf("Enter 2nd Number:");
    scanf("%d", &secondNum);
    printf("Enter 3rd Number:");
    scanf("%d", &thirdNum);

    max = firstNum;

    if (secondNum > max)
    max = secondNum;

    if (thirdNum > max)
    max = thirdNum ;

    printf("Max Number is: %d", max);
}0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000