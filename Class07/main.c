#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

    // Selection Controll structure (If-else) 11.6

    int x = 0;
    double sqroot = 0.0;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x >= 0)
    {
        sqroot = sqrt(x);
        printf("Value of sqroot of  %d is = -=-%1f", x, sqroot);
    }
    else
    {
        printf("invalid number.");
    }
}