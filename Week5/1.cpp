#include<stdio.h>

int main()
{
   int num1, num2, *ptr1, *ptr2;
   int sum;

   printf("Enter 1st number :: ");
   scanf("%d",&num1);
   printf("\nEnter 2nd number :: ");
   scanf("%d",&num2);

   ptr1 = &num1;
   ptr2 = &num2;

   sum = *ptr1 + *ptr2;

   printf("\nAddition: %d\n\n", sum);

   return 0;
}