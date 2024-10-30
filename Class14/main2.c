#include <stdio.h>
#include <conio.h>

int main()
{

    char a;

    printf("Enter a Character:");
    scanf("%c", &a);

    if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u')
    {
        printf("%c is a Vowel", a);
    }
    else
    {
        printf("%c is not a Vowel", a);
    }
}