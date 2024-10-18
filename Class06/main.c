#include <stdio.h>
#include <conio.h>

int main()
{

    // Selection Controll structure (If)

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Marks are: %d", marks);

    if (marks >= 40){
        printf("You have passed the exam.");
    } else {
        printf("You are failed.");
    }

    
}