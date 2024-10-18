#include <stdio.h>
#include <conio.h>

int main () {
    
    int x ;
    x = 5;

    printf("Value of x before %d", x);

    x += 2 ; // x = x + 2
    printf("Value of x after a+=2 = %d", x);
    x -= 2 ; // x = x - 2
    printf("Value of x after a-=2 = %d", x);
    x *= 2 ; // x = x * 2
    printf("Value of x after a*=2 = %d", x);
    x /= 2 ;
    printf("Value of x after a/=2 = %d", x);
    x %= 2 ;
    printf("Value of x after a%%=2 = %d", x);

}
