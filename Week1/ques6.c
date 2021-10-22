//input day number & print weekday
#include<stdio.h>
int main(){
    char ch;
    printf("Enter day no.(0-6): ");
    scanf("%c",&ch);
    switch(ch){
        case '1': printf("Monday");
                    break;
        case '2': printf("Tuesday");
                    break;
        case '3': printf("Wednesday");
                    break;
        case '4': printf("Thursday");
                    break;
        case '5': printf("Friday");
                    break;
        case '6': printf("Saturday");
                    break;
        case '0': printf("Sunday");
                    break;
        default: printf("Invalid Input");
                    break;
    }
}