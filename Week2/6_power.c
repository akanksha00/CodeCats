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
//DSAone 
int fastPower(int a, int b){
    int res=1;
    while(b>0){
        if((b&1)!=0) // b -> even => 0, b -> odd=>1
            res*=a; 
        a*=a;
        b=b>>1; //b=b/2
    }
    return res;
}