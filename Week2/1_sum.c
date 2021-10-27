#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    printf("The sum of natural numbers upto %d terms: %d",n,(n*(n+1))/2);
}