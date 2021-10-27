#include <stdio.h>
int main(){
    int i,a,b,j;
    printf("Enter Range:");
    scanf("%d%d",&a,&b);
    for(int j=a;j<=b;j++){
        for(i=2;i<j;i++)
            if(j%i==0)
                break;  
        if(j==i)
            printf("%d\t",j);
    }
}