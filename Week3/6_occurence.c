#include<stdio.h>
void main(){
    int i,n,k,c=0;
    printf("Arraysize: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Input number:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
        if(k==arr[i])
            c++;
    if(i==n)
        printf("0");
    else
        printf("%d",c);

}