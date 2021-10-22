#include <stdio.h>
int main(){
    double sal,hra, da, grs;
    printf("Enter basic salary: ");
    scanf("%lf",&sal);
    if(sal<=10000)
    {
       hra=sal*1.2;
       da=sal*1.8;
       grs=sal+hra+da;
       printf("Gross salary:%.2lf",grs);
    }
    else if(sal>10000 && sal<=20000){
       hra=sal*1.25;
       da=sal*1.90;
       grs=sal+hra+da;
       printf("Gross salary:%.2lf",grs);
    }
    else{
        hra=sal*1.3;
       da=sal*1.95;
       grs=sal+hra+da;
       printf("Gross salary:%.2lf",grs);
    }
}