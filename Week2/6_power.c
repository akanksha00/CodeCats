#include<stdio.h>

int main(){
    int base,power,res=1,p;
    
    printf("Enter base and power: ");
    scanf("%d%d",&base,&power);
    p=power;
    while(power){
        res=res*base;
        power--;
    }
    printf("%d^%d: %d",base,p,res);
}