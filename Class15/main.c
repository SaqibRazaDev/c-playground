#include <stdio.h>

int main (){

    int dayNo ;

    printf("Enter number of a weekday.");
    scanf("%d", &dayNo);

    switch (dayNo)
    {
        case 1:
        printf("Friday");
        break;
    
        case 2:
        printf("Saturday");
        break;

        case 3:
        printf("Sunday");
        break;
    
        case 4:
        printf("Monday");
        break;
    
        case 5:
        printf("Tuesday");
        break;
    
        case 6:
        printf("Wednesday");
        break;
    
        case 7:
        printf("Thursday");
        break;

        default:
        printf("Invalid Number");
    }







    // if (dayNo == 1){
    //     printf("Friday");
    // } else if (dayNo == 2){
    //     printf("Sat");
    // } else if (dayNo == 3){
    //     printf("Sun");
    // } else if (dayNo == 4){
    //     printf("Mon");
    // }else if (dayNo == 5){
    //     printf("Tue");
    // }else if (dayNo == 6){
    //     printf("Wed");
    // }else if (dayNo == 7){
    //     printf("Thu");
    // } else{
    //     printf("Invalid DayNo");
    // }
}