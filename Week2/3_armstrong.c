#include<stdio.h>
#include <math.h>
int armstrong(int n){
    int temp,p=0,s=0;
    temp=n;
    while(temp){
        p++;
        temp/=10;
    }
    temp=n;
    while(temp){
        s+=pow(temp%10,p);
        temp/=10;
    }
    if(n==s)
        return 1;
    else
        return 0;
}
int main(){
    int num,res;
    printf("Enter the number: ");
    scanf("%d",&num);
    res=armstrong(num);
    (res==1)?printf("%d is armstrong",num):printf("%d is not armstrong",num);
}