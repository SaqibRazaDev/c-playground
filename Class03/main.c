#include <stdio.h>

int main()
{
    // Increment Operator

    int a = 5;

    printf("Value of a is %d", a);

    // Prefix
    ++a;
    // Postfix
    a++;

    printf("Value of a after operator is %d", a);

    // Decrement Operator

    int b = 10;

    printf("Value of b is %d", b);

    --b;

    printf("Value of b after operator is %d", b);

    int sum = a + b;
    printf("Value of Sum is %d", sum);
}