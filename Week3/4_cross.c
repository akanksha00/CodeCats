#include <stdio.h>
void main(){
    int n=9;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(j==i || j==n-i-1)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
}