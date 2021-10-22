#include <stdio.h>

int main(){
    int n,r;
    printf("Enter a number to check even or odd:");
    scanf("%d",&n);
    if(!(n&1))
        printf("even");
    else
        printf("odd");
    
}