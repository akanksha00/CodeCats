//leap
#include <stdio.h>
 int main(){
     int year;
     printf("Enter year:");
     scanf("%d",&year);

     (year%4==0 && year%100!=0)?printf("Leap year"):
        (year%400==0)?printf("Leap year"):printf("Not leap year");
 }