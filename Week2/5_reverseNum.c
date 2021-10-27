#include<stdio.h>
int main(){
    int n,r=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n){
        r=r*10+(n%10);
        n/=10;
    }
    printf("The number in reversed order is: %d",r);
}