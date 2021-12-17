#include<stdio.h>

int main()
{
    int num1,num2;
    int *a,*b,*temp;

    printf("Enter 1st number : ");
    scanf("%d",&num1);
    printf("\nEnter 2nd number : ");
    scanf("%d",&num2);

    a=&num1;
    b=&num2;

    printf("\nBefore Swapping :\ta = %d\tb = %d\n",*a,*b);

    temp=a;
    a=b;
    b=temp;

    printf("\nAfter Swapping :\ta = %d\tb = %d\n",*a,*b);

    return 0;
}